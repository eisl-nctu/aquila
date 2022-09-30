`timescale 1ns / 1ps 
// =============================================================================
//  Program : program_counter.v
//  Author  : Jin-you Wu
//  Date    : Dec/17/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Program Counter Unit (PCU) of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Oct/17/2019, by Chun-Jen Tsai:
//    Change the initial program counter address from a "PARAMETER' to an
//    input signal, which come from a system register at the SoC-level.
//
//  Aug/15/2020, by Chun-Jen Tsai:
//    Removed the Unconditional Branch Prediction Unit and merged its function
//    into the BPU.
//
//  Feb/10/2022, by Che-Yu Wu:
//    When icache miss (causing stall) and timer interrupt occur at the same time,
//    the address sent to the main memory will be wrong due to pc_r changed by
//    the timer interrupt. Therefore, the stall signal should have higher priority
//    than the irq_taken signal to avoid changing pc_r.
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

module program_counter #( parameter XLEN = 32 )
(
    // System signals
    input               clk_i,
    input               rst_i,

    // Program counter address at reset
    input  [XLEN-1 : 0] init_pc_addr_i,

    // Interrupt
    input               irq_taken_i,
    input  [XLEN-1 : 0] PC_handler_i,

    // Signal that stalls Program_Counter
    input               stall_i,

    // from BPU
    input               bpu_branch_hit_i,
    input               bpu_branch_decision_i,
    input  [XLEN-1 : 0] bpu_branch_target_addr_i,

    // System Jump operation
    input               sys_jump_i,
    input  [XLEN-1 : 0] sys_jump_data_i,

    // from Decode
    input               dec_branch_hit_i,
    input               dec_branch_decision_i,
    input  [XLEN-1 : 0] dec_pc_i,

    // from Execute
    input               exe_branch_misprediction_i,
    input               exe_branch_taken_i,
    input  [XLEN-1 : 0] exe_branch_target_addr_i,
    input  [XLEN-1 : 0] exe_branch_restore_addr_i,  // already increment 4 in execute
    input               is_fencei_i,

    // to i-memory
    output [XLEN-1 : 0] pc_o
);

/* -------------------------------------------------------------------- *
 *      RISC-V has 32-bit instruction and 16-bit instruction(RVC)       *
 *      So, pc_r <= pc_r + 4   or   pc_r + 2;                           *
 *      However, we don't support rvc module currently                  *
 * -------------------------------------------------------------------- */
reg  [XLEN-1 : 0] pc_r;
wire              rv32 = 1;
wire [ 2 : 0]     pc_offset = rv32 ? 4 : 2;
wire [XLEN-1 : 0] pc_increment;

assign pc_increment = pc_r + pc_offset;

always @(posedge clk_i)
begin
    if (rst_i)
        pc_r <= init_pc_addr_i;
    else if (stall_i)             // Stall should have higher priority than irq_taken.
        pc_r <= pc_r;
    else if (irq_taken_i)
        pc_r <= PC_handler_i;
    else
`ifdef ENABLE_BRANCH_PREDICTION
    // with branch predictor
    if (is_fencei_i)
        pc_r <= dec_pc_i;
    else
    if (exe_branch_taken_i & !dec_branch_hit_i)
        pc_r <= exe_branch_target_addr_i;
    else if (exe_branch_misprediction_i)
        pc_r <= dec_branch_decision_i ? exe_branch_restore_addr_i : exe_branch_target_addr_i;
    else if (sys_jump_i)
        pc_r <= sys_jump_data_i;
    else if (bpu_branch_hit_i & bpu_branch_decision_i)
        pc_r <= bpu_branch_target_addr_i;
    else
        pc_r <= pc_increment;
`else
    // without branch predictor
    if (is_fencei_i)
        pc_r <= dec_pc_i;
    else if (exe_branch_taken_i) pc_r <= exe_branch_target_addr_i;
    else if (sys_jump_i) pc_r <= sys_jump_data_i;
    else pc_r <= pc_increment;
`endif
end

// ================================================================================
//  Output Signals
//
assign pc_o = pc_r;

endmodule   // program_counter
