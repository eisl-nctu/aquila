`timescale 1ns / 1ps
// =============================================================================
//  Program : memory_write_back.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Writeback Pipeline Stage of the Aquila core (A RISC-V core).
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

module writeback #( parameter XLEN = 32 )
(
    //  Processor clock and reset signals.
    input               clk_i,
    input               rst_i,

    // Pipeline stall signal.
    input               stall_i,

    // Processor pipeline flush signal.
    input               flush_i,

    // From Execute
    input               regfile_we_i,
    input  [ 4 : 0]     rd_addr_i,
    input  [ 2 : 0]     regfile_input_sel_i,
    input               signex_sel_i,
    input  [ 1 : 0]     addr_alignment_i,
    input  [XLEN-1 : 0] p_data_i,

    input               csr_we_i,
    input  [11: 0]      csr_we_addr_i,
    input  [XLEN-1 : 0] csr_we_data_i,

    // from Data Memory
    input  [XLEN-1 : 0] m_data_i,

    // to RegisterFile
    output              rd_we_o,
    output [ 4 : 0]     rd_addr_o,
    output [XLEN-1 : 0] rd_data_o,

    // PC of the current instruction.
    input  [XLEN-1 : 0] pc_i,
    output [XLEN-1 : 0] pc_o,

    // System Jump operation
    input               sys_jump_i,
    input  [ 1 : 0]     sys_jump_csr_addr_i,
    output              sys_jump_o,
    output [ 1 : 0]     sys_jump_csr_addr_o,

    // Has instruction fetch being successiful?
    input               fetch_valid_i,
    output              fetch_valid_o,

    // To CSR
    output              csr_we_o,
    output [11 : 0]     csr_we_addr_o,
    output [XLEN-1 : 0] csr_we_data_o,

    // Exception info passed from Memory to CSR.
    input               xcpt_valid_i,
    input  [ 3 : 0]     xcpt_cause_i,
    input  [XLEN-1 : 0] xcpt_tval_i,
    output              xcpt_valid_o,
    output [ 3 : 0]     xcpt_cause_o,
    output [XLEN-1 : 0] xcpt_tval_o
);

reg [ 2 : 0]            regfile_input_sel_r;
reg                     regfile_we_r;
reg [ 4 : 0]            rd_addr_r;
reg                     signex_sel_r;
reg [ 1 : 0]            addr_alignment_r;
reg [XLEN-1 : 0]        p_data_r, m_data_r;
reg [XLEN-1 : 0]        aligned_data, rd_data;

reg                     xcpt_valid_r;
reg [ 3 : 0]            xcpt_cause_r;
reg [XLEN-1 : 0]        xcpt_tval_r;
reg                     sys_jump_r;
reg [ 1 : 0]            sys_jump_csr_addr_r;
reg [XLEN-1 : 0]        pc_r;
reg                     fetch_valid_r;
reg                     csr_we_r;
reg [XLEN-1 : 0]        csr_we_addr_r;
reg [XLEN-1 : 0]        csr_we_data_r;

always @(posedge clk_i)
begin
    if (rst_i || (flush_i && !stall_i)) // stall has higher priority than flush.
    begin
        regfile_we_r <= 0;
        rd_addr_r <= 0;
        regfile_input_sel_r <= 4;
        signex_sel_r <= 0;
        addr_alignment_r <= 0;
        p_data_r <= 0;

        csr_we_r <= 0;
        csr_we_addr_r <= 0;
        csr_we_data_r <= 0;
        sys_jump_r <= 0;
        sys_jump_csr_addr_r <= 0;
        xcpt_valid_r <= 0;
        xcpt_cause_r <= 0;
        xcpt_tval_r <= 0;
        pc_r <= 0;
        fetch_valid_r <= 0;
    end
    else if (stall_i)
    begin
        regfile_we_r <= regfile_we_r;
        rd_addr_r <= rd_addr_r;
        regfile_input_sel_r <= regfile_input_sel_r;
        signex_sel_r <= signex_sel_r;
        addr_alignment_r <= addr_alignment_r;
        p_data_r <= p_data_r;

        csr_we_r <= csr_we_r;
        csr_we_addr_r <= csr_we_addr_r;
        csr_we_data_r <= csr_we_data_r;
        sys_jump_r <= sys_jump_r;
        sys_jump_csr_addr_r <= sys_jump_csr_addr_r;
        xcpt_valid_r <= xcpt_valid_r;
        xcpt_cause_r <= xcpt_cause_r;
        xcpt_tval_r <= xcpt_tval_r;
        pc_r <= pc_r;
        fetch_valid_r <= fetch_valid_r;
    end
    else if (xcpt_valid_i)
    begin
        regfile_we_r <= 0;
        rd_addr_r <= 0;
        regfile_input_sel_r <= 4;
        signex_sel_r <= 0;
        addr_alignment_r <= 0;
        p_data_r <= 0;

        csr_we_r <= 0;
        csr_we_addr_r <= 0;
        csr_we_data_r <= 0;
        sys_jump_r <= 0;
        sys_jump_csr_addr_r <= 0;
        xcpt_valid_r <= xcpt_valid_i;
        xcpt_cause_r <= xcpt_cause_i;
        xcpt_tval_r <= xcpt_tval_i;
        pc_r <= pc_i;
        fetch_valid_r <= 1;
    end
    else
    begin
        regfile_we_r <= regfile_we_i;
        rd_addr_r <= rd_addr_i;
        regfile_input_sel_r <= regfile_input_sel_i;
        signex_sel_r <= signex_sel_i;
        addr_alignment_r <= addr_alignment_i;
        p_data_r <= p_data_i;

        csr_we_r <= csr_we_i;
        csr_we_addr_r <= csr_we_addr_i;
        csr_we_data_r <= csr_we_data_i;
        sys_jump_r <= sys_jump_i;
        sys_jump_csr_addr_r <= sys_jump_csr_addr_i;
        xcpt_valid_r <= xcpt_valid_i;
        xcpt_cause_r <= xcpt_cause_i;
        xcpt_tval_r <= xcpt_tval_i;
        pc_r <= pc_i;
        fetch_valid_r <= fetch_valid_i;
    end
end

always @(posedge clk_i)
begin
    if (rst_i)
        m_data_r <= 32'b0;
    else if (stall_i)
        m_data_r <= m_data_r;
    else if (xcpt_valid_i)
        m_data_r <= 32'b0;
    else
        m_data_r <= m_data_i;
end

always @(*)
begin
    case (addr_alignment_r)
        2'b00: aligned_data = m_data_r;
        2'b01: aligned_data = {m_data_r[ 7: 0], m_data_r[31: 8]};
        2'b10: aligned_data = {m_data_r[15: 0], m_data_r[31: 16]};
        2'b11: aligned_data = {m_data_r[23: 0], m_data_r[31: 24]};
    endcase
end

always @(*)
begin
    case (regfile_input_sel_r)
        3'b000: rd_data = signex_sel_r ?
                          {24'b0, aligned_data[7 : 0]} :
                          {{24{aligned_data[7]}}, aligned_data[7 : 0]};   // load byte
        3'b001: rd_data = signex_sel_r ?
                          {16'b0, aligned_data[15 : 0]} :
                          {{16{aligned_data[15]}}, aligned_data[15 : 0]}; // load half word
        3'b010: rd_data = aligned_data;                                   // load word
        default: rd_data = p_data_r;                                      // data from processor
    endcase
end

assign rd_we_o = regfile_we_r;
assign rd_addr_o = rd_addr_r;
assign rd_data_o = rd_data;

assign sys_jump_o = sys_jump_r;
assign sys_jump_csr_addr_o = sys_jump_csr_addr_r;
assign csr_we_o = csr_we_r;
assign csr_we_addr_o = csr_we_addr_r;
assign csr_we_data_o = csr_we_data_r;
assign xcpt_valid_o = xcpt_valid_r;
assign xcpt_cause_o = xcpt_cause_r;
assign xcpt_tval_o = xcpt_tval_r;
assign pc_o = pc_r;
assign fetch_valid_o = fetch_valid_r;

endmodule
