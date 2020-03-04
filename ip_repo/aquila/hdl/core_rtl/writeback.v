`timescale 1ns / 1ps
// =============================================================================
//  Program : memory_write_back.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Memory/Write_Back Pipeline Stage of the Aquila core (A RISC-V core).
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

module writeback#(parameter DATA_WIDTH = 32)
(
    // External Signals
    input                     clk,
    input                     rst,

    // Signal that stalls this Memory-WriteBack Pipeline Stage
    input                     stall,

    // from Execution Execute_Memory_Pipeline
    input                     regfile_we,
    input  [4 : 0]            rd_addr,
    input  [2 : 0]            regfile_input_sel,
    input                     mem_load_ext_sel,
    input  [1 : 0]            mem_addr_alignment,
    input  [DATA_WIDTH-1 : 0] p_data,

    // from Data Memory
    input [DATA_WIDTH-1 : 0]  mem_data,

    // to RegisterFile
    output                    rd_we_o,
    output [4 : 0]            rd_addr_o,
    output [DATA_WIDTH-1 : 0] rd_data_o
);

reg [2: 0]             regfile_input_sel_r;
reg                    regfile_we_r;
reg [4: 0]             rd_addr_r;
reg                    mem_load_ext_sel_r;
reg [1: 0]             mem_addr_alignment_r;
reg [DATA_WIDTH-1 : 0] p_data_r;

always @(posedge clk)
begin
    if (rst)
    begin
        regfile_we_r <= 0;
        rd_addr_r   <= 0;
        regfile_input_sel_r <= 4;
        mem_load_ext_sel_r <= 0;
        mem_addr_alignment_r <= 0;
        p_data_r    <= 0;
    end
    else if (stall)
    begin
        regfile_we_r <= regfile_we_r;
        rd_addr_r   <= rd_addr_r;
        regfile_input_sel_r <= regfile_input_sel_r;
        mem_load_ext_sel_r <= mem_load_ext_sel_r;
        mem_addr_alignment_r <= mem_addr_alignment_r;
        p_data_r    <= p_data_r;
    end
    else
    begin
        regfile_we_r <= regfile_we;
        rd_addr_r   <= rd_addr;
        regfile_input_sel_r <= regfile_input_sel;
        mem_load_ext_sel_r <= mem_load_ext_sel;
        mem_addr_alignment_r <= mem_addr_alignment;
        p_data_r    <= p_data;
    end
end

reg [31: 0] mem_data_r;
always @(posedge clk)
begin
    if (rst)
        mem_data_r <= 32'b0;
    else if (stall)
        mem_data_r <= mem_data_r;
    else
        mem_data_r <= mem_data;
end

reg [31 : 0] aligned_data_o, rd_data;
always @(*)
begin
    case (mem_addr_alignment_r)
        2'b00: aligned_data_o = mem_data_r;
        2'b01: aligned_data_o = {mem_data_r[7: 0], mem_data_r[31: 8]};
        2'b10: aligned_data_o = {mem_data_r[15: 0], mem_data_r[31: 16]};
        2'b11: aligned_data_o = {mem_data_r[23: 0], mem_data_r[31: 24]};
        default: aligned_data_o = mem_data_r;
    endcase
end

always @(*)
begin
    case (regfile_input_sel_r)
        3'b000: rd_data = mem_load_ext_sel_r ?
                          {24'b0, aligned_data_o[7 : 0]} :
                          {{24{aligned_data_o[7]}}, aligned_data_o[7 : 0]};   // load byte
        3'b001: rd_data = mem_load_ext_sel_r ?
                          {16'b0, aligned_data_o[15 : 0]} :
                          {{16{aligned_data_o[15]}}, aligned_data_o[15 : 0]}; // load half word
        3'b010: rd_data = aligned_data_o;                                     // load word
        default: rd_data = p_data_r;                                          // data from processor
    endcase
end

assign rd_we_o = regfile_we_r;
assign rd_addr_o = rd_addr_r;
assign rd_data_o    = rd_data;

endmodule // memory_writeback
