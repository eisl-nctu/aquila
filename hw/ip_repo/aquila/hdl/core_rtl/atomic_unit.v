`timescale 1 ns / 1 ps
// =============================================================================
//  Program : atomic_unit.v
//  Author  : Chih-Yu Hsiang
//  Date    : Mar/03/2020
// -----------------------------------------------------------------------------
//  Description:
//  This module handle atomic request from core
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Feb/10/2022, by Che-Yu Wu:
//    Two consecutive strobe signals cause the cdc synchronizer to output only
//    one strobe signal. Thus, we add an extra 'Wait' state to split these two
//    strobe signals.
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

module atomic_unit #
(
    parameter integer N      = 1,   // number of cores
    parameter integer XLEN   = 32,  // Width of address bus
    parameter integer CLSIZE = `CLP // Size of a cache line in bits.
)
(
    input                 clk_i,
    input                 rst_i,

    input  [N-1 : 0]      core_id_i, // one-hot
    input                 core_strobe_i,
    input  [XLEN-1 : 0]   core_addr_i,
    input                 core_rw_i,
    input  [CLSIZE-1 : 0] core_data_i,
    output                core_done_o,
    output [CLSIZE-1 : 0] core_data_o,
    input                 core_is_amo_i,
    input  [ 4 : 0]       core_amo_type_i,

    output                M_DMEM_strobe_o,
    output [XLEN-1 : 0]   M_DMEM_addr_o,
    output                M_DMEM_rw_o,
    output [CLSIZE-1 : 0] M_DMEM_data_o,
    input                 M_DMEM_done_i,
    input  [CLSIZE-1 : 0] M_DMEM_data_i
);

localparam Bypass    = 0,
           AmoRd     = 1,
           AmoWr     = 2,
           AmoFinish = 3,
           AmoWaitCohere = 4,
           Lr        = 5,
           Wait      = 6;

//====================================================
// Signals
//====================================================
reg  [CLSIZE-1 : 0]    m_data;

// FSM
reg  [ 2 : 0]          state;
reg  [ 2 : 0]          state_next;

// LR/SC
reg  [$clog2(N) : 0]   core_id_bin;
reg  [XLEN-1 : 2]      reservation_addr [N-1:0];
reg  [N-1 : 0]         reservation;
reg  [N-1 : 0]         addr_h_match; // for cache write-back
reg  [N-1 : 0]         addr_l_match;
reg  [N-1 : 0]         rm_reservation;
wire                   sc_fail;

