`timescale 1ns / 1ps
// =============================================================================
//  Program : dcache.v
//  Author  : Jin-you Wu
//  Date    : Nov/01/2018
// -----------------------------------------------------------------------------
//  Description:
//  This module implements the L1 Data Cache with the following
//  properties:
//      4-way set associative
//      FIFO replacement policy
//      Write-back
//      Write allocate
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Mar/03/2020, by Chih-Yu Hsiang:
//    Added AMO support.
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

module dcache
#(parameter XLEN = 32,
  parameter CACHE_SIZE = 64,
  parameter CLSIZE = `CLP    // Cache line size.
)
(
    /////////// System signals   ///////////////////////////////////////////////
    input                     clk_i, rst_i,

    /////////// processor        ///////////////////////////////////////////////
    input                     p_strobe_i,      // Processor send a request.
    input                     p_rw_i,          // 0 for read, 1 for write.
    input  [XLEN/8-1 : 0]     p_byte_enable_i, // Byte-enable signal.
    input  [XLEN-1 : 0]       p_addr_i,        // Memory addr for the request.
    output reg [XLEN-1 : 0]   p_data_o,        // Data from main memory.
    input  [XLEN-1 : 0]       p_data_i,        // Data to main memory.
    output                    p_ready_o,       // The cache data is ready.
    input                     p_flush_i,       // Cache flush signal.
    output reg                busy_flushing_o, // Signaling cache is flushing.
    input                     p_is_amo_i,      // AMO request from core.
    input  [4 : 0]            p_amo_type_i,    // Type of AMO from core.

    /////////// memory           ///////////////////////////////////////////////
    output reg [XLEN-1 : 0]   m_addr_o,        // Cache addr to memory.
    input  [CLSIZE-1 : 0]     m_data_i,        // Data from memory.
    output reg [CLSIZE-1 : 0] m_data_o,        // Cache to memory data.
    output reg                m_strobe_o,      // cache request flag.
    output reg                m_rw_o,          // 0 for read, 1 for write.
    input                     m_ready_i,       // Data from memory is ready.
    output                    m_is_amo_o,      // AMO request to D-memory.
    output reg [4 : 0]        m_amo_type_o     // Type of AMO to D-memory.
);

// Parameter        ////////////////////////////////////////////////////////////
localparam N_WAYS           = 4;
localparam N_LINES          = (CACHE_SIZE*1024*8) / (N_WAYS*CLSIZE);

localparam WAY_BITS         = $clog2(N_WAYS);
localparam BYTE_BITS        = 2;
localparam WORD_BITS        = $clog2(CLSIZE/XLEN);
localparam LINE_BITS        = $clog2(N_LINES);
localparam NONTAG_BITS      = LINE_BITS + WORD_BITS + BYTE_BITS;
localparam TAG_BITS         = XLEN - NONTAG_BITS;

localparam Idle             = 0,
           Analysis         = 1,
           WbtoMem          = 2,
           WbtoMemFinish    = 3,
           RdfromMem        = 4,
           RdfromMemFinish  = 5,
           WbtoMemAll       = 6,
           WbtoMemAllFinish = 7,
           RdAmo            = 8,
           RdAmoFinish      = 9;

// Data cache controller state register
reg [ 3 : 0]     S, S_nxt;

// Input registers from processor   ////////////////////////////////////////////
reg [XLEN-1 : 0] datain_from_p;
reg              rw;                 // 0 is for read, 1 is for write
reg [ 3 : 0]     byte_enable_from_p; // Which bytes are written if (rw == 1)
reg              is_amo_reg;

// Output registers
reg              p_ready_reg;

//=======================================================
// N-way associative cache signals
//=======================================================
wire [TAG_BITS-1 : 0] c_tag_o[0 : N_WAYS-1];  // Tags from each cache.
wire                  way_hit[0 : N_WAYS-1];  // Cache-way hit flag.
reg  [WAY_BITS-1 : 0] hit_index;    
wire                  cache_hit;              // Got a cache hit?
reg  [CLSIZE-1 : 0]   c_data_i;               // Data write into cache.
reg  [CLSIZE-1 : 0]   c_data_update, m_data_update; // c_data and m_data replace with update data
wire [CLSIZE-1 : 0]   c_data_o[0 : N_WAYS-1]; // 4 data from 4 cache way.
reg  [CLSIZE-1 : 0]   c_data;                 // Data from the hit cache.
reg                   cache_write [0 : N_WAYS-1];

