`timescale 1ns / 1ps
// =============================================================================
//  Program : icache.v
//  Author  : Jin-you Wu
//  Date    : Oct/31/2018
// -----------------------------------------------------------------------------
//  Description:
//  This module implements the L1 Instruction Cache with the following
//  properties:
//      4-way set associative
//      FIFO replacement policy
//      Read-only
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
`include "aquila_config.vh"

module icache
#(parameter XLEN = 32,
  parameter CACHE_SIZE = 64,
  parameter CLSIZE = `CLP    // Cache line size.
)
(
    /////////// System signals   ////////////////////////////////////////////////
    input                   clk_i, rst_i,

    /////////// Processor        ////////////////////////////////////////////////
    input                   p_strobe_i,   // instruction fetch request
    input  [XLEN-1 : 0]     p_addr_i,     // instruction address
    input                   p_flush_i,    // cache flush request
    output                  p_ready_o,    // the cache instruction is ready
    output reg [XLEN-1 : 0] p_instr_o,    // instruction output

    /////////// D-Cache          ////////////////////////////////////////////////
    input                   d_flushing_i, // D-Cache is busy flushing

    /////////// Memory           ////////////////////////////////////////////////
    output reg              m_strobe_o,   // cache send a request to memory
    output reg [XLEN-1 : 0] m_addr_o,     // cache send address to memory
    input                   m_ready_i,    // the data from memory is ready
    input  [CLSIZE-1 : 0]   m_data_i      // the data from memory
);

// Parameter        /////////////////////////////////////////////////////////////
localparam N_WAYS          = 4;
localparam N_LINES         = (CACHE_SIZE*1024*8) / (N_WAYS*CLSIZE);

localparam WAY_BITS        = $clog2(N_WAYS);
localparam BYTE_BITS       = 2;
localparam WORD_BITS       = $clog2(CLSIZE/XLEN);
localparam LINE_BITS       = $clog2(N_LINES);
localparam NONTAG_BITS     = LINE_BITS + WORD_BITS + BYTE_BITS;
localparam TAG_BITS        = XLEN - NONTAG_BITS;

// Input information ////////////////////////////////////////////////////////////
wire [WORD_BITS-1 : 0] line_offset;
wire [LINE_BITS-1 : 0] line_index;
wire [TAG_BITS-1  : 0] tag;

assign line_offset = p_addr_i[WORD_BITS + BYTE_BITS - 1 : BYTE_BITS];
assign line_index  = p_addr_i[NONTAG_BITS - 1 : WORD_BITS + BYTE_BITS];
assign tag         = p_addr_i[XLEN - 1 : NONTAG_BITS];

//=======================================================
// 4-way associative cache signals
//=======================================================
wire way_hit[0 : N_WAYS-1];
wire cache_hit;
wire [CLSIZE-1 : 0] c_instr_o [0 : N_WAYS-1]; // cache data
reg  [CLSIZE-1 : 0] c_instr;
reg  cache_write [0 : N_WAYS-1];

//=======================================================
//  Valid and Tag store in LUT
//=======================================================
reg VALID_ [0 : N_LINES-1][0 : N_WAYS-1];
reg [TAG_BITS-1 : 0] TAG_ [0 : N_LINES-1][0 : N_WAYS-1];

//=======================================================
// FIFO replace policy signals
//=======================================================
reg  [WAY_BITS-1 : 0]  FIFO_cnt [0 : N_LINES-1]; // Replace policy counter.
reg  [WAY_BITS-1 : 0]  victim_sel;               // The victim cache select.
wire                   is_diff_index;
reg  [LINE_BITS-1 : 0] index_prev;

//=======================================================
//  I-cache Finite State Machine
//=======================================================
localparam
    Idle            = 0,
    Next            = 1,
    RdfromMem       = 2,
    RdfromMemFinish = 3;

reg [1: 0]  S, S_nxt;

always @(posedge clk_i)
begin
    if (rst_i)
        S <= Idle;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        Idle:
            if (p_strobe_i)
                S_nxt = Next;
            else
                S_nxt = Idle;
        Next:
            if (!cache_hit && !d_flushing_i)
                S_nxt =  RdfromMem;
            else
                S_nxt = Next;
        RdfromMem:
            if (m_ready_i)
                S_nxt = RdfromMemFinish;
            else
                S_nxt = RdfromMem;
        RdfromMemFinish:
            S_nxt = Next;
    endcase
end

assign way_hit[0] = (VALID_[line_index][0] && (TAG_[line_index][0] == tag))? 1:0;
assign way_hit[1] = (VALID_[line_index][1] && (TAG_[line_index][1] == tag))? 1:0;
assign way_hit[2] = (VALID_[line_index][2] && (TAG_[line_index][2] == tag))? 1:0;
assign way_hit[3] = (VALID_[line_index][3] && (TAG_[line_index][3] == tag))? 1:0;
assign cache_hit = (way_hit[0] || way_hit[1] || way_hit[2] || way_hit[3]);

always @(*)
begin
    case ( {way_hit[0], way_hit[1], way_hit[2], way_hit[3]} )
        4'b1000: c_instr = c_instr_o[0];
        4'b0100: c_instr = c_instr_o[1];
        4'b0010: c_instr = c_instr_o[2];
        4'b0001: c_instr = c_instr_o[3];
        default: c_instr = 0;    // error: multiple-way hit!
    endcase
end

/* valid */
integer idx, jdx;

always @(*)
begin
    if (m_ready_i)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            cache_write[idx] = (idx == victim_sel);
    else
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            cache_write[idx] = 0;
end

always @(posedge clk_i)
begin
    if (rst_i || p_flush_i)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                VALID_[jdx][idx] <= 1'b0;
    else if (S == RdfromMem && m_ready_i)
        VALID_[index_prev][victim_sel] <= 1'b1;
end

/* tag */
always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                TAG_[jdx][idx] <= 0;
    else if (S == RdfromMem && m_ready_i)
        TAG_[index_prev][victim_sel] <= tag;
end

// assign victim_sel = FIFO_cnt[line_index];
always @(posedge clk_i)
begin
    victim_sel <= FIFO_cnt[line_index];
end

always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < N_LINES; idx = idx + 1)
            FIFO_cnt[idx] <= 0;
    else if (S == RdfromMemFinish)
        FIFO_cnt[line_index] <= FIFO_cnt[line_index] + 1;
end

/* block ram delay debug!!!! */
assign is_diff_index = (index_prev != line_index);

always @(posedge clk_i)
begin
    index_prev <= line_index;
end

//------------------------------------------------------
// Read a 32-bit instruction from the target cache line
//------------------------------------------------------
reg [XLEN-1 : 0] fromCache, fromMem; // Get the specific word

always @(*)
begin // for hit
    case (line_offset)
`ifdef ARTY
        2'b11: fromCache = c_instr[ 31: 0];     // [127: 96]
        2'b10: fromCache = c_instr[ 63: 32];    // [ 95: 64]
        2'b01: fromCache = c_instr[ 95: 64];    // [ 63: 32]
        2'b00: fromCache = c_instr[127: 96];    // [ 31:  0]
