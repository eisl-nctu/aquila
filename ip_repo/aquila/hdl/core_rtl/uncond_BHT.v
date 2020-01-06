`timescale 1ns / 1ps
// =============================================================================
//  Program : uncond_BHT.v
//  Author  : Jin-you Wu
//  Date    : Jan/19/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the Unconditional Branch History Table of the Aquila core (A RISC-V core).
//
//  Only jal instruction will be kept in Unconditional Branch History Table
//  because that for jalr, PC = rs1 + immI, rd=PC+4, the target address will be
//  affected by rs1, this instruction won't be kept here.
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

module uncond_BHT
#(parameter ENTRY_NUM = 24, ADDR_WIDTH = 5, DATA_WIDTH = 32)
(
    // External Signals
    input                     clk,
    input                     rst,
    input                     stall,

    // from Program_Counter
    input  [DATA_WIDTH-1 : 0] pc_IF,

    // from Decode_Eexcute_Pipeline
    input                     is_uncond_branch,
    input  [DATA_WIDTH-1 : 0] pc_EXE,

    // from Execution
    input  [DATA_WIDTH-1 : 0] branch_target_addr,

    // to Program_Counter
    output                    uncond_branch_hit,
    output [DATA_WIDTH-1 : 0] uncond_branch_target_addr
);

reg  [DATA_WIDTH-1 : 0] uncond_branch_pc_table[ENTRY_NUM - 1: 0];
wire                    we;
wire [DATA_WIDTH-1 : 0] data_o;
wire [ENTRY_NUM-1  : 0] addr_hit_IF;
wire [ENTRY_NUM-1  : 0] addr_hit_EXE;
reg  [ADDR_WIDTH-1 : 0] read_addr;
reg  [ADDR_WIDTH-1 : 0] write_addr;

assign we = is_uncond_branch & ~|addr_hit_EXE;

genvar i;
generate
    for (i = 0; i < ENTRY_NUM; i = i + 1)
    begin
        assign addr_hit_IF[i] = (uncond_branch_pc_table[i] == pc_IF);
        assign addr_hit_EXE[i] = (uncond_branch_pc_table[i] == pc_EXE);
    end
endgenerate


/* ******************************************************************** *
 *  Mapping example of read_addr:                                       *
 *      addr_hit_IF     value   ->  the corresponding read_addr         *
 *      000001           1      ->  0                                   *
 *      000010           2      ->  1                                   *
 *      000100           4      ->  2                                   *
 *      001000           8      ->  3                                   *
 *      010000          16      ->  4                                   *
 *      100000          32      ->  5                                   *
 *  So, we can get the read_addr from log2 function                     *
 * ******************************************************************** */ 

always @( * )
begin
    case (addr_hit_IF)
        32'h0000_0002: read_addr <= 1 ;
        32'h0000_0004: read_addr <= 2 ;
        32'h0000_0008: read_addr <= 3 ;
        32'h0000_0010: read_addr <= 4 ;
        32'h0000_0020: read_addr <= 5 ;
        32'h0000_0040: read_addr <= 6 ;
        32'h0000_0080: read_addr <= 7 ;
        32'h0000_0100: read_addr <= 8 ;
        32'h0000_0200: read_addr <= 9 ;
        32'h0000_0400: read_addr <= 10;
        32'h0000_0800: read_addr <= 11;
        32'h0000_1000: read_addr <= 12;
        32'h0000_2000: read_addr <= 13;
        32'h0000_4000: read_addr <= 14;
        32'h0000_8000: read_addr <= 15;
        32'h0001_0000: read_addr <= 16;
        32'h0002_0000: read_addr <= 17;
        32'h0004_0000: read_addr <= 18;
        32'h0008_0000: read_addr <= 19;
        32'h0010_0000: read_addr <= 20;
        32'h0020_0000: read_addr <= 21;
        32'h0040_0000: read_addr <= 22;
        32'h0080_0000: read_addr <= 23;
        32'h0100_0000: read_addr <= 24;
        32'h0200_0000: read_addr <= 25;
        32'h0400_0000: read_addr <= 26;
        32'h0800_0000: read_addr <= 27;
        32'h1000_0000: read_addr <= 28;
        32'h2000_0000: read_addr <= 29;
        32'h4000_0000: read_addr <= 30;
        32'h8000_0000: read_addr <= 31;
        default:       read_addr <= 0;  //32'h0000_0001
    endcase
end

always @(posedge clk)
begin
    if (rst)
    begin
        write_addr <= 0;
    end
    else if (stall)
    begin
        write_addr <= write_addr;
    end
    else if (we)
    begin
        write_addr <= (write_addr == (ENTRY_NUM - 1)) ? 0 : write_addr + 1;
    end
end

integer idx;
always @(posedge clk)
begin
    if (rst)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            uncond_branch_pc_table[idx] <= 0;
    end
    else if (stall)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            uncond_branch_pc_table[idx] <= uncond_branch_pc_table[idx];
    end
    else if (we)
    begin
        uncond_branch_pc_table[write_addr] <= pc_EXE;
    end
end

// ===========================================================================
//  Submodule
//
distri_ram #(.ENTRY_NUM(ENTRY_NUM), .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH))
uncond_BHT_distri_ram_0(
    .clk(clk),
    .we(we),
    .write_addr(write_addr),
    .read_addr(read_addr),
    .branch_target_addr(branch_target_addr),
    .data_o(data_o)
);

// ===========================================================================
//  Outputs signals
//
assign uncond_branch_hit = ( | addr_hit_IF) & ( | pc_IF);
assign uncond_branch_target_addr = {32{( | addr_hit_IF)}} & data_o;

endmodule // uncond_BHT