//=======================================================
// FIFO replace policy signals
//=======================================================
reg [WAY_BITS-1 : 0]  FIFO_cnt[0 : N_LINES-1];
reg [WAY_BITS-1 : 0]  victim_sel;

//=======================================================
// WbAll signals
//=======================================================
reg [LINE_BITS-1 : 0] N_LINES_cnt;
reg [WAY_BITS-1 : 0]  N_WAYS_cnt;
wire WbAllFinish = N_LINES_cnt == N_LINES - 1 && N_WAYS_cnt == N_WAYS - 1;
reg WbAllFinish_r;

always @(posedge clk_i)
begin
    if (rst_i)
        N_LINES_cnt <= 0;
    else if (S_nxt == WbtoMemAllFinish)
        N_LINES_cnt <= N_LINES_cnt + 1;
end

always @(posedge clk_i)
begin
    if (rst_i)
        N_WAYS_cnt <= 0;
    else if (N_LINES_cnt == N_LINES - 1 && S_nxt == WbtoMemAllFinish)
        N_WAYS_cnt <= N_WAYS_cnt + 1;
end

always @(posedge clk_i) begin
    WbAllFinish_r <= WbAllFinish;
end

//=======================================================
//  Valid and Dirty stores in LUT
//=======================================================
reg VALID_ [0 : N_LINES-1][0 : N_WAYS-1];
reg DIRTY_ [0 : N_LINES-1][0 : N_WAYS-1];
wire NeedtoWb = DIRTY_[N_LINES_cnt][N_WAYS_cnt];

always @(posedge clk_i)
begin
    if (S == Idle)
    begin
        datain_from_p <= p_data_i;
        rw <= p_rw_i;
        byte_enable_from_p <= p_byte_enable_i;
    end
    else
    begin
        datain_from_p <= datain_from_p;
        rw <= rw;
        byte_enable_from_p <= byte_enable_from_p;
    end
end

// Input registers from memory /////////////////////////////////////////////////
reg [CLSIZE-1 : 0] m_data;

always @(posedge clk_i)
begin
    if (S == RdfromMem || S == RdAmo)
        m_data <= m_data_i;
    else
        m_data <= m_data;
end

// Input information ///////////////////////////////////////////////////////////
wire [WORD_BITS-1 : 0] line_offset;
wire [LINE_BITS-1 : 0] line_index;
wire [TAG_BITS-1  : 0] tag;
wire [LINE_BITS-1 : 0] addr_sram;
reg  [XLEN-1 : 0]      p_addr_r;

always@(posedge clk_i) begin
    if(rst_i) begin
        p_addr_r <= 0;
    end else if(p_strobe_i) begin
        p_addr_r <= p_addr_i;
    end
end

assign line_offset = (p_strobe_i)?p_addr_i[WORD_BITS + BYTE_BITS - 1 : BYTE_BITS]:p_addr_r[WORD_BITS + BYTE_BITS - 1 : BYTE_BITS];
assign line_index  = (p_strobe_i)?p_addr_i[NONTAG_BITS - 1 : WORD_BITS + BYTE_BITS]:p_addr_r[NONTAG_BITS - 1 : WORD_BITS + BYTE_BITS];
assign tag         = p_addr_r[XLEN - 1 : NONTAG_BITS];
assign addr_sram   = (busy_flushing_o)? N_LINES_cnt : line_index;

