`timescale 1ns / 1ps
// =============================================================================
//  Program : muldiv.v
//  Author  : Jin-you Wu
//  Date    : Jan/17/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the Multiplication-Division Unit of the Aquila core (A RISC-V core).
//  It implements the following RISC-V muldiv operations:
//      (0) mul
//      (1) mulh
//      (2) mulhsu
//      (3) mulhu
//      (4) div
//      (5) divu
//      (6) rem
//      (7) remu
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Sep/8/2020, by Chun-Jen Tsai:
//    Added an option to infer a fast Xilinx 1- or 3-cycle 32-bit x 32-bit
//    multiplier.
//
// -----------------------------------------------------------------------------
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2019,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
// =============================================================================
`include "aquila_config.vh"

module muldiv#(parameter XLEN = 32)
(
    input                   clk_i,
    input                   rst_i,
    input                   stall_i,
    input  [XLEN-1 : 0]     a_i,
    input  [XLEN-1 : 0]     b_i,
    input                   req_i,
    input  [ 2 : 0]         operation_sel_i,
    output reg [XLEN-1 : 0] muldiv_result_o,
    output reg              ready_o
);

function [XLEN-1 : 0] abs;
    input [XLEN-1 : 0] num;

    abs = num[XLEN-1] ? -num : num;
endfunction

// ================================================================================
// Operation signals
//
wire operation_mul, operation_mulh, operation_mulhsu, operation_mulhu,
     operation_div, operation_divu, operation_rem, operation_remu;

