`timescale 1ns / 1ps 
// =============================================================================
//  Program : bpu.v
//  Author  : Jin-you Wu
//  Date    : Jan/19/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the Branch Prediction Unit (BPU) of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Aug/15/2020, by Chun-Jen Tsai:
//    Hanlding of JAL in this BPU. In the original code, an additional
//    Unconditional Branch Prediction Unit (UC-BPU) was used to handle
//    the JAL instruction, which seemed redundant.
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

module bpu #( parameter ENTRY_NUM = 64, parameter XLEN = 32 )
(
    // System signals
    input               clk_i,
    input               rst_i,
    input               stall_i,

    // from Program_Counter
    input  [XLEN-1 : 0] pc_i,

    // from Decode
    input               is_jal_i,
    input               is_cond_branch_i,
    input  [XLEN-1 : 0] dec_pc_i,

    // from Execute
    input               exe_is_branch_i,
    input               branch_taken_i,
    input               branch_misprediction_i,
    input  [XLEN-1 : 0] branch_target_addr_i,

    // to Program_Counter
    output              branch_hit_o,
    output              branch_decision_o,
    output [XLEN-1 : 0] branch_target_addr_o
);

localparam TBL_WIDTH = $clog2(ENTRY_NUM);

reg  [XLEN-1 : 0]      branch_pc_table[ENTRY_NUM-1 : 0];
wire                   we;
wire [XLEN-1 : 0]      predicted_pc;
wire [ENTRY_NUM-1 : 0] addr_hit_PCU;
wire [ENTRY_NUM-1 : 0] addr_hit_DEC;
reg  [TBL_WIDTH-1 : 0] read_addr;
reg  [TBL_WIDTH-1 : 0] write_addr;
reg  [TBL_WIDTH-1 : 0] update_addr;

// two-bit saturating counter
reg  [1: 0]            branch_likelihood[ENTRY_NUM-1 : 0];

// "we" is enabled to add a new entry to the BPU table when
// the decoder sees a branch instruction for the first time.
// CY Hsiang 0220_2020: added "~stall_i" to "we ="
assign we = ~stall_i & (is_cond_branch_i | is_jal_i) & ~(|addr_hit_DEC);

genvar i;
generate
    for (i = 0; i < ENTRY_NUM; i = i + 1)
    begin
        assign addr_hit_PCU[i] = (branch_pc_table[i] == pc_i);
        assign addr_hit_DEC[i] = (branch_pc_table[i] == dec_pc_i);
    end
endgenerate

always @(posedge clk_i)
begin
    if (rst_i)
    begin
        write_addr <= 0;
    end
    else if (stall_i)
    begin
        write_addr <= write_addr;
    end
    else if (we)
    begin
        write_addr <= (write_addr == (ENTRY_NUM - 1)) ? 0 : write_addr + 1;
    end
end

/* ******************************************************************** *
 *  Mapping example of read_addr/update_addr:                           *
 *     addr_hit_XXX     value   ->  the corresponding address           *
 *       000001           1     ->  0                                   *
 *       000010           2     ->  1                                   *
 *       000100           4     ->  2                                   *
 *       001000           8     ->  3                                   *
 *       010000          16     ->  4                                   *
 *       100000          32     ->  5                                   *
 *  So, we can get the read_addr from log2 function                     *
 * ******************************************************************** */
always @(*)
begin
    case (addr_hit_PCU)
        64'h0000_0000_0000_0002: read_addr <= 1 ;
        64'h0000_0000_0000_0004: read_addr <= 2 ;
        64'h0000_0000_0000_0008: read_addr <= 3 ;
        64'h0000_0000_0000_0010: read_addr <= 4 ;
        64'h0000_0000_0000_0020: read_addr <= 5 ;
        64'h0000_0000_0000_0040: read_addr <= 6 ;
        64'h0000_0000_0000_0080: read_addr <= 7 ;
        64'h0000_0000_0000_0100: read_addr <= 8 ;
        64'h0000_0000_0000_0200: read_addr <= 9 ;
        64'h0000_0000_0000_0400: read_addr <= 10;
        64'h0000_0000_0000_0800: read_addr <= 11;
        64'h0000_0000_0000_1000: read_addr <= 12;
        64'h0000_0000_0000_2000: read_addr <= 13;
        64'h0000_0000_0000_4000: read_addr <= 14;
        64'h0000_0000_0000_8000: read_addr <= 15;
        64'h0000_0000_0001_0000: read_addr <= 16;
        64'h0000_0000_0002_0000: read_addr <= 17;
        64'h0000_0000_0004_0000: read_addr <= 18;
        64'h0000_0000_0008_0000: read_addr <= 19;
        64'h0000_0000_0010_0000: read_addr <= 20;
        64'h0000_0000_0020_0000: read_addr <= 21;
        64'h0000_0000_0040_0000: read_addr <= 22;
        64'h0000_0000_0080_0000: read_addr <= 23;
        64'h0000_0000_0100_0000: read_addr <= 24;
        64'h0000_0000_0200_0000: read_addr <= 25;
        64'h0000_0000_0400_0000: read_addr <= 26;
        64'h0000_0000_0800_0000: read_addr <= 27;
        64'h0000_0000_1000_0000: read_addr <= 28;
        64'h0000_0000_2000_0000: read_addr <= 29;
        64'h0000_0000_4000_0000: read_addr <= 30;
        64'h0000_0000_8000_0000: read_addr <= 31;
        64'h0000_0001_0000_0000: read_addr <= 32;
        64'h0000_0002_0000_0000: read_addr <= 33;
        64'h0000_0004_0000_0000: read_addr <= 34;
        64'h0000_0008_0000_0000: read_addr <= 35;
        64'h0000_0010_0000_0000: read_addr <= 36;
        64'h0000_0020_0000_0000: read_addr <= 37;
        64'h0000_0040_0000_0000: read_addr <= 38;
        64'h0000_0080_0000_0000: read_addr <= 39;
        64'h0000_0100_0000_0000: read_addr <= 40;
        64'h0000_0200_0000_0000: read_addr <= 41;
        64'h0000_0400_0000_0000: read_addr <= 42;
        64'h0000_0800_0000_0000: read_addr <= 43;
        64'h0000_1000_0000_0000: read_addr <= 44;
        64'h0000_2000_0000_0000: read_addr <= 45;
        64'h0000_4000_0000_0000: read_addr <= 46;
        64'h0000_8000_0000_0000: read_addr <= 47;
        64'h0001_0000_0000_0000: read_addr <= 48;
        64'h0002_0000_0000_0000: read_addr <= 49;
        64'h0004_0000_0000_0000: read_addr <= 50;
        64'h0008_0000_0000_0000: read_addr <= 51;
        64'h0010_0000_0000_0000: read_addr <= 52;
        64'h0020_0000_0000_0000: read_addr <= 53;
        64'h0040_0000_0000_0000: read_addr <= 54;
        64'h0080_0000_0000_0000: read_addr <= 55;
        64'h0100_0000_0000_0000: read_addr <= 56;
        64'h0200_0000_0000_0000: read_addr <= 57;
        64'h0400_0000_0000_0000: read_addr <= 58;
        64'h0800_0000_0000_0000: read_addr <= 59;
        64'h1000_0000_0000_0000: read_addr <= 60;
        64'h2000_0000_0000_0000: read_addr <= 61;
        64'h4000_0000_0000_0000: read_addr <= 62;
        64'h8000_0000_0000_0000: read_addr <= 63;
        default:       read_addr <= 0;  //32'h0000_0001
    endcase
end

always @(*)
begin
    case (addr_hit_DEC)
        64'h0000_0000_0000_0002: update_addr <= 1 ;
        64'h0000_0000_0000_0004: update_addr <= 2 ;
        64'h0000_0000_0000_0008: update_addr <= 3 ;
        64'h0000_0000_0000_0010: update_addr <= 4 ;
        64'h0000_0000_0000_0020: update_addr <= 5 ;
        64'h0000_0000_0000_0040: update_addr <= 6 ;
        64'h0000_0000_0000_0080: update_addr <= 7 ;
        64'h0000_0000_0000_0100: update_addr <= 8 ;
        64'h0000_0000_0000_0200: update_addr <= 9 ;
        64'h0000_0000_0000_0400: update_addr <= 10;
        64'h0000_0000_0000_0800: update_addr <= 11;
        64'h0000_0000_0000_1000: update_addr <= 12;
        64'h0000_0000_0000_2000: update_addr <= 13;
        64'h0000_0000_0000_4000: update_addr <= 14;
        64'h0000_0000_0000_8000: update_addr <= 15;
        64'h0000_0000_0001_0000: update_addr <= 16;
        64'h0000_0000_0002_0000: update_addr <= 17;
        64'h0000_0000_0004_0000: update_addr <= 18;
        64'h0000_0000_0008_0000: update_addr <= 19;
        64'h0000_0000_0010_0000: update_addr <= 20;
        64'h0000_0000_0020_0000: update_addr <= 21;
        64'h0000_0000_0040_0000: update_addr <= 22;
        64'h0000_0000_0080_0000: update_addr <= 23;
        64'h0000_0000_0100_0000: update_addr <= 24;
        64'h0000_0000_0200_0000: update_addr <= 25;
        64'h0000_0000_0400_0000: update_addr <= 26;
        64'h0000_0000_0800_0000: update_addr <= 27;
        64'h0000_0000_1000_0000: update_addr <= 28;
        64'h0000_0000_2000_0000: update_addr <= 29;
        64'h0000_0000_4000_0000: update_addr <= 30;
        64'h0000_0000_8000_0000: update_addr <= 31;
        64'h0000_0001_0000_0000: update_addr <= 32;
        64'h0000_0002_0000_0000: update_addr <= 33;
        64'h0000_0004_0000_0000: update_addr <= 34;
        64'h0000_0008_0000_0000: update_addr <= 35;
        64'h0000_0010_0000_0000: update_addr <= 36;
        64'h0000_0020_0000_0000: update_addr <= 37;
        64'h0000_0040_0000_0000: update_addr <= 38;
        64'h0000_0080_0000_0000: update_addr <= 39;
        64'h0000_0100_0000_0000: update_addr <= 40;
        64'h0000_0200_0000_0000: update_addr <= 41;
        64'h0000_0400_0000_0000: update_addr <= 42;
        64'h0000_0800_0000_0000: update_addr <= 43;
        64'h0000_1000_0000_0000: update_addr <= 44;
        64'h0000_2000_0000_0000: update_addr <= 45;
        64'h0000_4000_0000_0000: update_addr <= 46;
        64'h0000_8000_0000_0000: update_addr <= 47;
        64'h0001_0000_0000_0000: update_addr <= 48;
        64'h0002_0000_0000_0000: update_addr <= 49;
        64'h0004_0000_0000_0000: update_addr <= 50;
        64'h0008_0000_0000_0000: update_addr <= 51;
        64'h0010_0000_0000_0000: update_addr <= 52;
        64'h0020_0000_0000_0000: update_addr <= 53;
        64'h0040_0000_0000_0000: update_addr <= 54;
        64'h0080_0000_0000_0000: update_addr <= 55;
        64'h0100_0000_0000_0000: update_addr <= 56;
        64'h0200_0000_0000_0000: update_addr <= 57;
        64'h0400_0000_0000_0000: update_addr <= 58;
        64'h0800_0000_0000_0000: update_addr <= 59;
        64'h1000_0000_0000_0000: update_addr <= 60;
        64'h2000_0000_0000_0000: update_addr <= 61;
        64'h4000_0000_0000_0000: update_addr <= 62;
        64'h8000_0000_0000_0000: update_addr <= 63;
        default:       update_addr <= 0;  //32'h0000_0001
    endcase
end

integer idx;
always @(posedge clk_i)
begin
    if (rst_i)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            branch_pc_table[idx] <= 0;
    end
    else if (stall_i)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            branch_pc_table[idx] <= branch_pc_table[idx];
    end
    else if (we)
    begin
        branch_pc_table[write_addr] <= dec_pc_i;
    end
end

always @(posedge clk_i)
begin
    if (rst_i)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            branch_likelihood[idx] <= 2'b0;
    end
    else if (stall_i)
    begin
        for (idx = 0; idx < ENTRY_NUM; idx = idx + 1)
            branch_likelihood[idx] <= branch_likelihood[idx];
    end
    else
    begin
        if (we) // Execute the branch instruction for the first time.
        begin
            branch_likelihood[write_addr] <= {branch_taken_i, branch_taken_i};
        end
        else if (exe_is_branch_i)
        begin
            case (branch_likelihood[update_addr])
                2'b00:  // strongly not taken
                    if (branch_taken_i)
                        branch_likelihood[update_addr] <= 2'b01;
                    else
                        branch_likelihood[update_addr] <= 2'b00;
                2'b01:  // weakly not taken
                    if (branch_taken_i)
                        branch_likelihood[update_addr] <= 2'b11;
                    else
                        branch_likelihood[update_addr] <= 2'b00;
                2'b10:  // weakly taken
                    if (branch_taken_i)
                        branch_likelihood[update_addr] <= 2'b11;
                    else
                        branch_likelihood[update_addr] <= 2'b00;
                2'b11:  // strongly taken
                    if (branch_taken_i)
                        branch_likelihood[update_addr] <= 2'b11;
                    else
                        branch_likelihood[update_addr] <= 2'b10;
            endcase
        end
    end
end

// ===========================================================================
//  Branch PC histroy table.
//
distri_ram #(.ENTRY_NUM(ENTRY_NUM), .XLEN(XLEN))
bpu_pc_history(
    .clk_i(clk_i),
    .we_i(we),                     // Enabled when the instruction at Decode.
    .write_addr_i(write_addr),     // Write addr for the instruction at Decode.
    .read_addr_i(read_addr),       // Read addr for Fetch.
    .data_i(branch_target_addr_i), // Valid at the next cycle (instr. at Execute).
    .data_o(predicted_pc)          // Combinational read data (same cycle at Fetch).
);

// ===========================================================================
//  Outputs signals
//
assign branch_hit_o = ( | addr_hit_PCU) & ( | pc_i);
assign branch_target_addr_o = {32{( | addr_hit_PCU)}} & predicted_pc;
assign branch_decision_o = ( | branch_likelihood[read_addr][1] );

endmodule
