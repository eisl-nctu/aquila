`timescale 1ns / 1ps
// =============================================================================
//  Program : sram_dp.v
//  Author  : Chun-Jen Tsai
//  Date    : Jan/09/2020
// -----------------------------------------------------------------------------
//  Description:
//  This module synthesizes dual-port BRAM for TCM scratchpad.
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

module sram_dp
#(parameter DATA_WIDTH = 32, N_ENTRIES = 1024, ADDRW = $clog2(N_ENTRIES))
(
    input                         clk1_i,
    input                         en1_i,
    input                         we1_i,
    input  [DATA_WIDTH/8-1 : 0]   be1_i,
    input  [ADDRW-1 : 0]          addr1_i,
    input  [DATA_WIDTH-1 : 0]     data1_i,
    output reg [DATA_WIDTH-1 : 0] data1_o,
    output reg                    ready1_o,

    input                         clk2_i,
    input                         en2_i,
    input                         we2_i,
    input  [DATA_WIDTH/8-1 : 0]   be2_i,
    input  [ADDRW-1 : 0]          addr2_i,
    input  [DATA_WIDTH-1 : 0]     data2_i,
    output reg [DATA_WIDTH-1 : 0] data2_o,
    output reg                    ready2_o
);

reg [DATA_WIDTH-1 : 0] RAM [N_ENTRIES-1 : 0];

initial
begin
    $readmemh("uartboot.mem", RAM);
end

// ------------------------------------
// Read operation on port #1
// ------------------------------------
always@(posedge clk1_i)
begin
    if (en1_i)
    begin
        data1_o <= RAM[addr1_i];
        ready1_o <= 1;
    end
    else
        ready1_o <= 0;
end

// ------------------------------------
// Write operations on port #1
// ------------------------------------
integer idx1;

always@(posedge clk1_i)
begin
    if (en1_i)
    begin
        if (we1_i)
            for (idx1 = 0; idx1 < DATA_WIDTH/8; idx1 = idx1 + 1)
                if (be1_i[idx1]) RAM[addr1_i][(idx1<<3) +: 8] <= data1_i[(idx1<<3) +: 8];
    end
end

// ------------------------------------
// Read operation on port #2
// ------------------------------------
always@(posedge clk2_i)
begin
    if (en2_i)
    begin
        data2_o <= RAM[addr2_i];
        ready2_o <= 1;
    end
    else
        ready2_o <= 0;
end

// ------------------------------------
// Write operations on port #2
// ------------------------------------
integer idx2;

always@(posedge clk2_i)
begin
    if (en2_i)
    begin
        if (we2_i)
            for (idx2 = 0; idx2 < DATA_WIDTH/8; idx2 = idx2 + 1)
                if (be2_i[idx2]) RAM[addr2_i][(idx2<<3) +: 8] <= data2_i[(idx2<<3) +: 8];
    end
end

endmodule   // sram_dp
