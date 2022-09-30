`timescale 1ns / 1ps
// =============================================================================
//  Program : fetch.v
//  Author  : Jin-you Wu
//  Date    : Dec/17/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the instruction Fetch stage of the Aquila core (A RISC-V core).
//
//  The pipeline architecture of Aquila 1.0 was based on the Microblaze-
//  compatible processor, KernelBlaze, designed by Dong-Fong Syu.
//  This file, fetch.v, was derived from fetch_decode.v of KernelBlaze by
//  Dong-Fong on Sep/01/2017.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Oct/17/2019, by Chun-Jen Tsai:
//    Change the initial program counter address from a "PARAMETER' to an
//    input signal, which come from a system register at the SoC-level.
//
//  Nov/28/2019, by Chun-Jen Tsai:
//    Parameterize XLEN and rename the old module 'fetch_decode_pipeline'
//    to 'Fetch.'
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
`include "aquila_config.vh"

module fetch #( parameter XLEN = 32 )
(
    // External Signals
    input                   clk_i,
    input                   rst_i,

    // Singal to stall Fetch
    input                   stall_i,

    // from Pipeline_Control
    input                   flush_i,

    // from I-memory
    input  [XLEN-1 : 0]     instruction_i,

    // from Program_Counter
    input  [XLEN-1 : 0]     pc_i,

    // from BPU
    input                   branch_hit_i,
    input                   branch_decision_i,

    // to Decode
    output reg [XLEN-1 : 0] pc_o,
    output reg [XLEN-1 : 0] instruction_o,
    output reg              branch_hit_o,
    output reg              branch_decision_o,

     // Has instruction fetch being successiful?
    output reg              fetch_valid_o, // Validity of the Fetch stage.
    output reg              xcpt_valid_o,  // Any valid exception?
    output reg [ 3 : 0]     xcpt_cause_o,  // Cause of the exception (if any).
    output reg [XLEN-1 : 0] xcpt_tval_o    // Trap Value (if any).
);

reg stall_delay;
reg flush_delay;
reg [31: 0] instruction_delay;

always @(posedge clk_i)
begin
    stall_delay <= stall_i;
    flush_delay <= flush_i;
    instruction_delay <= stall_delay ? instruction_delay : instruction_i;
end

always @(*)
begin
    if (rst_i)
        instruction_o = 32'h00000013;
    else if (~fetch_valid_o)
        // CY Hsiang July 20 2020
        instruction_o = 32'h00000013;
    else if (stall_delay)
        instruction_o = instruction_delay;
    else if (flush_delay)
        instruction_o = 32'h00000013;
    else
        instruction_o = instruction_i;
end

always @(posedge clk_i)
begin
    if (rst_i)
    begin
        pc_o <= 32'h00000000;
        fetch_valid_o <= 0;
        branch_hit_o <= 0;
        branch_decision_o <= 0;
    end
    else if (stall_i)
    begin
        pc_o <= pc_o;
        fetch_valid_o <= fetch_valid_o;
        branch_hit_o <= branch_hit_o;
        branch_decision_o <= branch_decision_o;
    end
    else if (flush_i)
    begin
        pc_o <= pc_i;
        fetch_valid_o <= 0;
        branch_hit_o <= 0;
        branch_decision_o <= 0;
    end
    else
    begin
        pc_o <= pc_i;
        fetch_valid_o <= 1; // Fetched code is always valid when there is no MMU.
        branch_hit_o <= branch_hit_i;
        branch_decision_o <= branch_decision_i;
    end
end

// Sending exception signals to the Decode stage.
// There is no exception generated at the Fetch stage for now.
// This is reserved for MMU use in the future.
always @(posedge clk_i)
begin
    xcpt_valid_o <= 0;
    xcpt_cause_o <= 0;
    xcpt_tval_o <= 0;
end

endmodule
