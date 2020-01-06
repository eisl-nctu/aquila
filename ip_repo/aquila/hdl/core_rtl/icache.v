`timescale 1ns / 1ps
// =============================================================================
//  Program : icache.v
//  Author  : Jin-you Wu
//  Date    : Oct/31/2018
// -----------------------------------------------------------------------------
//  Description:
//  This module implements the L1 Instruction Cache with the following
//  properties:
//      4-way
//      Read-only
//      FIFO replacement policy
//      Block size: 8 32-bit words
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

module icache
#(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32, CACHE_SIZE = 64, LINE_SIZE = 256)
(
    /////////// System signals   ////////////////////////////////////////////////////
    input                         clk, rst,

    /////////// Processor        ////////////////////////////////////////////////////
    input                         p_strobe,   // processor send a request
    input  [ADDR_WIDTH-1 : 0]     p_addr,     // InstrMem_addr
    output                        p_ready_o,  // the cache instruction is ready
    output [DATA_WIDTH-1 : 0]     p_instr_o,  // InstrMem_data_o

    /////////// Memory           ////////////////////////////////////////////////////
    output reg                    m_strobe_o, // cache send a request to memory
    output reg [ADDR_WIDTH-1 : 0] m_addr_o,   // cache send address to memory
    input                         m_ready,    // the data from memory is ready
    input  [LINE_SIZE-1: 0]       m_dout      // the data from memory
);

// Parameter        ////////////////////////////////////////////////////////////////
localparam N_WAYS          = 4;
localparam WORDS_PER_LINE  = 8;
localparam N_LINES         = (CACHE_SIZE*1024*8) / (N_WAYS*LINE_SIZE);

localparam WAY_BITS        = $clog2(N_WAYS);
localparam BYTE_BITS       = 2;
localparam WORD_BITS       = $clog2(WORDS_PER_LINE);
localparam LINE_BITS       = $clog2(N_LINES);
localparam NONTAG_BITS     = LINE_BITS + WORD_BITS + BYTE_BITS;
localparam TAG_BITS        = ADDR_WIDTH - NONTAG_BITS;

// Input information ////////////////////////////////////////////////////////////////
wire [WORD_BITS-1 : 0] line_offset;
wire [LINE_BITS-1 : 0] line_index;
wire [TAG_BITS-1  : 0] tag;

assign line_offset = p_addr[WORD_BITS + BYTE_BITS - 1 : BYTE_BITS];
assign line_index  = p_addr[NONTAG_BITS - 1 : WORD_BITS + BYTE_BITS];
assign tag         = p_addr[ADDR_WIDTH - 1 : NONTAG_BITS];

//=======================================================
// 4-way associative cache signals
//=======================================================
wire way_hit[0 : N_WAYS-1];
wire cache_hit;
wire [WORDS_PER_LINE*32-1 : 0] c_instr_o [0 : N_WAYS-1]; // the data from 4-way associative cache
reg  [WORDS_PER_LINE*32-1 : 0] c_instr;
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
    Idle    = 0,
    Next  = 1,
    RdfromMem = 2,
    RdfromMemFinish = 3;

reg [1: 0]  S, S_nxt;

always @(posedge clk)
begin
    if (rst)
        S <= Idle;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        Idle:
            if (p_strobe)
                S_nxt = Next;
            else
                S_nxt = Idle;
        Next:
            /*if(p_stop) S_nxt = Idle;
            else */
            if (!cache_hit)
                S_nxt =  RdfromMem;
            else
                S_nxt = Next;
        RdfromMem:
            if (m_ready)
                S_nxt = RdfromMemFinish;
            else
                S_nxt = RdfromMem;
        RdfromMemFinish:
            S_nxt = Next;
        default:
            S_nxt = Idle;
    endcase
end

assign way_hit[0] = ( VALID_[line_index][0] && (TAG_[line_index][0] == tag) ) ? 1 : 0;
assign way_hit[1] = ( VALID_[line_index][1] && (TAG_[line_index][1] == tag) ) ? 1 : 0;
assign way_hit[2] = ( VALID_[line_index][2] && (TAG_[line_index][2] == tag) ) ? 1 : 0;
assign way_hit[3] = ( VALID_[line_index][3] && (TAG_[line_index][3] == tag) ) ? 1 : 0;
assign cache_hit = (way_hit[0] || way_hit[1] || way_hit[2] || way_hit[3]);

always @(*)
begin
    case ( {way_hit[0], way_hit[1], way_hit[2], way_hit[3]} )
        4'b1000: c_instr = c_instr_o[0];
        4'b0100: c_instr = c_instr_o[1];
        4'b0010: c_instr = c_instr_o[2];
        4'b0001: c_instr = c_instr_o[3];
        default: c_instr = 0;    // error: the same line_index and tag in the cache!!!!!!!!!!
    endcase
end

/* valid */
integer idx, jdx;

always @(*)
begin
    if (m_ready)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            cache_write[idx] = (idx == victim_sel);
    else
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            cache_write[idx] = 0;
end

always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                VALID_[jdx][idx] <= 1'b0;
    else if (S == RdfromMem && m_ready)
        VALID_[index_prev][victim_sel] <= 1'b1;
end

/* tag */
always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                TAG_[jdx][idx] <= 0;
    else if (S == RdfromMem && m_ready)
        TAG_[index_prev][victim_sel] <= tag;
end

// assign victim_sel = FIFO_cnt[line_index];
always @(posedge clk)
begin
    victim_sel <= FIFO_cnt[line_index];
end

always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_LINES; idx = idx + 1)
            FIFO_cnt[idx] <= 0;
    else if (S == RdfromMemFinish)
        FIFO_cnt[line_index] <= FIFO_cnt[line_index] + 1;
end

/* block ram delay debug!!!! */
assign is_diff_index = (index_prev != line_index);

always @(posedge clk)
begin
    index_prev <= line_index;
end

//------------------------------------------------------------------------
// Plz modify here to get the correct instruction according to line_offset
//------------------------------------------------------------------------
reg [DATA_WIDTH-1 : 0] fromCache, fromMem; // Get the specific word

always @(*)
begin
    case (line_offset)
        3'b111: fromCache = c_instr[ 31: 0];     // [255:224]
        3'b110: fromCache = c_instr[ 63: 32];    // [223:192]
        3'b101: fromCache = c_instr[ 95: 64];    // [191:160]
        3'b100: fromCache = c_instr[127: 96];    // [159:128]
        3'b011: fromCache = c_instr[159: 128];   // [127: 96]
        3'b010: fromCache = c_instr[191: 160];   // [ 95: 64]
        3'b001: fromCache = c_instr[223: 192];   // [ 63: 32]
        3'b000: fromCache = c_instr[255: 224];   // [ 31:  0]
    endcase
end

always @(*)
begin
    case (line_offset)
        3'b111: fromMem = m_dout[ 31: 0];        // [255:224]
        3'b110: fromMem = m_dout[ 63: 32];       // [223:192]
        3'b101: fromMem = m_dout[ 95: 64];       // [191:160]
        3'b100: fromMem = m_dout[127: 96];       // [159:128]
        3'b011: fromMem = m_dout[159: 128];      // [127: 96]
        3'b010: fromMem = m_dout[191: 160];      // [ 95: 64]
        3'b001: fromMem = m_dout[223: 192];      // [ 63: 32]
        3'b000: fromMem = m_dout[255: 224];      // [ 31:  0]
    endcase
end

// Output signals   /////////////////////////////////////////////////////////////
assign p_instr_o = ((S == Next) && cache_hit) ? fromCache : (m_ready) ? fromMem : 0;
assign p_ready_o = ( ( (S == Next) && cache_hit && !is_diff_index ) || m_ready ) ? 1 : 0;

always @(posedge clk)
begin
    if (rst)
        m_strobe_o <= 0;
    else if (S == RdfromMem && !m_ready)
        m_strobe_o <= 1;
    else
        m_strobe_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        m_addr_o <= 0;
    else if (S == RdfromMem)
        m_addr_o <= {p_addr[ADDR_WIDTH-1 : 5], 3'b0, 2'b0}; // read 8 words
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
        sram #( .DATA_WIDTH(WORDS_PER_LINE * 32), .N_ENTRIES(N_LINES) )
             DATA_BRAM(
                 .clk(clk),
                 .en(1'b1),
                 .we(cache_write[i]),
                 .addr(line_index),
                 .data_i(m_dout),   // Instructions are read-only.
                 .data_o(c_instr_o[i])
             );
    end
endgenerate
endmodule
