`timescale 1ns / 1ps
// =============================================================================
//  Program : dcache.v
//  Author  : Jin-you Wu
//  Date    : Nov/01/2018
// -----------------------------------------------------------------------------
//  Description:
//  This module implements the L1 Data Cache with the following
//  properties:
//      4-way
//      FIFO replacement policy
//      Write-back
//      Write allocate
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

module dcache
#(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32, CACHE_SIZE = 64, LINE_SIZE = 256)
(
    /////////// System signals   ///////////////////////////////////////////////
    input                           clk, rst,

    /////////// processor        ///////////////////////////////////////////////
    input                           p_strobe,      // Processor send a request.
    input                           p_rw,          // 0 for read, 1 for write.
    input  [DATA_WIDTH/8-1 : 0]     p_byte_enable, // Byte-enable signal.
    input  [ADDR_WIDTH-1 : 0]       p_addr,        // Memory addr for the request.
    output reg [DATA_WIDTH-1 : 0]   p_dout_o,      // Data from main memory.
    input  [DATA_WIDTH-1 : 0]       p_din,         // Data to main memory.
    output reg                      p_ready_o,     // The cache data is ready.

    /////////// memory           ///////////////////////////////////////////////
    output reg [ADDR_WIDTH-1 : 0]   m_addr_o,      // Cache addr to memory.
    input  [LINE_SIZE-1 : 0]        m_dout,        // Data from memory.
    output reg [LINE_SIZE-1 : 0]    m_din_o,       // Cache to memory data.
    output reg                      m_strobe_o,    // cache request flag.
    output reg                      m_rw_o,        // 0 for read, 1 for write.
    input                           m_ready        // Data from memory is ready.
);

// Parameter        ////////////////////////////////////////////////////////////
localparam N_WAYS          = 4;
localparam WORDS_PER_LINE  = 8;
localparam N_LINES         = (CACHE_SIZE*1024*8) / (N_WAYS*LINE_SIZE);

localparam WAY_BITS        = $clog2(N_WAYS);
localparam BYTE_BITS       = 2;
localparam WORD_BITS       = $clog2(WORDS_PER_LINE);
localparam LINE_BITS       = $clog2(N_LINES);
localparam NONTAG_BITS     = LINE_BITS + WORD_BITS + BYTE_BITS;
localparam TAG_BITS        = ADDR_WIDTH - NONTAG_BITS;

localparam Idle            = 0,
           Analysis        = 1,
           WbtoMem         = 2,
           WbtoMemFinish   = 3,
           RdfromMem       = 4,
           RdfromMemFinish = 5;

// Data cache controller state register
reg [2 : 0]            S, S_nxt;

// Input registers from processor   ////////////////////////////////////////////
reg [DATA_WIDTH-1 : 0] datain_from_p;
reg                    rw;                 // 0 is for read, 1 is for write
reg [3 : 0]            byte_enable_from_p; // Which bytes are written if (rw == 1)

//=======================================================
// N-way associative cache signals
//=======================================================
wire [TAG_BITS-1 : 0]  c_tag_o[0 : N_WAYS-1];  // Tags from each cache.
wire                   way_hit[0 : N_WAYS-1];  // Cache-way hit flag.
wire                   cache_hit;              // Got a cache hit?
reg  [LINE_SIZE-1 : 0] c_data_i;               // Data write into cache.
wire [LINE_SIZE-1 : 0] c_data_o[0 : N_WAYS-1]; // 4 data from 4 cache way.
reg  [LINE_SIZE-1 : 0] c_data;                 // Data from the hit cache.
reg  cache_write [0 : N_WAYS-1];

//=======================================================
// FIFO replace policy signals
//=======================================================
reg [WAY_BITS-1 : 0] FIFO_cnt[0 : N_LINES-1];
reg [WAY_BITS-1 : 0] victim_sel;

//=======================================================
//  Valid and Dirty stores in LUT
//=======================================================
reg VALID_ [0 : N_LINES-1][0 : N_WAYS-1];
reg DIRTY_ [0 : N_LINES-1][0 : N_WAYS-1];

always @(posedge clk)
begin
    if (S == Idle)
    begin
        datain_from_p <= p_din;
        rw <= p_rw;
        byte_enable_from_p <= p_byte_enable;
    end
    else
    begin
        datain_from_p <= datain_from_p;
        rw <= rw;
        byte_enable_from_p <= byte_enable_from_p;
    end
end

// Input registers from memory /////////////////////////////////////////////////
reg [LINE_SIZE-1 : 0] m_data;

always @(posedge clk)
begin
    if (S == RdfromMem)
        m_data <= m_dout;
    else
        m_data <= m_data;
end

// Input information ///////////////////////////////////////////////////////////
wire [WORD_BITS-1 : 0] line_offset;
wire [LINE_BITS-1 : 0] line_index;
wire [TAG_BITS-1  : 0] tag;

assign line_offset = p_addr[WORD_BITS + BYTE_BITS - 1 : BYTE_BITS];
assign line_index  = p_addr[NONTAG_BITS - 1 : WORD_BITS + BYTE_BITS];
assign tag         = p_addr[ADDR_WIDTH - 1 : NONTAG_BITS];

//====================================================
// D-cache Finite State Machine
//====================================================
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
                S_nxt = Analysis;
            else
                S_nxt = Idle;
        Analysis:
            if (!cache_hit)
                S_nxt = (DIRTY_[line_index][victim_sel]) ? WbtoMem : RdfromMem;
            else
                S_nxt = Idle;   // cache hit
        WbtoMem:
            if (m_ready)
                S_nxt = WbtoMemFinish;
            else
                S_nxt = WbtoMem;
        WbtoMemFinish:
            S_nxt = RdfromMem;
        RdfromMem:
            if (m_ready)
                S_nxt = RdfromMemFinish;
            else
                S_nxt = RdfromMem;
        RdfromMemFinish:
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
        4'b1000: c_data = c_data_o[0];
        4'b0100: c_data = c_data_o[1];
        4'b0010: c_data = c_data_o[2];
        4'b0001: c_data = c_data_o[3];
        default: c_data = 0; // error: the same line_index and tag in the cache!
    endcase
end

always @(posedge clk)
begin
    if ( ((S == Analysis) && cache_hit && rw) )
    begin
        cache_write[0] <= way_hit[0];
        cache_write[1] <= way_hit[1];
        cache_write[2] <= way_hit[2];
        cache_write[3] <= way_hit[3];
    end
    else if (S == RdfromMemFinish)
    begin
        cache_write[victim_sel] <= 1;
    end
    else
    begin
        cache_write[0] <= 0;
        cache_write[1] <= 0;
        cache_write[2] <= 0;
        cache_write[3] <= 0;
    end
end

always @(posedge clk)
begin
    victim_sel <= FIFO_cnt[line_index];
end

integer idx, jdx;

always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_LINES; idx = idx + 1)
            FIFO_cnt[idx] <= 0;
    else if (S == RdfromMemFinish)
        FIFO_cnt[line_index] <= FIFO_cnt[line_index] + 1;
end

//------------------------------------------------------------------------
// Plz modify here to get the correct word according to line_offset
//------------------------------------------------------------------------
reg [DATA_WIDTH-1 : 0] fromCache, fromMem;

always @(*)
begin // for hit
    case (line_offset)
        3'b111: fromCache = c_data[ 31:   0]; // [255:224]
        3'b110: fromCache = c_data[ 63:  32]; // [223:192]
        3'b101: fromCache = c_data[ 95:  64]; // [191:160]
        3'b100: fromCache = c_data[127:  96]; // [159:128]
        3'b011: fromCache = c_data[159: 128]; // [127: 96]
        3'b010: fromCache = c_data[191: 160]; // [ 95: 64]
        3'b001: fromCache = c_data[223: 192]; // [ 63: 32]
        3'b000: fromCache = c_data[255: 224]; // [ 31:  0]
    endcase
end

always @(*)
begin // for miss
    case (line_offset)
        3'b111: fromMem = m_data[ 31:   0]; // [255:224]
        3'b110: fromMem = m_data[ 63:  32]; // [223:192]
        3'b101: fromMem = m_data[ 95:  64]; // [191:160]
        3'b100: fromMem = m_data[127:  96]; // [159:128]
        3'b011: fromMem = m_data[159: 128]; // [127: 96]
        3'b010: fromMem = m_data[191: 160]; // [ 95: 64]
        3'b001: fromMem = m_data[223: 192]; // [ 63: 32]
        3'b000: fromMem = m_data[255: 224]; // [ 31:  0]
    endcase
end

//------------------------------------------------------------------------
// Plz modify here to write the correct bytes according to byte_enable_from_p
//------------------------------------------------------------------------
reg [DATA_WIDTH-1 : 0] update_data;

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
// Plz modify here to write the correct 32-bit data
//------------------------------------------------------------------------
/* 256 bits data for writing in cache from processor write or memory */
always @(posedge clk)
begin
    if (!rw) // Processor read miss and update cache data
        c_data_i <= (S == RdfromMemFinish) ? m_data : 0;
    else    // Processor write cache
        if ( (S == Analysis) && cache_hit ) // write hit
            case (line_offset)
                3'b111: c_data_i <= {c_data[255: 32], update_data};
                3'b110: c_data_i <= {c_data[255: 64], update_data, c_data[ 31:0]};
                3'b101: c_data_i <= {c_data[255: 96], update_data, c_data[ 63:0]};
                3'b100: c_data_i <= {c_data[255:128], update_data, c_data[ 95:0]};
                3'b011: c_data_i <= {c_data[255:160], update_data, c_data[127:0]};
                3'b010: c_data_i <= {c_data[255:192], update_data, c_data[159:0]};
                3'b001: c_data_i <= {c_data[255:224], update_data, c_data[191:0]};
                3'b000: c_data_i <= {update_data, c_data[223:0]};
            endcase
        else if (S == RdfromMemFinish)      // write miss
            case (line_offset)
                3'b111: c_data_i <= {m_data[255: 32], update_data};
                3'b110: c_data_i <= {m_data[255: 64], update_data, m_data[ 31:0]};
                3'b101: c_data_i <= {m_data[255: 96], update_data, m_data[ 63:0]};
                3'b100: c_data_i <= {m_data[255:128], update_data, m_data[ 95:0]};
                3'b011: c_data_i <= {m_data[255:160], update_data, m_data[127:0]};
                3'b010: c_data_i <= {m_data[255:192], update_data, m_data[159:0]};
                3'b001: c_data_i <= {m_data[255:224], update_data, m_data[191:0]};
                3'b000: c_data_i <= {update_data, m_data[223:0]};
            endcase
end

// Output signals       ////////////////////////////////////////////////////////
always @(posedge clk)
begin // Note: p_dout_o is significant when processor read data
    if (rst)
        p_dout_o <= 0;
    else if ( (S == Analysis) && cache_hit && !rw)
        p_dout_o <= fromCache;
    else if ( (S == RdfromMemFinish) && !rw)
        p_dout_o <= fromMem;
    else
        p_dout_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        p_ready_o <= 0;
    else if ( ((S == Analysis) && cache_hit) || S == RdfromMemFinish)
        p_ready_o <= 1;
    else
        p_ready_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        m_strobe_o <= 0;
    else if ( (S == RdfromMem || S == WbtoMem) && !m_ready )
        m_strobe_o <= 1;
    else
        m_strobe_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        m_addr_o <= 0;
    else if (S == WbtoMem) // the dirty data addr
        m_addr_o <= {c_tag_o[victim_sel], line_index, 3'b0, 2'b0};
    else if (S == RdfromMem) // the miss data addr
        m_addr_o <= {p_addr[ADDR_WIDTH-1: 5], 3'b0, 2'b0};
    else
        m_addr_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        m_din_o <= 0;
    else if (S == WbtoMem) // the dirty data write back to memory
        m_din_o <= c_data_o[victim_sel];
    else
        m_din_o <= 0;
end

always @(posedge clk)
begin
    if (rst)
        m_rw_o <= 0;
    else if (S == WbtoMem)
        m_rw_o <= 1;
    else
        m_rw_o <= 0; // default: Read memory
end

// Storage /////////////////////////////////////////////////////////////////////
/* valid  */
always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                VALID_[jdx][idx] <= 1'b0;
    else if (S == RdfromMem && m_ready)
        VALID_[line_index][victim_sel] <= 1'b1;
end

/* dirty */
always @(posedge clk)
begin
    if (rst)
        for (idx = 0; idx < N_WAYS; idx = idx + 1)
            for (jdx = 0; jdx < N_LINES; jdx = jdx + 1)
                DIRTY_[jdx][idx] <= 1'b0;
    else if (S == RdfromMem && m_ready && rw)
        DIRTY_[line_index][victim_sel] <= 1'b1;
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
                 .clk(clk),
                 .en(1'b1),
                 .we(cache_write[i]),
                 .addr(line_index),
                 .data_i(tag),
                 .data_o(c_tag_o[i])
             );
        //------------------------------------------------------------------
        sram #(.DATA_WIDTH(LINE_SIZE), .N_ENTRIES(N_LINES))
             DATA_BRAM(
                 .clk(clk),
                 .en(1'b1),
                 .we(cache_write[i]),
                 .addr(line_index),
                 .data_i(c_data_i),  // data from processor write or memory
                 .data_o(c_data_o[i])
             );
    end
endgenerate

endmodule