assign operation_mul = (operation_sel_i == 3'b000);
assign operation_mulh = (operation_sel_i == 3'b001);
assign operation_mulhsu = (operation_sel_i == 3'b010);
assign operation_mulhu = (operation_sel_i == 3'b011);
assign operation_div = (operation_sel_i == 3'b100);
assign operation_divu = (operation_sel_i == 3'b101);
assign operation_rem = (operation_sel_i == 3'b110);
assign operation_remu = (operation_sel_i == 3'b111);

wire is_divider, is_a_zero, is_b_zero,
     is_a_neg, is_b_neg, signed_adjust, mul_overflow;

assign is_divider = operation_sel_i[2];
assign is_a_zero = (a_i == 32'b0);
assign is_b_zero = (b_i == 32'b0);
assign is_a_neg  = a_i[31] & (operation_mulh | operation_mulhsu | operation_div | operation_rem);
assign is_b_neg  = b_i[31] & (operation_mulh | operation_div | operation_rem);
assign signed_adjust = is_a_neg ^ is_b_neg;
assign mul_overflow   = (is_a_neg & (a_i[30: 0] == 31'b0));

wire [XLEN-1 : 0] op_a, op_b;

assign op_a = ( | is_a_neg)? abs(a_i) : a_i;
assign op_b = ( | is_b_neg)? abs(b_i) : b_i;

wire              is_calc_done;
reg  [XLEN-1 : 0] reg32;
reg  [XLEN*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]     cnt;

`ifdef ENABLE_FAST_MULTIPLY
// For the fast multiplier using Xilinx FPGA IPs.
reg  [XLEN-1 : 0]   op_a_r, op_b_r;
reg  [XLEN*2-1 : 0] fast_result, mul0, mul1;
reg  [ 1 : 0]       fast_mul_counter;

assign is_calc_done = !(operation_mul | operation_mulh | operation_mulhsu |
                        operation_mulhu)? ~|cnt : & fast_mul_counter;
`else
// For the slow shift-add binary multiplier.
assign is_calc_done = ~|cnt;
`endif

wire [XLEN-1 : 0] mull, mulh, quotient, remainder;

assign mull = result[31 : 0];
assign mulh = result[63 : 32];
assign quotient = result[31 : 0];
assign remainder = result[64 : 33];

// ================================================================================
// Finite State Machine
//
localparam S_IDLE        = 3'b000,
           S_CALC        = 3'b001,
           S_SIGN_ADJUST = 3'b010,
           S_DONE        = 3'b011,
           S_STALL       = 3'b100;
reg [2 : 0] S, S_nxt;

always @(posedge clk_i)
begin
    if (rst_i)
        S <= S_IDLE;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        S_IDLE:
            S_nxt = (req_i)? (is_a_zero | is_b_zero)? S_DONE : S_CALC : S_IDLE;
        S_CALC:
            S_nxt = (is_calc_done)? S_SIGN_ADJUST : S_CALC;
        S_SIGN_ADJUST:
            S_nxt = S_DONE;
        S_DONE:
            S_nxt = (stall_i)? S_STALL : S_IDLE;
        S_STALL:
            S_nxt = (stall_i)? S_STALL : S_IDLE;
        default:
            S_nxt = S_IDLE;
    endcase
end

// ================================================================================
// Computation
//
wire mul_add = result[0];
wire div_sub = (result[63: 32] >= reg32);

wire [32 : 0] adder_opa, adder_opb;
assign adder_opa = is_divider ? -reg32 : reg32;
assign adder_opb = result[63: 32];

wire [32 : 0] adder_tmp = adder_opa + adder_opb;
wire [64 : 0] result_tmp = {adder_tmp, result[31: 0]};

`ifdef ENABLE_FAST_MULTIPLY
// Here, we use Xilinx synthesizer coding style to infer a
// 3-cycel multiplier. On KC-705@100MHz, you can even infer
// a single-cycle 32-bit x 32-bit multipler.
//
always @(posedge clk_i)
begin
    if (rst_i || ((S == S_IDLE) & req_i)) begin
        fast_result <= 32'b0;
        fast_mul_counter <= 2'b0; 
    end
    else begin
        op_a_r <= op_a;
        op_b_r <= op_b;
        mul0 <= op_a_r * op_b_r;
        mul1 <= mul0;
        fast_result <= mul1;
        fast_mul_counter <= (& fast_mul_counter)? fast_mul_counter : fast_mul_counter + 1;
    end
end
`endif

// Here, we use the slowest shift-add and shift-sub algorithms to
// implement the hardware divider and the multiplier. By default,
// the fast multiplier and the slow divider will be used for calculation.
//
always @(posedge clk_i)
begin
    if ( (S == S_IDLE) & req_i)
    begin
        if (is_divider)
        begin                       // divisor
            if (is_b_zero)
            begin                   // divide by zero, generate special value
                result[64: 33] <= a_i;
                result[32]  <= 1'b0;
                result[31: 0] <= {32{1'b1}};
            end
            else
            begin
                cnt <= 'd32;
                reg32 <= op_b;
                result <= {1'b0, 32'b0, op_a};  // ext_bit | remainder | quotient
            end
        end
        else
        begin                       // multiplier
            if (is_a_zero | is_b_zero)
            begin
                result <= 65'b0;
            end
            else
            begin
                cnt <= 'd31;
                reg32 <= op_a;
                result <= {1'b0, 32'b0, op_b};  // ext_bit | product
            end
        end
    end
    else if (S == S_CALC)
    begin
        cnt <= cnt - 'd1;
        if (is_divider)
        begin
            // slow divider: shift left
            result <= (div_sub)? {result_tmp[63 : 0], 1'b1} : {result[63 : 0], 1'b0};
        end
        else
        begin
            // slow multiplier: shift right
            result <= (mul_add)? {1'b0, result_tmp[64 : 1]} : {1'b0, result[64 : 1]};
        end
    end
    else if (S == S_SIGN_ADJUST)
    begin
        if (is_divider)
        begin
            result[64: 33] <= (is_a_neg)? -remainder : remainder;
            result[31: 0] <= (signed_adjust)? -quotient : quotient;
        end
        else
        begin
`ifdef ENABLE_FAST_MULTIPLY
            result <= (operation_mulh | operation_mulhu)? (signed_adjust)? -fast_result : fast_result
                    : (operation_mulhsu)? (is_a_neg)? -fast_result : fast_result : fast_result;
`else
            result <= (operation_mulh | operation_mulhu)? (signed_adjust)? -result : result
                    : (operation_mulhsu)? (is_a_neg)? -result : result : result;
`endif
        end
    end
end

// ================================================================================
// Output signals
//
always @(posedge clk_i)
begin
    if (S == S_DONE || S == S_STALL)
        ready_o <= 1;
    else
        ready_o <= 0;
end

always @(posedge clk_i)
begin
    if (S == S_DONE)
        muldiv_result_o <= ( {32{operation_mul}} & mull)
                      | ( {32{operation_mulh | operation_mulhsu | operation_mulhu}} & mulh)
                      | ( {32{operation_div | operation_divu}} & quotient)
                      | ( {32{operation_rem | operation_remu}} & remainder)
                      ;
    else
        muldiv_result_o <= muldiv_result_o;
end

endmodule