`else // KC705
        3'b111: fromCache = c_instr[ 31: 0];    // [255:224]
        3'b110: fromCache = c_instr[ 63: 32];   // [223:192]
        3'b101: fromCache = c_instr[ 95: 64];   // [191:160]
        3'b100: fromCache = c_instr[127: 96];   // [159:128]
        3'b011: fromCache = c_instr[159: 128];  // [127: 96]
        3'b010: fromCache = c_instr[191: 160];  // [ 95: 64]
        3'b001: fromCache = c_instr[223: 192];  // [ 63: 32]
        3'b000: fromCache = c_instr[255: 224];  // [ 31:  0]
`endif
    endcase
end

always @(*)
begin // for miss
    case (line_offset)
`ifdef ARTY
        2'b11: fromMem = m_data_i[ 31: 0];        // [127: 96]
        2'b10: fromMem = m_data_i[ 63: 32];       // [ 95: 64]
        2'b01: fromMem = m_data_i[ 95: 64];       // [ 63: 32]
        2'b00: fromMem = m_data_i[127: 96];       // [ 31:  0]
`else // KC705
        3'b111: fromMem = m_data_i[ 31: 0];       // [255:224]
        3'b110: fromMem = m_data_i[ 63: 32];      // [223:192]
        3'b101: fromMem = m_data_i[ 95: 64];      // [191:160]
        3'b100: fromMem = m_data_i[127: 96];      // [159:128]
        3'b011: fromMem = m_data_i[159: 128];     // [127: 96]
        3'b010: fromMem = m_data_i[191: 160];     // [ 95: 64]
        3'b001: fromMem = m_data_i[223: 192];     // [ 63: 32]
        3'b000: fromMem = m_data_i[255: 224];     // [ 31:  0]
`endif
    endcase
end

// Output signals   /////////////////////////////////////////////////////////////

// Delay the output instruction from i-cache until next clock edge.
// This is used to match the behavior of the TCM memory.
// CY Hsiang July 20 2020
always @(posedge clk_i) begin
    if (rst_i)
        p_instr_o <= {(XLEN-1){1'b0}};
    else
        p_instr_o <= ((S == Next) && cache_hit) ? fromCache : (m_ready_i) ? fromMem : 0;
end

assign p_ready_o = (((S == Next) && cache_hit && !is_diff_index) || m_ready_i) ? 1 : 0;

always @(posedge clk_i)
begin
    if (rst_i)
        m_strobe_o <= 0;
    else if (S == RdfromMem && !m_ready_i)
        m_strobe_o <= 1;
    else
        m_strobe_o <= 0;
end

always @(posedge clk_i)
begin
    if (rst_i)
        m_addr_o <= 0;
    else if (S == RdfromMem) // read a cache block
        m_addr_o <= {p_addr_i[XLEN-1 : WORD_BITS+2], {WORD_BITS{1'b0}}, 2'b0};
    else
        m_addr_o <= 0;
end

// Storages /////////////////////////////////////////////////////////////////////

//=======================================================
//  Instructions store in Block RAM
//=======================================================
genvar i;
generate
    for (i = 0; i < N_WAYS; i = i + 1)
    begin
        sram #( .DATA_WIDTH(CLSIZE), .N_ENTRIES(N_LINES) )
             DATA_BRAM(
                 .clk_i(clk_i),
                 .en_i(1'b1),
                 .we_i(cache_write[i]),
                 .addr_i(line_index),
                 .data_i(m_data_i),   // Instructions are read-only.
                 .data_o(c_instr_o[i])
             );
    end
endgenerate
endmodule