//====================================================
// D-cache Finite State Machine
//====================================================
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
            if (p_strobe_i || p_flush_i)
                S_nxt = Analysis;
            else
                S_nxt = Idle;
        Analysis:
            if (busy_flushing_o)
                S_nxt = WbtoMemAll;
            else if (p_is_amo_i)
                S_nxt = cache_hit & DIRTY_[line_index][hit_index] ? WbtoMem : RdAmo;
            else if (!cache_hit)
                S_nxt = (DIRTY_[line_index][victim_sel]) ? WbtoMem : RdfromMem;
            else // cache hit and not amo
                S_nxt = Idle;
        WbtoMem:
            if (m_ready_i)
                S_nxt = WbtoMemFinish;
            else
                S_nxt = WbtoMem;
        WbtoMemFinish:
            S_nxt = (p_is_amo_i)? RdAmo : RdfromMem;
        RdfromMem:
            if (m_ready_i)
                S_nxt = RdfromMemFinish;
            else
                S_nxt = RdfromMem;
        RdfromMemFinish:
            S_nxt = Idle;
        WbtoMemAll:
            if (NeedtoWb)
                if (m_ready_i)
                    S_nxt = WbtoMemAllFinish;
                else
                    S_nxt = WbtoMemAll;
            else
                S_nxt = WbtoMemAllFinish;
        WbtoMemAllFinish:
            S_nxt = (WbAllFinish_r)? Idle : WbtoMemAll;
        RdAmo:
            if (m_ready_i)
                S_nxt = RdAmoFinish;
            else
                S_nxt = RdAmo;
        RdAmoFinish:
            S_nxt = Idle;
        default:
            S_nxt = Idle;
    endcase
end

assign way_hit[0] = ( VALID_[line_index][0] && (c_tag_o[0] == tag) ) ? 1 : 0;
assign way_hit[1] = ( VALID_[line_index][1] && (c_tag_o[1] == tag) ) ? 1 : 0;
assign way_hit[2] = ( VALID_[line_index][2] && (c_tag_o[2] == tag) ) ? 1 : 0;
assign way_hit[3] = ( VALID_[line_index][3] && (c_tag_o[3] == tag) ) ? 1 : 0;
assign cache_hit  = (way_hit[0] || way_hit[1] || way_hit[2] || way_hit[3]);

always @(*)
begin
    case ( { way_hit[0], way_hit[1], way_hit[2], way_hit[3] } )
        4'b1000: hit_index = 0;
        4'b0100: hit_index = 1;
        4'b0010: hit_index = 2;
        4'b0001: hit_index = 3;
        default: hit_index = 0; // error: the same line_index and tag in the cache!
    endcase
end

always @(*)
begin
    c_data = c_data_o[hit_index];
end

always @(posedge clk_i)
begin
    victim_sel <= FIFO_cnt[line_index];
end

integer idx, jdx;

always @(*)
begin
    if ( ((S == Analysis) && cache_hit && rw) )
    begin
        cache_write[0] = way_hit[0];
        cache_write[1] = way_hit[1];
        cache_write[2] = way_hit[2];
        cache_write[3] = way_hit[3];
    end
    else if (S == RdfromMemFinish)
    begin
        for (idx = 0; idx < N_WAYS; idx = idx+1) cache_write[idx] = (victim_sel == idx);
    end
    else
    begin
        cache_write[0] = 0;
        cache_write[1] = 0;
        cache_write[2] = 0;
        cache_write[3] = 0;
    end
end

always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < N_LINES; idx = idx + 1)
            FIFO_cnt[idx] <= 0;
    else if (S == RdfromMemFinish)
        FIFO_cnt[line_index] <= FIFO_cnt[line_index] + 1;
end

//-----------------------------------------------
// Read a 32-bit word from the target cache line
//-----------------------------------------------
reg [XLEN-1 : 0] fromCache, fromMem;

always @(*)
begin // for hit
    case (line_offset)
`ifdef ARTY
        2'b11: fromCache = c_data[ 31: 0];     // [127: 96]
        2'b10: fromCache = c_data[ 63: 32];    // [ 95: 64]
        2'b01: fromCache = c_data[ 95: 64];    // [ 63: 32]
        2'b00: fromCache = c_data[127: 96];    // [ 31:  0]
`else // KC705
        3'b111: fromCache = c_data[ 31:   0]; // [255:224]
        3'b110: fromCache = c_data[ 63:  32]; // [223:192]
        3'b101: fromCache = c_data[ 95:  64]; // [191:160]
        3'b100: fromCache = c_data[127:  96]; // [159:128]
        3'b011: fromCache = c_data[159: 128]; // [127: 96]
        3'b010: fromCache = c_data[191: 160]; // [ 95: 64]
        3'b001: fromCache = c_data[223: 192]; // [ 63: 32]
        3'b000: fromCache = c_data[255: 224]; // [ 31:  0]
