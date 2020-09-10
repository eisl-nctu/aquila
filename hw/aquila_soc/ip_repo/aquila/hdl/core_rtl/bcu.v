`timescale 1ns / 1ps
// =============================================================================
//  Program : bcu.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Branch Condition Unit of the Aquila core (A RISC-V core).
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

module bcu#(parameter XLEN = 32)
(
    input  [XLEN-1 : 0] a_i,
    input  [XLEN-1 : 0] b_i,
    input  [ 2 : 0]     operation_sel_i,
    output              compare_result_o
);

wire signed [XLEN-1 : 0] signed_a = a_i;
wire signed [XLEN-1 : 0] signed_b = b_i;

wire result_beq  = (a_i == b_i) ? 1 : 0;
wire result_bne  = (a_i != b_i) ? 1 : 0;
wire result_blt  = (signed_a < signed_b) ? 1 : 0;
wire result_bge  = (signed_a >= signed_b) ? 1 : 0;
wire result_bltu = (a_i < b_i) ? 1 : 0;
wire result_bgeu = (a_i >= b_i) ? 1 : 0;

wire operation_beq = (operation_sel_i == 3'b000);
wire operation_bne = (operation_sel_i == 3'b001);
wire operation_blt = (operation_sel_i == 3'b100);
wire operation_bge = (operation_sel_i == 3'b101);
wire operation_bltu = (operation_sel_i == 3'b110);
wire operation_bgeu = (operation_sel_i == 3'b111);

assign compare_result_o =
       (operation_beq & result_beq )
       | (operation_bne & result_bne )
       | (operation_blt & result_blt )
       | (operation_bge & result_bge )
       | (operation_bltu & result_bltu)
       | (operation_bgeu & result_bgeu);

endmodule // bcu