// type
wire is_lr = (core_amo_type_i[1:0] == 2'b10);
wire is_sc = (core_amo_type_i[1:0] == 2'b11);

// amo to memory signals
wire                amo_strobe;
wire [XLEN-1 : 0]   amo_addr;
wire                amo_rw;
wire                amo_done;
wire [CLSIZE-1 : 0] amo_data2core;
wire [CLSIZE-1 : 0] amo_data2mem;

// amo alu
wire [ 4 : 0]     op;
wire [XLEN-1 : 0] rs1;   // from memory
wire [XLEN-1 : 0] rs2;   // from core
reg  [XLEN-1 : 0] result;

//====================================================
// Logic
//====================================================
// Finite State Machine
always @(posedge clk_i)
begin
    if (rst_i)
        state <= Bypass;
    else
        state <= state_next;
end

always @(*) begin
    case (state)
        Bypass:
            if (core_strobe_i & core_is_amo_i)
                if (is_sc & sc_fail)
                    state_next = AmoFinish;
                else
                    state_next = AmoRd;
            else
                state_next = Bypass;
        AmoRd:
            if (M_DMEM_done_i)
                if(is_lr)
                    state_next = AmoFinish;
                else
                    state_next = Wait;
            else
                state_next = AmoRd;
        Wait:
            state_next = AmoWr;
        AmoWr:
            if (M_DMEM_done_i)
                state_next = AmoFinish;
            else
                state_next = AmoWr;
        AmoFinish:
            state_next = Bypass;
        default: 
            state_next = Bypass;
    endcase
end

// buffer memory data
always @(posedge clk_i ) begin
    if (state == AmoRd)
        m_data <= M_DMEM_data_i;
end

// LR/SC logic
always @(*) begin
    case (core_id_i)
        2'b01: core_id_bin = 0;
        2'b10: core_id_bin = 1;
        default: core_id_bin = 0;
    endcase
end

integer i;
always @(*) begin
    for (i = 0 ; i < N ; i = i + 1) begin
        addr_h_match[i] = (reservation_addr[i][XLEN-1:5] == core_addr_i[XLEN-1:5]); // compare width depend on cache
        addr_l_match[i] = (reservation_addr[i][4:2] == core_addr_i[4:2]);
        rm_reservation[i] = (is_sc & core_id_bin == i) | (~is_lr & core_rw_i & addr_h_match[i]);
    end
end

always @(posedge clk_i ) begin
    for (i = 0 ; i < N ; i = i + 1) begin
        if (rst_i) begin
            reservation[i] <= 1'b0;
        end else if(core_done_o) begin
            reservation[i] <= (is_lr & core_id_bin == i ) & ~rm_reservation[i];
        end
    end
end

always @(posedge clk_i ) begin
    if (rst_i)
        for (i = 0 ; i < N ; i = i + 1)
            reservation_addr[i] <= 0;
    else if (core_done_o & is_lr)
        reservation_addr[core_id_bin] <= core_addr_i[XLEN-1:2];
end
assign sc_fail = ~(reservation[core_id_bin] & addr_l_match[core_id_bin] & addr_h_match[core_id_bin]);

// amo alu signal
assign rs1         = m_data[CLSIZE-1:CLSIZE-32];
assign rs2         = core_data_i[CLSIZE-1:CLSIZE-32];
assign op          = core_amo_type_i;

// amo signal
assign amo_strobe    = (state == AmoRd) || (state == AmoWr);
assign amo_rw        = (state == AmoWr);
assign amo_data2core = {is_sc ? { {XLEN-1{1'b0}}, sc_fail} : rs1, {CLSIZE-32{1'b0}}};
assign amo_data2mem  = {result, m_data[CLSIZE-1-32:0]};
assign amo_done      = (state == AmoFinish);

// I/O
assign M_DMEM_strobe_o  = core_is_amo_i ? amo_strobe    : core_strobe_i;
assign M_DMEM_addr_o    = core_addr_i;
assign M_DMEM_rw_o      = core_is_amo_i ? amo_rw        : core_rw_i;
assign M_DMEM_data_o    = core_is_amo_i ? amo_data2mem  : core_data_i;
assign core_done_o      = core_is_amo_i ? amo_done      : M_DMEM_done_i;
assign core_data_o      = core_is_amo_i ? amo_data2core : M_DMEM_data_i;

//====================================================
// Atomic Instructions ALU
//====================================================
//
localparam [4:0] SWAP = 5'b00001,
                 ADD  = 5'b00000,
                 XOR  = 5'b00100,
                 AND  = 5'b01100,
                 OR   = 5'b01000,
                 MIN  = 5'b10000,
                 MAX  = 5'b10100,
                 MINU = 5'b11000,
                 MAXU = 5'b11100,
                 SC   = 5'b00011;

wire               rs1_SLT_rs2;
wire signed [32:0] rs1_ext;
wire signed [32:0] rs2_ext;

//bit 4 of op_i for unsigned
assign rs1_ext = {(~op[3] & rs1[31]), rs1};
assign rs2_ext = {(~op[3] & rs2[31]), rs2};
assign rs1_SLT_rs2 = rs1_ext < rs2_ext;

always @(*) begin
    case (op)
        SC  : result = rs2;
        SWAP: result = rs2;
        ADD : result = rs1 + rs2;
        XOR : result = rs1 ^ rs2;
        AND : result = rs1 & rs2;
        OR  : result = rs1 | rs2;
        MIN : result = rs1_SLT_rs2 ? rs1 : rs2;
        MAX : result = rs1_SLT_rs2 ? rs2 : rs1;
        MINU: result = rs1_SLT_rs2 ? rs1 : rs2;
        MAXU: result = rs1_SLT_rs2 ? rs2 : rs1;
        default: result = rs2;
    endcase
end

endmodule
