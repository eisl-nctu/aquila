`timescale 1ns / 1ps
// =============================================================================
//  Program : alu.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Arithmetic Logic Unit of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Nov/26/2019, by Chun-Jen Tsai:
//    Modify the arithmetic shift code and parameterize XLEN.
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

module alu #(parameter XLEN = 32)
(
    input  [XLEN-1 : 0] a_i,
    input  [XLEN-1 : 0] b_i,             // shift amount
    input  [ 2 : 0]     operation_sel_i,
    input               shift_sel_i,     // arith. or logical shift
    output [XLEN-1 : 0] alu_result_o
);

wire [XLEN-1 : 0] ones;

wire [XLEN-1 : 0] result_add, result_sll, result_slt, result_sltu;
wire [XLEN-1 : 0] result_xor, result_sr, result_or, result_and;

wire operation_add, operation_sll, operation_slt, operation_sltu;
wire operation_xor, operation_sr, operation_or, operation_and;

assign result_add = a_i + b_i;                                    // add
assign result_sll = a_i << b_i[4:0];                              // sll
assign result_slt = ($signed(a_i) < $signed(b_i)) ? 1 : 0;        // slt
assign result_sltu = (a_i < b_i) ? 1 : 0;                         // sltu
assign result_xor = a_i ^ b_i;                                    // xor
assign result_sr = shift_sel_i? ($signed(a_i) >>> b_i[4:0]) : ($signed(a_i) >> b_i[4:0]); // sra, srl
assign result_or = a_i | b_i;                                     // or
assign result_and = a_i & b_i;                                    // and

assign operation_add  = (operation_sel_i == 3'b000);
assign operation_sll  = (operation_sel_i == 3'b001);
assign operation_slt  = (operation_sel_i == 3'b010);
assign operation_sltu = (operation_sel_i == 3'b011);
assign operation_xor  = (operation_sel_i == 3'b100);
assign operation_sr   = (operation_sel_i == 3'b101);
assign operation_or   = (operation_sel_i == 3'b110);
assign operation_and  = (operation_sel_i == 3'b111);

assign alu_result_o =
       (    {XLEN{operation_add }} & result_add  )
       | (  {XLEN{operation_sll }} & result_sll  )
       | (  {XLEN{operation_slt }} & result_slt  )
       | (  {XLEN{operation_sltu}} & result_sltu )
       | (  {XLEN{operation_xor }} & result_xor  )
       | (  {XLEN{operation_sr  }} & result_sr   )
       | (  {XLEN{operation_or  }} & result_or   )
       | (  {XLEN{operation_and }} & result_and  );

endmodule // alu
