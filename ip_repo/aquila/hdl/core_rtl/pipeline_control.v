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
//  NONE.
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
    // from Decode
    input [4: 0] rs1_addr,
    input [4: 0] rs2_addr,
    input        illegal_instr,
    
    // from Decode_Execute_Pipeline
    input [4: 0] rd_addr_DEC_EXE,
    input        is_load_instr_DEC_EXE,
    input        cond_branch_hit_EXE,
    input        uncond_branch_hit_EXE,

    // from Execution Stage
    input        branch_taken,
    input        cond_branch_misprediction,

    // System Jump operation
    input        sys_jump,

    // that flushes Fetch_Decode_Pipeline
    output       flush2fet,

    // that flushes Decode_Execute_Pipeline
    output       flush2dec,
    
    // that stall Program_Counter and Fetch_Decode_Pipeline  due to load-use data hazard,
    output       stall_from_hazard
);

wire is_rs1_rd_DEC_EXE_same;
wire is_rs2_rd_DEC_EXE_same;
wire is_load_use;
wire branch_flush;

assign is_rs1_rd_DEC_EXE_same = (rs1_addr == rd_addr_DEC_EXE);
assign is_rs2_rd_DEC_EXE_same = (rs2_addr == rd_addr_DEC_EXE);
assign is_load_use = (is_rs1_rd_DEC_EXE_same | is_rs2_rd_DEC_EXE_same) & is_load_instr_DEC_EXE;

// with branch predictor
assign branch_flush = (branch_taken & !uncond_branch_hit_EXE & !cond_branch_hit_EXE) | cond_branch_misprediction;

// without branch predictor
/*
assign branch_flush = branch_taken;
*/

// ================================================================================
//  Output signals
//
assign flush2fet = branch_flush | sys_jump;
assign flush2dec = branch_flush | is_load_use | illegal_instr;
assign stall_from_hazard = is_load_use;

endmodule   // pipeline_control
