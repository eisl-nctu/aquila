`timescale 1ns / 1ps
// =============================================================================
//  Program : core_top.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila IP wrapper for an AXI-based application
//  processor SoC.
//
//  The pipeline architecture of Aquila 1.0 was based on the Microblaze-
//  compatible processor, KernelBlaze, originally designed by Dong-Fong Syu.
//  This file, core_top.v, was derived from CPU.v of KernelBlaze by Dong-Fong
//  on Sep/09/2017.
//
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Oct/16-17/2019, by Chun-Jen Tsai:
//    Unified the memory accesses scheme of the processor core, pushing the
//    address decoding of different memory devices to the SoC level.  Change
//    the initial program counter address from a "PARAMETER' to an input
//    signal, which comes from a system register at the SoC-level.
//
//  Nov/29/2019, by Chun-Jen Tsai:
//    Change the overall pipeline architecture of Aquila. Merges the pipeline
//    register moduels of Fetch, Decode, and Execute stages into the respective
//    moudules.
//
//  Aug/06/2020, by Jen-Yu Chi:
//    modify irq_taken and the pc that is written to mepc.
//
//  Aug/15/2020, by Chun-Jen Tsai:
//    Removed the Unconditional Branch Prediction Unit and merged its function
//    into the BPU.
//
//  Sep/16/2022, by Chun-Jen Tsai:
//    Disable interrupts during external memory accesses or AMO operations.
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

module core_top #(
    parameter HART_ID       = 0,
    parameter XLEN          = 32,
    parameter BPU_ENTRY_NUM = 64
)
(
    // System signals.
    input                 clk_i,
    input                 rst_i,
    input                 stall_i,

    // Program counter address at reset.
    input  [XLEN-1 : 0]   init_pc_addr_i,

    // Instruction memory port.
    input  [XLEN-1 : 0]   code_i,
    input                 code_ready_i,
    output [XLEN-1 : 0]   code_addr_o,
    output                code_req_o,

    // Data or device memory port.
    input  [XLEN-1 : 0]   data_i,
    input                 data_ready_i,
    output [XLEN-1 : 0]   data_o,
    output [XLEN-1 : 0]   data_addr_o,
    output                data_rw_o,      // 0: data read, 1: data write.
    output [XLEN/8-1 : 0] data_byte_enable_o,
    output                data_req_o,
    output                data_is_amo_o,
    output [ 4: 0]        data_amo_type_o,
    input                 data_addr_ext_i,

    // Cache flush signal.
    output                cache_flush_o,

    // Interrupt sources.
    input                 ext_irq_i,
    input                 tmr_irq_i,
    input                 sft_irq_i
);

// ------------------------------
//  Fetch stage output signals
// ------------------------------
wire [XLEN-1 : 0] fet_instr2dec, fet_pc2dec;
wire              fet_branch_hit, fet_branch_decision;

wire              fet_valid2dec;
wire              fet_xcpt_valid2dec;
wire [ 3 : 0]     fet_xcpt_cause2dec;
wire [XLEN-1 : 0] fet_xcpt_tval2dec;

// ------------------------------
//  Decode stage output signals
// ------------------------------
// Signals sent to multiple destinations
wire [XLEN-1 : 0] dec_pc;
wire              dec_is_branch, dec_is_jal, dec_is_jalr;
wire              dec_branch_hit, dec_branch_decision;

// Signals sent to Pipeline Control only
wire              dec_load_hazard2plc;
wire              dec_unsupported_instr;

// Signals sent to Register File only
wire [ 4 : 0]     dec_rs1_addr2rfu, dec_rs2_addr2rfu;

// Signals sent to Forwarding Unit only
wire [ 4 : 0]     dec_rs1_addr2fwd, dec_rs2_addr2fwd;
wire [XLEN-1 : 0] dec_rs1_data2fwd, dec_rs2_data2fwd;
wire [11: 0]      dec_csr_addr2fwd;
wire [XLEN-1 : 0] dec_csr_data2fwd;

// Signals sent to CSR only
wire [11 : 0]     dec_csr_addr2csr;

// Signals sent to Execute only
wire [ 4 : 0]     dec_rd_addr2exe;
wire              dec_we2exe, dec_re2exe;
wire [XLEN-1 : 0] dec_imm2exe;
wire              dec_csr_we2exe;
wire [ 4 : 0]     dec_csr_imm2exe;
wire [ 1 : 0]     dec_inA_sel2exe, dec_inB_sel2exe, dec_dsize_sel2exe;
wire [ 2 : 0]     dec_regfile_sel2exe, dec_operation_sel2exe;
wire              dec_regfile_we2exe, dec_signex_sel2exe;
wire              dec_alu_muldiv_sel2exe, dec_shift_sel2exe;
wire              dec_is_fencei2exe;
wire              dec_is_amo2exe;
wire [ 4 : 0]     dec_amo_type2exe;

wire              dec_fetch_valid2exe;
wire              dec_sys_jump2exe;
wire [ 1 : 0]     dec_sys_jump_csr_addr2exe;
wire              dec_xcpt_valid2exe;
wire [ 3 : 0]     dec_xcpt_cause2exe;
wire [XLEN-1 : 0] dec_xcpt_tval2exe;

// ------------------------------
//  Execute stage output signals
// ------------------------------
wire              exe_branch_taken;
wire [XLEN-1 : 0] exe_branch_restore_pc, exe_branch_target_addr;
wire              exe_is_branch2bpu;
wire              exe_we, exe_re;
wire              exe_regfile_we2wbk;
wire [ 1 : 0]     exe_dsize_sel2mem;
wire              exe_signex_sel2wbk;
wire [XLEN-1 : 0] exe_rs2_data2mem, exe_addr2mem, exe_p_data;
wire [ 4 : 0]     exe_rd_addr2wbk;
wire [ 2 : 0]     exe_regfile_input_sel2wbk;
wire              exe_branch_misprediction;
wire              exe_is_fencei;
wire              exe_is_amo2mem;
wire [ 4 : 0]     exe_amo_type2mem;
wire              exe_csr_we;
wire [11 : 0]     exe_csr_addr;
wire [XLEN-1 : 0] exe_csr_data;

wire              exe_fetch_valid2mem;
wire              exe_sys_jump2mem;
wire [ 1 : 0]     exe_sys_jump_csr_addr2mem;
wire              exe_xcpt_valid2mem;
wire [ 3 : 0]     exe_xcpt_cause2mem;
wire [XLEN-1 : 0] exe_xcpt_tval2mem;
wire [XLEN-1 : 0] exe_pc2mem;

// ------------------------------
//  Memory stage output signals
// ------------------------------
wire [XLEN-1 : 0] mem_dataout;
wire [ 3 : 0]     mem_byte_sel;
wire              mem_align_exception;

wire              mem_fetch_valid2wbk;
wire              mem_sys_jump2wbk;
wire [ 1 : 0]     mem_sys_jump_csr_addr2wbk;
wire              mem_xcpt_valid2wbk;
wire [ 3 : 0]     mem_xcpt_cause2wbk;
wire [XLEN-1 : 0] mem_xcpt_tval2wbk;
wire [XLEN-1 : 0] mem_pc2wbk;

// --------------------------------
//  Writeback stage output signals
// --------------------------------
wire [XLEN-1 : 0] wbk_rd_data;
wire              wbk_rd_we;
wire [ 4 : 0]     wbk_rd_addr;

wire              wbk_csr_we;
wire [11 : 0]     wbk_csr_addr;
wire [XLEN-1 : 0] wbk_csr_data;

wire              wbk_fetch_valid2csr;
wire              wbk_sys_jump2csr;
wire [ 1 : 0]     wbk_sys_jump_csr_addr2csr;
wire              wbk_xcpt_valid2csr;
wire [ 3 : 0]     wbk_xcpt_cause2csr;
wire [XLEN-1 : 0] wbk_xcpt_tval2csr;
wire [XLEN-1 : 0] wbk_pc2csr;

// ---------------------------------
//  Output signals from other units
// ---------------------------------
// Pipeline control (PLC)
wire plc_flush2fet, plc_flush2dec, plc_flush2exe, plc_flush2wbk;

// Program counter unit (PCU)
wire [XLEN-1 : 0] pcu_pc;

// Forwarding unit (FWD)
wire [XLEN-1 : 0] fwd_rs1, fwd_rs2;
wire [XLEN-1 : 0] fwd_csr_data2exe;

// Register File (RFU)
wire [XLEN-1 : 0] rfu_rs1_data2dec, rfu_rs2_data2dec;

// Control Status Registers (CSR)
wire              csr_irq_taken;
reg               csr_irq_taken_r;
wire [XLEN-1 : 0] csr_pc_handler;
wire [XLEN-1 : 0] csr_data2dec;
wire              csr_sys_jump;
wire [XLEN-1 : 0] csr_sys_jump_data;

// Branch Prediction Unit (BPU)
wire              bpu_branch_hit, bpu_branch_decision;
wire [XLEN-1 : 0] bpu_branch_target_addr;

// Misc. signals
wire              irq_enable;
wire              irq_taken;
reg  [XLEN-1 : 0] nxt_unwb_PC;
wire [ 1 : 0]     privilege_level;

// =============================================================================
//  Signals sent to the instruction & data memory IPs in the Aquila SoC
//
assign code_addr_o = pcu_pc;
assign data_addr_o = exe_addr2mem;
assign data_rw_o = exe_we;
assign data_o = mem_dataout;
assign data_byte_enable_o = mem_byte_sel;

assign cache_flush_o = exe_is_fencei;

// =============================================================================
//  Atomic operation signals from Execute to Memory
//
assign data_is_amo_o = exe_is_amo2mem;
assign data_amo_type_o = exe_amo_type2mem;

// =============================================================================
//  Control signals to temporarily disable interrupts
//  We must avoid AMO operations or external memory/device
//  accesses being interrupted.
//
assign irq_enable = ~((data_addr_ext_i && (exe_we|exe_re)) || exe_is_amo2mem);

// =============================================================================
// Finite state machine that controls the processor pipeline stalls.
//
localparam i_NEXT = 0, i_WAIT = 1;
localparam d_IDLE = 0, d_WAIT = 1, d_STALL = 2;
reg iS, iS_nxt;
reg [1:0] dS, dS_nxt;

// -----------------------------------------------------------------------------
// The stall signals:
//    # stall_pipeline stalls the entire pipeline stages
//    # stall_data_hazard only stall the Program_Counter and the Fetch stages
//
wire stall_data_hazard; // The stall signal from Pipeline Control.
wire stall_from_exe;    // The stall signal from Execute.
wire stall_instr_fetch;
wire stall_data_fetch;
wire stall_pipeline;

assign stall_instr_fetch = (!code_ready_i);
assign stall_data_fetch = (dS_nxt == d_WAIT) && (! exe_is_fencei);
assign stall_pipeline = stall_instr_fetch | stall_data_fetch | stall_from_exe;

// Maintain irq_taken signal for pipeline stall
assign irq_taken = csr_irq_taken | csr_irq_taken_r;

always @(posedge clk_i)
begin
    if (rst_i)
        csr_irq_taken_r <= 0;
    else if (stall_instr_fetch | stall_data_fetch | stall_from_exe)
        csr_irq_taken_r <= csr_irq_taken_r | csr_irq_taken;
    else
        csr_irq_taken_r <= 0;
end

// =============================================================================
always@(*) begin
    if (!wbk_xcpt_valid2csr) begin
        if (mem_fetch_valid2wbk)
            nxt_unwb_PC = mem_pc2wbk;
        else if (exe_fetch_valid2mem)
            nxt_unwb_PC = exe_pc2mem;
        else if (dec_fetch_valid2exe)
            nxt_unwb_PC = dec_pc;
        else if(fet_valid2dec)
            nxt_unwb_PC = fet_pc2dec;
        else
            nxt_unwb_PC = pcu_pc;
    end else begin
        nxt_unwb_PC = wbk_pc2csr;
    end
end

// =============================================================================
// Finite state machine that controls the instruction & data fetches.
//
always @(posedge clk_i)
begin
    if (rst_i)
        iS <= i_NEXT;
    else
        iS <= iS_nxt;
end

always @(*)
begin
    case (iS)
        i_NEXT: // CJ Tsai 0227_2020: I-fetch when I-memory ready.
            if (code_ready_i)
                iS_nxt = i_NEXT;
            else
                iS_nxt = i_WAIT;
        i_WAIT:
            if (code_ready_i)
                iS_nxt = i_NEXT; // one-cycle delay
            else
                iS_nxt = i_WAIT;
    endcase
end

always @(posedge clk_i)
begin
    if (rst_i)
        dS <= d_IDLE;
    else
        dS <= dS_nxt;
end

always @(*)
begin
    case (dS)
        d_IDLE:
            if ((exe_re || exe_we) && !mem_align_exception)
                dS_nxt = d_WAIT;
            else
                dS_nxt = d_IDLE;
        d_WAIT:
            if (data_ready_i)
                if (stall_instr_fetch || stall_from_exe)
                    dS_nxt = d_STALL;
                else
                    dS_nxt = d_IDLE;
            else
                dS_nxt = d_WAIT;
        d_STALL:
            // CY Hsiang July 20 2020
            if (stall_instr_fetch || stall_from_exe)
                dS_nxt = d_STALL;
            else
                dS_nxt = d_IDLE;
        default:
            dS_nxt = d_IDLE;
    endcase
end

// -----------------------------------------------------------------------------
// Output instruction/data request signals
assign code_req_o = (iS == i_NEXT);
assign data_req_o = (dS == d_IDLE) && (exe_re || exe_we);

// -----------------------------------------------------------------------------
// Data Memory Signals and logic
// CY Hsiang July 20 2020
reg  [XLEN-1 : 0] data_read_reg;
wire [XLEN-1 : 0] data_read2wbk;

always @(posedge clk_i) begin
    if (rst_i)
        data_read_reg <= 0;
    else if (data_ready_i)
        data_read_reg <= data_i;
end

assign data_read2wbk = (dS == d_STALL) ? data_read_reg : data_i;

////////////////////////////////////////////////////////////////////////////////
//                        the following are submodules                        //
////////////////////////////////////////////////////////////////////////////////

// =============================================================================
pipeline_control Pipeline_Control(
    // from Decode
    .unsupported_instr_i(dec_unsupported_instr),
    .branch_hit_i(dec_branch_hit),
    .is_load_hazard(dec_load_hazard2plc),

    // from Execute
    .branch_taken_i(exe_branch_taken),
    .branch_misprediction_i(exe_branch_misprediction),
    .is_fencei_i(exe_is_fencei),

    // System Jump operation
    .sys_jump_i(csr_sys_jump),

    // to Fetch
    .flush2fet_o(plc_flush2fet),

    // to Decode
    .flush2dec_o(plc_flush2dec),

    // to Execute
    .flush2exe_o(plc_flush2exe),

    // to Writeback
    .flush2wbk_o(plc_flush2wbk),

    // to PCU and Fetch
    .data_hazard_o(stall_data_hazard)
);

// =============================================================================
forwarding_unit Forwarding_Unit(
    // from Decode
    .rs1_addr_i(dec_rs1_addr2fwd),
    .rs2_addr_i(dec_rs2_addr2fwd),
    .csr_addr_i(dec_csr_addr2fwd),
    .rs1_data_i(dec_rs1_data2fwd),
    .rs2_data_i(dec_rs2_data2fwd),
    .csr_data_i(dec_csr_data2fwd),

    // from Execute
    .exe_rd_addr_i(exe_rd_addr2wbk),
    .exe_regfile_we_i(exe_regfile_we2wbk),
    .exe_regfile_input_sel_i(exe_regfile_input_sel2wbk),
    .exe_p_data_i(exe_p_data),

    .exe_csr_addr_i(exe_csr_addr),
    .exe_csr_we_i(exe_csr_we),
    .exe_csr_data_i(exe_csr_data),

    // from Writeback
    .wbk_rd_addr_i(wbk_rd_addr),
    .wbk_regfile_we_i(wbk_rd_we),
    .wbk_rd_data_i(wbk_rd_data),

    .wbk_csr_addr_i(wbk_csr_addr),
    .wbk_csr_we_i(wbk_csr_we),
    .wbk_csr_data_i(wbk_csr_data),

    // to Execute and CSR
    .rs1_o(fwd_rs1),
    .rs2_o(fwd_rs2),
    .csr_data_o(fwd_csr_data2exe)
);

// =============================================================================
bpu #(.ENTRY_NUM(BPU_ENTRY_NUM), .XLEN(XLEN))
Branch_Prediction_Unit(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),
    .stall_i(stall_pipeline),

    // from Program_Counter
    .pc_i(pcu_pc),

    // from Decode
    .is_jal_i(dec_is_jal),
    .is_cond_branch_i(dec_is_branch),
    .dec_pc_i(dec_pc),

    // from Execute
    .exe_is_branch_i(exe_is_branch2bpu),
    .branch_taken_i(exe_branch_taken),
    .branch_misprediction_i(exe_branch_misprediction),
    .branch_target_addr_i(exe_branch_target_addr),

    // to Program_Counter and Fetch
    .branch_hit_o(bpu_branch_hit),
    .branch_decision_o(bpu_branch_decision),
    .branch_target_addr_o(bpu_branch_target_addr)
);

// =============================================================================
reg_file Register_File(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),

    // from Decode
    .rs1_addr_i(dec_rs1_addr2rfu),
    .rs2_addr_i(dec_rs2_addr2rfu),

    // from Writeback
    .rd_we_i(wbk_rd_we),
    .rd_addr_i(wbk_rd_addr),
    .rd_data_i(wbk_rd_data),

    // to Decode
    .rs1_data_o(rfu_rs1_data2dec),
    .rs2_data_o(rfu_rs2_data2dec)
);

// =============================================================================
program_counter Program_Counter(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),

    // Program Counter address at reset
    .init_pc_addr_i(init_pc_addr_i),

    // Interrupt
    .irq_taken_i(irq_taken),
    .PC_handler_i(csr_pc_handler),

    // Stall signal for Program Counter
    .stall_i(stall_pipeline || (stall_data_hazard && !irq_taken)),

    // from BPU
    .bpu_branch_hit_i(bpu_branch_hit),
    .bpu_branch_decision_i(bpu_branch_decision),
    .bpu_branch_target_addr_i(bpu_branch_target_addr),

    // System Jump operation
    .sys_jump_i(csr_sys_jump),
    .sys_jump_data_i(csr_sys_jump_data),

    // frome Decode
    .dec_branch_hit_i(dec_branch_hit),
    .dec_branch_decision_i(dec_branch_decision),
    .dec_pc_i(dec_pc),

    // from Execute
    .exe_branch_misprediction_i(exe_branch_misprediction),
    .exe_branch_taken_i(exe_branch_taken),
    .exe_branch_target_addr_i(exe_branch_target_addr),
    .exe_branch_restore_addr_i(exe_branch_restore_pc),
    .is_fencei_i(exe_is_fencei),

    // to Fetch, I-memory
    .pc_o(pcu_pc)
);

// =============================================================================
fetch Fetch(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),
    .stall_i(stall_pipeline || (stall_data_hazard && !irq_taken)),

    // from Pipeline Control and CSR
    .flush_i(plc_flush2fet || irq_taken),

    // from BPU
    .branch_hit_i(bpu_branch_hit),
    .branch_decision_i(bpu_branch_decision),

    // from I-memory
    .instruction_i(code_i),

    // PC of the current instruction.
    .pc_i(pcu_pc),
    .pc_o(fet_pc2dec),

    // to Decode
    .instruction_o(fet_instr2dec),
    .branch_hit_o(fet_branch_hit),
    .branch_decision_o(fet_branch_decision),

     // Has instruction fetch being successiful?
    .fetch_valid_o(fet_valid2dec),   // Validity of the Fetch stage.  
    .xcpt_valid_o(fet_xcpt_valid2dec), // Any valid exception?
    .xcpt_cause_o(fet_xcpt_cause2dec), // Cause of the exception (if any).
    .xcpt_tval_o(fet_xcpt_tval2dec)    // Trap Value (if any).
);

// =============================================================================
decode Decode(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),
    .stall_i(stall_pipeline),

    // Processor pipeline flush signal.
    .flush_i(plc_flush2dec || irq_taken),

    // Signals from Fetch.
    .instruction_i(fet_instr2dec),
    .branch_hit_i(fet_branch_hit),
    .branch_decision_i(fet_branch_decision),

    // Signals from CSR.
    .csr_data_i(csr_data2dec),
    .privilege_lvl_i(privilege_level),

    // Instruction operands from the Register File. To be forwarded.
    .rs1_data_i(rfu_rs1_data2dec),
    .rs2_data_i(rfu_rs2_data2dec),

    // Operand register IDs to the Register File
    .rs1_addr_o(dec_rs1_addr2rfu),
    .rs2_addr_o(dec_rs2_addr2rfu),

    // illegal instruction
    .unsupported_instr_o(dec_unsupported_instr),

    // to Execute
    .imm_o(dec_imm2exe),
    .csr_we_o(dec_csr_we2exe),
    .csr_imm_o(dec_csr_imm2exe),
    .inputA_sel_o(dec_inA_sel2exe),
    .inputB_sel_o(dec_inB_sel2exe),
    .operation_sel_o(dec_operation_sel2exe),
    .alu_muldiv_sel_o(dec_alu_muldiv_sel2exe),
    .shift_sel_o(dec_shift_sel2exe),
    .branch_hit_o(dec_branch_hit), //also to PLC and PCU
    .branch_decision_o(dec_branch_decision),
    .is_jalr_o(dec_is_jalr),
    .is_fencei_o(dec_is_fencei2exe),

    // to Execute and BPU
    .is_branch_o(dec_is_branch),
    .is_jal_o(dec_is_jal),

    // to CSR
    .csr_addr_o(dec_csr_addr2csr),

    // to Execute
    .rd_addr_o(dec_rd_addr2exe),
    .regfile_we_o(dec_regfile_we2exe),
    .regfile_input_sel_o(dec_regfile_sel2exe),
    .we_o(dec_we),
    .re_o(dec_re),
    .dsize_sel_o(dec_dsize_sel2exe),
    .signex_sel_o(dec_signex_sel2exe),
    .is_amo_o(dec_is_amo2exe),
    .amo_type_o(dec_amo_type2exe),

    // to Pipeline Control
    .is_load_hazard_o(dec_load_hazard2plc),

    // to Forwarding Unit
    .rs1_addr2fwd_o(dec_rs1_addr2fwd),
    .rs2_addr2fwd_o(dec_rs2_addr2fwd),
    .rs1_data2fwd_o(dec_rs1_data2fwd),
    .rs2_data2fwd_o(dec_rs2_data2fwd),

    .csr_addr2fwd_o(dec_csr_addr2fwd), // also to Execute
    .csr_data2fwd_o(dec_csr_data2fwd),

    // PC of the current instruction.
    .pc_i(fet_pc2dec),
    .pc_o(dec_pc),

    // System Jump operation
    .sys_jump_o(dec_sys_jump2exe),
    .sys_jump_csr_addr_o(dec_sys_jump_csr_addr2exe),

    // Has instruction fetch being successiful?
    .fetch_valid_i(fet_valid2dec),
    .fetch_valid_o(dec_fetch_valid2exe),

    // Exception info passed from Fetch to Execute.
    .xcpt_valid_i(fet_xcpt_valid2dec),
    .xcpt_cause_i(fet_xcpt_cause2dec),
    .xcpt_tval_i(fet_xcpt_tval2dec),
    .xcpt_valid_o(dec_xcpt_valid2exe),
    .xcpt_cause_o(dec_xcpt_cause2exe),
    .xcpt_tval_o(dec_xcpt_tval2exe)
);

// =============================================================================
execute Execute(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),

    // Pipeline stall signal.
    .stall_i(stall_instr_fetch | stall_data_fetch),

    // Processor pipeline flush signal.
    .flush_i(plc_flush2exe || irq_taken),

    // Signals from the Decode stage.
    .imm_i(dec_imm2exe),
    .inputA_sel_i(dec_inA_sel2exe),
    .inputB_sel_i(dec_inB_sel2exe),
    .operation_sel_i(dec_operation_sel2exe),
    .alu_muldiv_sel_i(dec_alu_muldiv_sel2exe),
    .shift_sel_i(dec_shift_sel2exe),
    .is_branch_i(dec_is_branch),
    .is_jal_i(dec_is_jal),
    .is_jalr_i(dec_is_jalr),
    .is_fencei_i(dec_is_fencei2exe),
    .branch_hit_i(dec_branch_hit),
    .branch_decision_i(dec_branch_decision),

    .regfile_we_i(dec_regfile_we2exe),
    .regfile_input_sel_i(dec_regfile_sel2exe),
    .we_i(dec_we),
    .re_i(dec_re),
    .dsize_sel_i(dec_dsize_sel2exe),
    .signex_sel_i(dec_signex_sel2exe),
    .rd_addr_i(dec_rd_addr2exe),
    .is_amo_i(dec_is_amo2exe),
    .amo_type_i(dec_amo_type2exe),

    .csr_imm_i(dec_csr_imm2exe),
    .csr_we_i(dec_csr_we2exe),
    .csr_we_addr_i(dec_csr_addr2fwd),

    // Signals from the Forwarding Unit.
    .rs1_data_i(fwd_rs1),
    .rs2_data_i(fwd_rs2),
    .csr_data_i(fwd_csr_data2exe),

    // Branch prediction singnals to PLC, PCU, and BPU.
    .is_branch_o(exe_is_branch2bpu),
    .branch_taken_o(exe_branch_taken),
    .branch_misprediction_o(exe_branch_misprediction),
    .branch_target_addr_o(exe_branch_target_addr),     // to PCU and BPU
    .branch_restore_pc_o(exe_branch_restore_pc),       // to PCU only

    // Pipeline stall signal generator, activated when executing
    //    multicycle mul, div and rem instructions.
    .stall_from_exe_o(stall_from_exe),

    // Signals to D-Memory.
    .we_o(exe_we),
    .re_o(exe_re),
    .is_fencei_o(exe_is_fencei),
    .is_amo_o(exe_is_amo2mem),
    .amo_type_o(exe_amo_type2mem),

    // Signals to the Memory stage.
    .rs2_data_o(exe_rs2_data2mem),
    .addr_o(exe_addr2mem),
    .dsize_sel_o(exe_dsize_sel2mem),

    // Signals to the Memory Writeback and the Forwarding Units.
    .regfile_we_o(exe_regfile_we2wbk),
    .regfile_input_sel_o(exe_regfile_input_sel2wbk),
    .rd_addr_o(exe_rd_addr2wbk),
    .p_data_o(exe_p_data),

    .csr_we_o(exe_csr_we),
    .csr_we_addr_o(exe_csr_addr),
    .csr_we_data_o(exe_csr_data),

    // Signals to Memory Writeback.
    .signex_sel_o(exe_signex_sel2wbk),

    // PC of the current instruction.
    .pc_i(dec_pc),
    .pc_o(exe_pc2mem),

    // System Jump operation
    .sys_jump_i(dec_sys_jump2exe),
    .sys_jump_csr_addr_i(dec_sys_jump_csr_addr2exe),
    .sys_jump_o(exe_sys_jump2mem),
    .sys_jump_csr_addr_o(exe_sys_jump_csr_addr2mem),

    // Has instruction fetch being successiful?
    .fetch_valid_i(dec_fetch_valid2exe),
    .fetch_valid_o(exe_fetch_valid2mem),

    // Exception info passed from Decode to Memory.
    .xcpt_valid_i(dec_xcpt_valid2exe),
    .xcpt_cause_i(dec_xcpt_cause2exe),
    .xcpt_tval_i(dec_xcpt_tval2exe),
    .xcpt_valid_o(exe_xcpt_valid2mem),
    .xcpt_cause_o(exe_xcpt_cause2mem),
    .xcpt_tval_o(exe_xcpt_tval2mem)
);

// =============================================================================
memory Memory(
    // from Execute
    .mem_addr_i(exe_addr2mem),
    .unaligned_data_i(exe_rs2_data2mem),      // store value
    .dsize_sel_i(exe_dsize_sel2mem),
    .we_i(exe_we),
    .re_i(exe_re),

    // to D-memory
    .data_o(mem_dataout),                     // data_write
    .byte_sel_o(mem_byte_sel),

    // Exception signal for memory mis-alignment.
    .mem_align_exception_o(mem_align_exception),

    // PC of the current instruction.
    .pc_i(exe_pc2mem),
    .pc_o(mem_pc2wbk),

    // System Jump operation
    .sys_jump_i(exe_sys_jump2mem),
    .sys_jump_csr_addr_i(exe_sys_jump_csr_addr2mem),
    .sys_jump_o(mem_sys_jump2wbk),
    .sys_jump_csr_addr_o(mem_sys_jump_csr_addr2wbk),

    // Has instruction fetch being successiful?
    .fetch_valid_i(exe_fetch_valid2mem),
    .fetch_valid_o(mem_fetch_valid2wbk),

    // Exception info passed from Execute to Writeback.
    .xcpt_valid_i(exe_xcpt_valid2mem),
    .xcpt_cause_i(exe_xcpt_cause2mem),
    .xcpt_tval_i(exe_xcpt_tval2mem),
    .xcpt_valid_o(mem_xcpt_valid2wbk),
    .xcpt_cause_o(mem_xcpt_cause2wbk),
    .xcpt_tval_o(mem_xcpt_tval2wbk)
);

// =============================================================================
writeback Writeback(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),
    .stall_i(stall_pipeline),

    // Writeback stage flush signal.
    .flush_i(plc_flush2wbk || irq_taken),

    // from Execute
    .regfile_we_i(exe_regfile_we2wbk),
    .rd_addr_i(exe_rd_addr2wbk),
    .regfile_input_sel_i(exe_regfile_input_sel2wbk),
    .signex_sel_i(exe_signex_sel2wbk),
    .addr_alignment_i(exe_addr2mem[1: 0]),
    .p_data_i(exe_p_data),

    .csr_we_i(exe_csr_we),
    .csr_we_addr_i(exe_csr_addr),
    .csr_we_data_i(exe_csr_data),

    // from D-memory
    .m_data_i(data_read2wbk),

    // to Register File and Forwarding Unit
    .rd_we_o(wbk_rd_we),
    .rd_addr_o(wbk_rd_addr),
    .rd_data_o(wbk_rd_data),

    // PC of the current instruction.
    .pc_i(mem_pc2wbk),
    .pc_o(wbk_pc2csr),

    // System Jump operation
    .sys_jump_i(mem_sys_jump2wbk),
    .sys_jump_csr_addr_i(mem_sys_jump_csr_addr2wbk),
    .sys_jump_o(wbk_sys_jump2csr),
    .sys_jump_csr_addr_o(wbk_sys_jump_csr_addr2csr),

    // Has instruction fetch being successiful?
    .fetch_valid_i(mem_fetch_valid2wbk),
    .fetch_valid_o(wbk_fetch_valid2csr),

    // to CSR and FWD
    .csr_we_o(wbk_csr_we),
    .csr_we_addr_o(wbk_csr_addr),
    .csr_we_data_o(wbk_csr_data),

    // Exception info passed from Memory to CSR.
    .xcpt_valid_i(mem_xcpt_valid2wbk),
    .xcpt_cause_i(mem_xcpt_cause2wbk),
    .xcpt_tval_i(mem_xcpt_tval2wbk),
    .xcpt_valid_o(wbk_xcpt_valid2csr),
    .xcpt_cause_o(wbk_xcpt_cause2csr),
    .xcpt_tval_o(wbk_xcpt_tval2csr)
);

// =============================================================================
csr_file #( .HART_ID(HART_ID) )
CSR(
    // Top-level system signals
    .clk_i(clk_i),
    .rst_i(rst_i),

    // from Decode
    .csr_raddr_i(dec_csr_addr2csr),

    // to Decode
    .csr_data_o(csr_data2dec),

    // from Writeback
    .csr_we_i(wbk_csr_we),
    .csr_waddr_i(wbk_csr_addr),
    .csr_wdata_i(wbk_csr_data),

    // Interrupts
    .ext_irq_i(ext_irq_i & irq_enable),
    .tmr_irq_i(tmr_irq_i & irq_enable),
    .sft_irq_i(sft_irq_i & irq_enable),
    .irq_taken_o(csr_irq_taken),
    .pc_handler_o(csr_pc_handler),
    .nxt_unwb_PC_i(nxt_unwb_PC),

    // PC of the current instruction.
    .pc_i(wbk_pc2csr),

    // System Jump operation
    .sys_jump_i(wbk_sys_jump2csr),
    .sys_jump_csr_addr_i(wbk_sys_jump_csr_addr2csr),
    .sys_jump_csr_data_o(csr_sys_jump_data),
    .sys_jump_o(csr_sys_jump),

    // Current preivilege level
    .privilege_level_o(privilege_level),

    // Exception requests
    .xcpt_valid_i(wbk_xcpt_valid2csr),
    .xcpt_cause_i(wbk_xcpt_cause2csr),
    .xcpt_tval_i(wbk_xcpt_tval2csr)
);

endmodule
