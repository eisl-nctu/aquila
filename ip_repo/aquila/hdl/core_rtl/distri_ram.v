`timescale 1ns / 1ps
// =============================================================================
//  Program : distri_ram.v
//  Author  : Dong-Fong Syu
//  Date    : Feb/01/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is a Distributed RAM Block template for the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
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

module distri_ram
#(parameter ENTRY_NUM = 24, ADDR_WIDTH = 5, DATA_WIDTH = 32)
(
    input  clk,
    input  we,
    input  [DATA_WIDTH - 1: 0] branch_target_addr,
    input  [ADDR_WIDTH - 1: 0] write_addr,
    input  [ADDR_WIDTH - 1: 0] read_addr,
    output [DATA_WIDTH - 1: 0] data_o
);

reg [DATA_WIDTH - 1: 0] history_table [ENTRY_NUM - 1: 0];
assign data_o = history_table[read_addr];

integer i;
initial
begin
    for (i = 0;i < ENTRY_NUM;i = i + 1)
        history_table[i] <= 0;
end

always @(posedge clk)
begin
    if (we)
    begin
        history_table[write_addr] <= branch_target_addr;
    end
end

endmodule // distri_ram
