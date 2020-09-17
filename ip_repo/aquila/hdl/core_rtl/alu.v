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
//    Modify the arithmetic shift code and parameterize DATA_WIDTH.
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

`timescale 1 ns / 1 ps
module alu #(parameter DATA_WIDTH = 32)
(
    input  [DATA_WIDTH-1 : 0] a,
    input  [DATA_WIDTH-1 : 0] b,             // shift amount
    input  [ 2 : 0]           operation_sel,
    input                     shift_sel,     // arith. or logical shift
    output [DATA_WIDTH-1 : 0] alu_result
);

wire [DATA_WIDTH-1 : 0] ones;

wire [DATA_WIDTH-1 : 0] result_add, result_sll, result_slt, result_sltu;
wire [DATA_WIDTH-1 : 0] result_xor, result_sr, result_or, result_and;

wire operation_add, operation_sll, operation_slt, operation_sltu;
wire operation_xor, operation_sr, operation_or, operation_and;

assign result_add = a + b;                                    // add
assign result_sll = a << b[4:0];                              // sll
assign result_slt = ($signed(a) < $signed(b)) ? 1 : 0;        // slt
assign result_sltu = (a < b) ? 1 : 0;                         // sltu
assign result_xor = a ^ b;                                    // xor
assign result_sr = shift_sel? ($signed(a) >>> b[4:0]) : ($signed(a) >> b[4:0]); // sra, srl
assign result_or = a | b;                                     // or
assign result_and = a & b;                                    // and

assign operation_add  = (operation_sel == 3'b000);
assign operation_sll  = (operation_sel == 3'b001);
assign operation_slt  = (operation_sel == 3'b010);
assign operation_sltu = (operation_sel == 3'b011);
assign operation_xor  = (operation_sel == 3'b100);
assign operation_sr   = (operation_sel == 3'b101);
assign operation_or   = (operation_sel == 3'b110);
assign operation_and  = (operation_sel == 3'b111);

assign alu_result =
       (    {DATA_WIDTH{operation_add }} & result_add  )
       | (  {DATA_WIDTH{operation_sll }} & result_sll  )
       | (  {DATA_WIDTH{operation_slt }} & result_slt  )
       | (  {DATA_WIDTH{operation_sltu}} & result_sltu )
       | (  {DATA_WIDTH{operation_xor }} & result_xor  )
       | (  {DATA_WIDTH{operation_sr  }} & result_sr   )
       | (  {DATA_WIDTH{operation_or  }} & result_or   )
       | (  {DATA_WIDTH{operation_and }} & result_and  );

endmodule // alu