`endif
    endcase
end

always @(*)
begin // for miss
    case (line_offset)
`ifdef ARTY
        2'b11: fromMem = m_data[ 31: 0];        // [127: 96]
        2'b10: fromMem = m_data[ 63: 32];       // [ 95: 64]
        2'b01: fromMem = m_data[ 95: 64];       // [ 63: 32]
        2'b00: fromMem = m_data[127: 96];       // [ 31:  0]
`else // KC705
        3'b111: fromMem = m_data[ 31:   0]; // [255:224]
        3'b110: fromMem = m_data[ 63:  32]; // [223:192]
        3'b101: fromMem = m_data[ 95:  64]; // [191:160]
        3'b100: fromMem = m_data[127:  96]; // [159:128]
        3'b011: fromMem = m_data[159: 128]; // [127: 96]
        3'b010: fromMem = m_data[191: 160]; // [ 95: 64]
        3'b001: fromMem = m_data[223: 192]; // [ 63: 32]
        3'b000: fromMem = m_data[255: 224]; // [ 31:  0]
`endif
    endcase
end

//------------------------------------------------------------------------
// Plz modify here to write the correct bytes according to byte_enable_from_p
//------------------------------------------------------------------------
reg [XLEN-1 : 0] update_data;

always @(*)
begin           // write miss : write hit;
    case (byte_enable_from_p)
        // DataMem_Addr[1:0] == 2'b00
        4'b0001: update_data = (S == RdfromMemFinish) ?
                      { fromMem[31:8], datain_from_p[7:0] } :
                      { fromCache[31:8], datain_from_p[7:0] };
        4'b0011: update_data = (S == RdfromMemFinish) ?
                      { fromMem[31:16], datain_from_p[15:0] } :
                      { fromCache[31:16], datain_from_p[15:0]};
        4'b1111: update_data = datain_from_p;

        // DataMem_Addr[1:0] == 2'b01
        4'b0010: update_data = (S == RdfromMemFinish) ?
                      { fromMem[31:16], datain_from_p[15:8], fromMem[7:0] } :
                      { fromCache[31 : 16], datain_from_p[15:8], fromCache[7:0] };

        // DataMem_Addr[1:0] == 2'b10
        4'b0100: update_data = (S == RdfromMemFinish) ?
                      { fromMem[31:24], datain_from_p[23:16], fromMem[15:0] } :
                      { fromCache[31:24], datain_from_p[23:16], fromCache[15:0] };
        4'b1100: update_data = (S == RdfromMemFinish) ?
                      { datain_from_p[31:16], fromMem[15:0] } :
                      { datain_from_p[31:16], fromCache[15:0] };

        // DataMem_Addr[1:0] == 2'b11
        4'b1000: update_data = (S == RdfromMemFinish) ?
                      { datain_from_p[31:24], fromMem[23:0] } :
                      { datain_from_p[31:24], fromCache[23:0] };
        default: update_data = 32'b0;
    endcase
end

//------------------------------------------------------------------------
// Write a 32-bit word into the target cache line.
//------------------------------------------------------------------------
/* Writing into cache from the processor or the main memory */
always @(*) begin
    case (line_offset)
`ifdef ARTY
        2'b11: c_data_update = {c_data[127:32], update_data};
        2'b10: c_data_update = {c_data[127:64], update_data, c_data[31:0]};
        2'b01: c_data_update = {c_data[127:96], update_data, c_data[63:0]};
        2'b00: c_data_update = {update_data, c_data[95:0]};
`else // KC705
        3'b111: c_data_update = {c_data[255: 32], update_data};
        3'b110: c_data_update = {c_data[255: 64], update_data, c_data[ 31:0]};
        3'b101: c_data_update = {c_data[255: 96], update_data, c_data[ 63:0]};
        3'b100: c_data_update = {c_data[255:128], update_data, c_data[ 95:0]};
        3'b011: c_data_update = {c_data[255:160], update_data, c_data[127:0]};
        3'b010: c_data_update = {c_data[255:192], update_data, c_data[159:0]};
        3'b001: c_data_update = {c_data[255:224], update_data, c_data[191:0]};
        3'b000: c_data_update = {update_data, c_data[223:0]};
