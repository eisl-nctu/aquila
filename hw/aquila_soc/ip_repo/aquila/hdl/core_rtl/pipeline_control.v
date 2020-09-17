`timescale 1ns / 1ps
// =============================================================================
//  Program : pipeline_control.v
//  Author  : Jin-you Wu
//  Date    : Dec/17/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the pipeline controller of the Aquila core (A RISC-V RV32IM core).
//  This module integrates the pipeline_control and hazard_detection signals.
//
//  The pipeline controller was based on the Microblaze-compatible processor,
//  KernelBlaze, originally designed by Dong-Fong Syu on Sep/01/2017.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Aug/15/2020, by Chun-Jen Tsai:
//    Removed the Unconditional Branch Prediction Unit and merged its function
//    into the BPU.
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

module pipeline_control(
    // from Decode.
    input [4: 0] rs1_addr_i,
    input [4: 0] rs2_addr_i,
    input [4: 0] rd_addr_i,
    input        illegal_instr_i,
    input        is_load_instr_i,
    input        branch_hit_i,

    // from Execution.
    input        branch_taken_i,
    input        branch_misprediction_i,
    input        is_fencei_i,

    // System Jump operation.
    input        sys_jump_i,

    // Signal that flushes Fetch.
    output       flush2fet_o,

    // Signal that flushes Decode.
    output       flush2dec_o,

    // Signal that flushes Execute.
    output       flush2exe_o,


    // Signal that flushes Writeback.
    output       flush2wbk_o,

    //  Signals that stall PCU and Fetch due to load-use data hazard,
    output       stall_from_hazard_o
);

wire is_rs1_rd_same;
wire is_rs2_rd_same;
wire is_load_use;
wire branch_flush;

assign is_rs1_rd_same = (rs1_addr_i == rd_addr_i);
assign is_rs2_rd_same = (rs2_addr_i == rd_addr_i);
assign is_load_use = (is_rs1_rd_same | is_rs2_rd_same) & is_load_instr_i;

`ifndef disable_branch_prediction
    // with branch predictor
    assign branch_flush = (branch_taken_i & !branch_hit_i) |
                           branch_misprediction_i;
`else
    // without branch predictor
    assign branch_flush = branch_taken_i;
`endif

// ================================================================================
//  Output signals
//
assign flush2fet_o = branch_flush | sys_jump_i | is_fencei_i;
assign flush2dec_o = branch_flush | is_load_use | illegal_instr_i | is_fencei_i;
assign flush2exe_o = is_fencei_i | sys_jump_i;
assign flush2wbk_o = sys_jump_i;
assign stall_from_hazard_o = is_load_use;

endmodule
