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
//  None.
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
////////////////////////////////////////////////////////////////////////////////////////
// Company: MMES Lab., Department of Computer Science and Information Engineering, NCTU
// Engineer: Jin-you Wu
//
// Create Date: 2018/01/17
// Design Name: Mul Div Unit
// Module Name: muldiv
// Project Name: Processor Design
// Target Devices:
// Tool Versions:
// Description: RISC-V muldiv
//      (0) mul
//      (1) mulh
//      (2) mulhsu
//      (3) mulhu
//      (4) div
//      (5) divu
//      (6) rem
//      (7) remu
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////////////

module muldiv#(DATA_WIDTH = 32)
(
    input                         clk,
    input                         rst,
    input  [DATA_WIDTH-1 : 0]     a,
    input  [DATA_WIDTH-1 : 0]     b,
    input                         req,
    input  [ 2 : 0]               operation_sel,
    output reg [DATA_WIDTH-1 : 0] muldiv_result,
    output reg                    ready
);

// ================================================================================
// Functions
//
function [DATA_WIDTH-1 : 0] twos;
    input [DATA_WIDTH-1 : 0] num;

    twos = ~num + 1'b1;
endfunction

function [DATA_WIDTH-1 : 0] abs;
    input [DATA_WIDTH-1 : 0] num;

    abs = num[DATA_WIDTH-1] ? twos(num) : num;
endfunction

// ================================================================================
// Operation signals
//
wire operation_mul, operation_mulh, operation_mulhsu, operation_mulhu,
     operation_div, operation_divu, operation_rem, operation_remu;

assign operation_mul = (operation_sel == 3'b000);
assign operation_mulh = (operation_sel == 3'b001);
assign operation_mulhsu = (operation_sel == 3'b010);
assign operation_mulhu = (operation_sel == 3'b011);
assign operation_div = (operation_sel == 3'b100);
assign operation_divu = (operation_sel == 3'b101);
assign operation_rem = (operation_sel == 3'b110);
assign operation_remu = (operation_sel == 3'b111);

wire is_divider, is_a_zero, is_b_zero,
     is_a_neg, is_b_neg, signed_adjust, mul_overflow;

assign is_divider = operation_sel[2];
assign is_a_zero = (a == 32'b0);
assign is_b_zero = (b == 32'b0);
assign is_a_neg  = a[31] & (operation_mulh | operation_mulhsu | operation_div | operation_rem);
assign is_b_neg  = b[31] & (operation_mulh | operation_div | operation_rem);
assign signed_adjust = is_a_neg ^ is_b_neg;
assign mul_overflow   = (is_a_neg & (a[30: 0] == 31'b0));

wire [DATA_WIDTH-1 : 0] op_a, op_b;

assign op_a = ( | is_a_neg) ? abs(a) : a;
assign op_b = ( | is_b_neg) ? abs(b) : b;

wire                    is_calc_done;
reg  [DATA_WIDTH-1 : 0] reg32;
reg  [DATA_WIDTH*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]           cnt;

assign is_calc_done = ~|cnt;

wire [DATA_WIDTH-1 : 0] mull, mulh, quotient, remainder;

assign mull = result[31: 0];
assign mulh = result[63: 32];
assign quotient = result[31: 0];
assign remainder = result[64: 33];

// ================================================================================
// Finite State Machine
//
localparam S_IDLE    = 2'b00,
           S_CALC    = 2'b01,
           S_SIGN_ADJUST = 2'b10,
           S_DONE    = 2'b11;
reg [1 : 0] S, S_nxt;

always @(posedge clk)
begin
    if (rst)
        S <= S_IDLE;
    else
        S <= S_nxt;
end
always @( * )
begin
    case (S)
        S_IDLE:
            S_nxt = ( | req) ?
            (is_a_zero | is_b_zero) ? S_DONE : S_CALC
                : S_IDLE;
        S_CALC:
            S_nxt = ( | is_calc_done) ? S_SIGN_ADJUST : S_CALC;
        S_SIGN_ADJUST:
            S_nxt = S_DONE;
        S_DONE:
            S_nxt = S_IDLE;
        default:
            S_nxt = S_IDLE;
    endcase
end

// ================================================================================
// Computation
//
wire mul_add = ( | result[0]);
wire div_sub = (result[63: 32] >= reg32);

wire [32 : 0] adder_opa, adder_opb;
assign adder_opa = is_divider ? twos(reg32) : reg32;
assign adder_opb = result[63: 32];

wire [32 : 0] adder_tmp = adder_opa + adder_opb;
wire [64 : 0] result_tmp = {adder_tmp, result[31: 0]};

always @(posedge clk)
begin
    if ( (S == S_IDLE) & req)
    begin
        if ( | is_divider)
        begin                   // divisor
            if (is_b_zero)
            begin                   // divide by zero, generate special value
                result[64: 33] <= a;
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
        begin                               // multiplier
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
        if ( | is_divider)
        begin
            result <= ( | div_sub) ? {result_tmp[63 : 0], 1'b1} : {result[63 : 0], 1'b0};       // divider: shift left
        end
        else
        begin
            result <= ( | mul_add) ? {1'b0, result_tmp[64 : 1]} : {1'b0, result[64 : 1]};       // multiplier: shift right
        end
    end
    else if (S == S_SIGN_ADJUST)
    begin
        if ( | is_divider)
        begin
            result[64: 33] <= ( | is_a_neg) ? twos(remainder) : remainder;
            result[31: 0] <= ( | signed_adjust) ? twos(quotient) : quotient;
        end
        else
        begin
            result <= (operation_mulh | operation_mulhu) ? ( | signed_adjust) ? -result : result
       : ( | operation_mulhsu) ? ( | is_a_neg) ? -result : result
       : result;
        end
    end
end

// ================================================================================
// Output signals
//
always @(posedge clk)
begin
    if (S == S_DONE)
        ready <= 1;
    else
        ready <= 0;
end

always @(posedge clk)
begin
    if (S == S_DONE)
        muldiv_result <= ( {32{operation_mul}} & mull)
                      | ( {32{operation_mulh | operation_mulhsu | operation_mulhu}} & mulh)
                      | ( {32{operation_div | operation_divu}} & quotient)
                      | ( {32{operation_rem | operation_remu}} & remainder)
                      ;
    else
        muldiv_result <= muldiv_result;
end

endmodule   // muldiv