`endif
    endcase
end

always @(*) begin
    case (line_offset)
`ifdef ARTY
        2'b11: m_data_update = {m_data[127:32], update_data};
        2'b10: m_data_update = {m_data[127:64], update_data, m_data[31:0]};
        2'b01: m_data_update = {m_data[127:96], update_data, m_data[63:0]};
        2'b00: m_data_update = {update_data, m_data[95:0]};
`else // KC705
        3'b111: m_data_update = {m_data[255: 32], update_data};
        3'b110: m_data_update = {m_data[255: 64], update_data, m_data[ 31:0]};
        3'b101: m_data_update = {m_data[255: 96], update_data, m_data[ 63:0]};
        3'b100: m_data_update = {m_data[255:128], update_data, m_data[ 95:0]};
        3'b011: m_data_update = {m_data[255:160], update_data, m_data[127:0]};
        3'b010: m_data_update = {m_data[255:192], update_data, m_data[159:0]};
        3'b001: m_data_update = {m_data[255:224], update_data, m_data[191:0]};
        3'b000: m_data_update = {update_data, m_data[223:0]};
`endif
    endcase
end

always @(*)
begin
    if (!rw) // Processor read miss and update cache data
        c_data_i = (S == RdfromMemFinish) ? m_data : 0;
    else begin   // Processor write cache
        if ( (S == Analysis) && cache_hit ) // write hit
            c_data_i = c_data_update;
        else if (S == RdfromMemFinish)      // write miss
            c_data_i = m_data_update;
        else
            c_data_i = {CLSIZE{1'b0}};
    end
end

// Output signals       ////////////////////////////////////////////////////////
always @(*)
begin // Note: p_data_o is significant when processor read data
    if (S == RdAmoFinish)
        p_data_o = m_data[CLSIZE-1:CLSIZE-XLEN];
    else if ( (S == Analysis) && cache_hit && !rw)
        p_data_o = fromCache;
    else if ( (S == RdfromMemFinish) && !rw)
        p_data_o = fromMem;
    else
        p_data_o = 0;
end

always @(*)
begin
    if ( ((S == Analysis) && cache_hit && ~p_is_amo_i) || (S == RdfromMemFinish)
              || (S == RdAmoFinish) || (S == WbtoMemAllFinish && WbAllFinish_r) )
        p_ready_reg = 1;
    else
        p_ready_reg = 0;
end

assign p_ready_o = p_ready_reg;

always @(posedge clk_i)
begin
    if (rst_i)
        m_strobe_o <= 0;
    else if ( (S == RdfromMem || S == WbtoMem || S == RdAmo || (S == WbtoMemAll && NeedtoWb)) && !m_ready_i )
        m_strobe_o <= 1;
    else
        m_strobe_o <= 0;
end

always @(posedge clk_i)
begin
    if (rst_i)
        m_addr_o <= 0;
    else if (S == WbtoMemAll)
        m_addr_o <= {c_tag_o[N_WAYS_cnt], N_LINES_cnt, {WORD_BITS{1'b0}}, 2'b0};
    else if (S == WbtoMem) // the dirty data addr
        m_addr_o <= (is_amo_reg)? {c_tag_o[hit_index], line_index, {WORD_BITS{1'b0}}, 2'b0} : {c_tag_o[victim_sel], line_index, {WORD_BITS{1'b0}}, 2'b0};
    else if (S == RdfromMem) // the miss data addr
        m_addr_o <= {p_addr_i[XLEN-1: WORD_BITS+2], {WORD_BITS{1'b0}}, 2'b0};
    else if (S == RdAmo)
        m_addr_o <= p_addr_i;
    else
        m_addr_o <= 0;
end

always @(posedge clk_i)
begin
    if (rst_i)
        m_data_o <= 0;
    else if (S == WbtoMemAll && NeedtoWb)
        m_data_o <= c_data_o[N_WAYS_cnt];
    else if (S == WbtoMem) // the dirty data write back to memory
        m_data_o <= (is_amo_reg)? c_data : c_data_o[victim_sel];
    else if (S == RdAmo)
        m_data_o <= {p_data_i, {CLSIZE-XLEN{1'b0}}};
    else
        m_data_o <= 0;
end

always @(posedge clk_i)
begin
    if (rst_i)
        m_rw_o <= 0;
    else if (S == WbtoMem || S == WbtoMemAll || S == RdAmo)
        m_rw_o <= 1;
    else
        m_rw_o <= 0; // default: Read memory
end

// AMO output signal
always @(posedge clk_i ) begin
    if (rst_i)
        is_amo_reg <= 1'b0;
    else if ( S == Analysis )
        is_amo_reg <= p_is_amo_i;
end

assign m_is_amo_o = (S == RdAmo) ? is_amo_reg : 1'b0 ;

always @(posedge clk_i ) begin
    // data signal don't reset
    if ( S == Analysis )
        m_amo_type_o <= p_amo_type_i;    
end

// Set a signal for flushing-in-progress notification
always @(posedge clk_i) begin
    if (rst_i)
        busy_flushing_o <= 0;
    else if (S == Idle)
        busy_flushing_o <= p_flush_i;
    else if (WbAllFinish_r && S == WbtoMemAllFinish)
        busy_flushing_o <= 0;
end

// Storage /////////////////////////////////////////////////////////////////////
/* valid  */
always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                VALID_[jdx][idx] <= 1'b0;
    else if (S == RdfromMem && m_ready_i)
        VALID_[line_index][victim_sel] <= 1'b1;
    else if (S == RdAmo && m_ready_i) begin // for amo, not test yet
        VALID_[line_index][hit_index] <= 1'b0;
    end
end

/* dirty */
always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                DIRTY_[jdx][idx] <= 1'b0;
    else if (S_nxt == WbtoMemAllFinish)
        DIRTY_[N_LINES_cnt][N_WAYS_cnt] <= 1'b0;
    else if (S == RdfromMem && m_ready_i && rw)
        DIRTY_[line_index][victim_sel] <= 1'b1;
    else if (S == RdAmo && m_ready_i) 
        DIRTY_[line_index][hit_index] <= 1'b0;
    else if (S == Analysis && cache_hit && rw)
    begin
        DIRTY_[line_index][0] <= (way_hit[0]) ? 1 : DIRTY_[line_index][0];
        DIRTY_[line_index][1] <= (way_hit[1]) ? 1 : DIRTY_[line_index][1];
        DIRTY_[line_index][2] <= (way_hit[2]) ? 1 : DIRTY_[line_index][2];
        DIRTY_[line_index][3] <= (way_hit[3]) ? 1 : DIRTY_[line_index][3];
    end
end

//=======================================================
//  Tag and Data stores in Block RAM
//=======================================================
genvar i;
generate
    for (i = 0; i < N_WAYS; i = i + 1)
    begin
        //------------------------------------------------------------------
        sram #(.DATA_WIDTH(TAG_BITS), .N_ENTRIES(N_LINES))
             TAG_BRAM(
                 .clk_i(clk_i),
                 .en_i(1'b1),
                 .we_i(cache_write[i]),
                 .addr_i(addr_sram),
                 .data_i(tag),
                 .data_o(c_tag_o[i])
             );
        //------------------------------------------------------------------
        sram #(.DATA_WIDTH(CLSIZE), .N_ENTRIES(N_LINES))
             DATA_BRAM(
                 .clk_i(clk_i),
                 .en_i(1'b1),
                 .we_i(cache_write[i]),
                 .addr_i(addr_sram),
                 .data_i(c_data_i),  // data from processor write or memory
                 .data_o(c_data_o[i])
             );
    end
endgenerate

endmodule
