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

module core_top #(
    parameter DATA_WIDTH        = 32,
    parameter HART_ID           = 0,
    parameter COND_ENTRY_NUM    = 24,
    parameter COND_DATA_WIDTH   = 32,
    parameter UNCOND_ENTRY_NUM  = 20,
    parameter UNCOND_DATA_WIDTH = 32
)
(
    // System signals.
    input                       clk,
    input                       rst,
    input                       stall,

    // Program counter address at reset.
    input  [DATA_WIDTH-1 : 0]   init_pc_addr,

    // Instruction cache port.
    input  [DATA_WIDTH-1 : 0]   instruction,
    input                       instruction_ready,
    output [DATA_WIDTH-1 : 0]   instruction_addr,
    output                      instruction_req,

    // Data cache port.
    input  [DATA_WIDTH-1 : 0]   data_read,
    input                       data_ready,
    output [DATA_WIDTH-1 : 0]   data_write,
    output [DATA_WIDTH-1 : 0]   data_addr,
    output                      data_rw,      // 0: data read, 1: data write.
    output [DATA_WIDTH/8-1 : 0] data_byte_enable,
    output reg                  data_req,

    // Interrupt sources.
    input                       ext_irq,
    input                       tmr_irq,
    input                       sft_irq
);

// System operations.
wire                    sys_jump;
wire [11 : 0]           sys_jump_csr_addr;
wire [DATA_WIDTH-1 : 0] sys_jump_csr_data;

// Pipeline control.
wire flush2fet, flush2dec, stall_from_hazard;

// Forwarding unit.
wire [DATA_WIDTH-1 : 0] rs1_fwd, rs2_fwd;

// Program counter.
wire [DATA_WIDTH-1 : 0] pc;

// Fetch stage signals.
wire [DATA_WIDTH-1 : 0] fet_instr2dec, fet_pc2dec;
wire                    fet_valid2dec;

// Register File.
wire [DATA_WIDTH-1 : 0] rs1_data2dec, rs2_data2dec;

// Decode stage signals.
wire [ 4 : 0]           dec_rs1_addr2regfile, dec_rs2_addr2regfile;
wire                    dec_illegal_instr;
wire [DATA_WIDTH-1 : 0] dec_pc2exe, dec_imm2exe,
                        dec_rs1_data2fwd, dec_rs2_data2fwd;
wire                    dec_regfile_we2exe, dec_we2exe, dec_re2exe,
                        dec_load_ext_sel2exe, dec_instr_valid2csr;
wire [ 4 : 0]           dec_rd_addr2exe, dec_rs1_addr2fwd, dec_rs2_addr2fwd,
                        dec_csr_imm2csr;
wire [ 1 : 0]           dec_inA_sel2exe, dec_inB_sel2exe, dec_input_sel2exe;
wire [ 2 : 0]           dec_regfile_sel2exe, dec_operation_sel2exe;
wire [11 : 0]           dec_csr_addr2csr;

wire                    alu_muldiv_sel2exe, shift_sel2exe, is_branch2exe,
                        is_jal2exe, is_jalr2exe, is_csr_instr2csr;

// Execute stage signals.
wire                    exe_branch_taken;
wire                    stall_from_exe;
wire [DATA_WIDTH-1 : 0] exe_pc2pc, exe_branch_target_addr;
wire                    exe_mem_we;
wire                    exe_mem_re;
wire                    exe_regfile_we2mem_wb, exe_mem_load_ext_sel2mem_wb;
wire [DATA_WIDTH-1 : 0] exe_rs2_data2mem, exe_mem_addr2mem, exe_p_data;
wire [ 4 : 0]           exe_rd_addr2mem_wb;
wire [ 1 : 0]           exe_mem_input_sel2mem;
wire [ 2 : 0]           exe_regfile_input_sel2mem_wb;

// Control Status Registers (CSR).
wire [DATA_WIDTH-1 : 0] csr_data2exe;

// Memory Access.
wire [DATA_WIDTH-1 : 0] data_o, data2mem_wb;
wire [ 3 : 0]           byte_write_sel;
wire                    memory_alignment_exception;

// Memory Writeback Pipeline.
wire [DATA_WIDTH-1 : 0] rd_data2wb;
wire                    rd_we2wb;
wire [ 4 : 0]           rd_addr2wb;

// Branch Prediction Unit & Uncond Branch BHT.
localparam COND_ADDR_WIDTH   = $clog2(COND_ENTRY_NUM),
           UNCOND_ADDR_WIDTH = $clog2(UNCOND_ENTRY_NUM);

wire                    cond_branch_hit_IF, cond_branch_hit_ID,
                        cond_branch_hit_EXE,
                        cond_branch_result_IF, cond_branch_result_ID,
                        cond_branch_result_EXE,
                        uncond_branch_hit_IF, uncond_branch_hit_ID,
                        uncond_branch_hit_EXE,
                        cond_branch_misprediction;

wire [DATA_WIDTH-1 : 0] cond_branch_target_addr, uncond_branch_target_addr;

wire irq_taken;
wire [DATA_WIDTH-1 : 0] PC_handler;

// =============================================================================
//  Signals from the Memory Alignment Stage
//
assign instruction_addr = pc;
assign data_write = data_o;
assign data_addr = exe_mem_addr2mem;
assign data_rw = exe_mem_we;
assign data_byte_enable = byte_write_sel;

// -----------------------------------------------------------------------------
// Date:        2018/10/28
// Engineer:    Jin-you Wu
// -----------------------------------------------------------------------------
// Newly added input:
//      instruction_ready: the instruction from icache is ready
//      data_ready:        the data from dcache or write data to dcache is ready
// Newly added output:
//      instruction_req:   send a request to icache
//      data_req:          send a request to dcache
// --------------------------------------------------------------------------
// Finite State Machine
localparam i_IDLE   = 0,
           i_NEXT   = 1,
           i_WAIT   = 2,
           i_DONE   = 3;
localparam d_IDLE   = 0,
           d_WAIT   = 1;
reg [ 1: 0] iS, iS_nxt, dS, dS_nxt;

// --------------------------------------------------------------------------
// stall pipeline register signals
wire stall_for_instr_fetch;
wire stall_for_data_fetch;

always @(posedge clk)
begin
    if (rst)
        iS <= i_IDLE;
    else
        iS <= iS_nxt;
end

always @(*)
begin
    case (iS)
        i_IDLE:
            iS_nxt = i_NEXT;
        i_NEXT:
            if (stall_from_hazard || stall_for_data_fetch || instruction_ready)
                iS_nxt = i_NEXT;
            else
                iS_nxt = i_WAIT;
        i_WAIT:
            if (instruction_ready)
                iS_nxt = i_NEXT; // one-cycle delay
            else
                iS_nxt = i_WAIT;
        i_DONE:
            iS_nxt = i_DONE;
        default:
            iS_nxt = i_IDLE;
    endcase
end

always @(posedge clk)
begin
    if (rst)
        dS <= d_IDLE;
    else
        dS <= dS_nxt;
end

always @(*)
begin
    case (dS)
        d_IDLE:
            if (exe_mem_re || exe_mem_we)
                dS_nxt = d_WAIT;
            else
                dS_nxt = d_IDLE;
        d_WAIT:
            if (data_ready)
                dS_nxt = d_IDLE;
            else
                dS_nxt = d_WAIT;
        default:
            dS_nxt = d_IDLE;
    endcase
end

assign stall_for_instr_fetch = (!instruction_ready);
assign stall_for_data_fetch = (dS_nxt == d_WAIT);

// -----------------------------------------------------------------------------
// Output data request signals
assign instruction_req = (iS == i_NEXT);
always @(posedge clk)
begin
    if (rst)
        data_req <= 0;
    else if ( (dS == d_IDLE) && (exe_mem_re || exe_mem_we) )
        data_req <= 1;
    else
        data_req <= 0;
end

wire stall_pipeline = stall_for_instr_fetch | stall_for_data_fetch | stall_from_exe;

////////////////////////////////////////////////////////////////////////////////
//                        the following are submodules                        //
////////////////////////////////////////////////////////////////////////////////

// =============================================================================
pipeline_control Pipeline_Control(
    // from the Decode stage
    .rs1_addr(dec_rs1_addr2regfile),
    .rs2_addr(dec_rs2_addr2regfile),
    .illegal_instr(dec_illegal_instr),

    // from Decode_Execute_Pipeline
    .rd_addr_DEC_EXE(dec_rd_addr2exe),
    .is_load_instr_DEC_EXE(dec_re2exe),
    .cond_branch_hit_EXE(cond_branch_hit_EXE),
    .uncond_branch_hit_EXE(uncond_branch_hit_EXE),

    // from Execute
    .branch_taken(exe_branch_taken),
    .cond_branch_misprediction(cond_branch_misprediction),

    // System Jump operation
    .sys_jump(sys_jump),

    // to Fetch stage
    .flush2fet(flush2fet),

    // to Decode_Execute_Pipeline
    .flush2dec(flush2dec),

    // to Program_Counter, Fetch stage
    .stall_from_hazard(stall_from_hazard)
);

// =============================================================================
forwarding_unit Forwarding_Unit(
    // from Decode_Execute_Pipeline
    .rs1_addr(dec_rs1_addr2fwd),
    .rs2_addr(dec_rs2_addr2fwd),
    .rs1_data(dec_rs1_data2fwd),
    .rs2_data(dec_rs2_data2fwd),

    // from Execute_Memory_Pipeline
    .regfile_we_EXE_MEM(exe_regfile_we2mem_wb),
    .rd_addr_EXE_MEM(exe_rd_addr2mem_wb),
    .regfile_input_sel_EXE_MEM(exe_regfile_input_sel2mem_wb),
    .p_data_EXE_MEM(exe_p_data),

    // from Memory_Writeback_Pipeline
    .regfile_we_MEM_WB(rd_we2wb),
    .rd_addr_MEM_WB(rd_addr2wb),
    .rd_data_MEM_WB(rd_data2wb),

    // to Execute, CSR, Execute_Memory_Pipeline
    .rs1_fwd(rs1_fwd),
    .rs2_fwd(rs2_fwd)
);

// =============================================================================
//      # conditional branch predictor
//      # unconditional branch predictor
//
bpu #(
    .ENTRY_NUM(COND_ENTRY_NUM),
    .ADDR_WIDTH(COND_ADDR_WIDTH),
    .DATA_WIDTH(COND_DATA_WIDTH)
)
Branch_Prediction_Unit(
    // System signals
    .clk(clk),
    .rst(rst),
    .stall(stall_pipeline),

    // from Program_Counter
    .pc_IF(pc),

    // from Decode_Execute_Pipeline
    .is_cond_branch(is_branch2exe),
    .pc_EXE(dec_pc2exe),

    // from Execute
    .branch_taken(exe_branch_taken),
    .branch_target_addr(exe_branch_target_addr),
    .cond_branch_misprediction(cond_branch_misprediction),

    // to Program_Counter
    .cond_branch_hit(cond_branch_hit_IF),
    .cond_branch_result(cond_branch_result_IF),
    .cond_branch_target_addr(cond_branch_target_addr)
);

uncond_BHT #(
    .ENTRY_NUM(UNCOND_ENTRY_NUM),
    .ADDR_WIDTH(UNCOND_ADDR_WIDTH),
    .DATA_WIDTH(UNCOND_DATA_WIDTH)
)
JAL_BHT(
    // System signals
    .clk(clk),
    .rst(rst),
    .stall(stall_pipeline),

    // from Program_Counter
    .pc_IF(pc),

    // from Decode_Execute_Pipeline
    .is_uncond_branch(is_jal2exe),
    .pc_EXE(dec_pc2exe),

    // from Execute
    .branch_target_addr(exe_branch_target_addr),

    // to Program_Counter
    .uncond_branch_hit(uncond_branch_hit_IF),
    .uncond_branch_target_addr(uncond_branch_target_addr)
);

// =============================================================================
regfile Register_File(
    // System signals
    .clk(clk),
    .rst(rst),

    // from Decode
    .rs1_addr(dec_rs1_addr2regfile),
    .rs2_addr(dec_rs2_addr2regfile),

    // from Memory_Writeback_Pipeline
    .regfile_we(rd_we2wb),
    .rd_addr(rd_addr2wb),
    .rd_data(rd_data2wb),

    // to Decode_Execute_Pipeline
    .rs1_data_o(rs1_data2dec),
    .rs2_data_o(rs2_data2dec)
);

// =============================================================================
program_counter Program_Counter(
    // System signals
    .clk(clk),
    .rst(rst),

    // Program counter address at reset
    .init_pc_addr(init_pc_addr),

    // Interrupt
    .irq_taken(irq_taken),
    .PC_handler(PC_handler),

    // that stall Program_Counter
    .stall(stall_pipeline || stall_from_hazard),

    // from Cond_Branch_Predictor
    .cond_branch_hit_IF(cond_branch_hit_IF),
    .cond_branch_result_IF(cond_branch_result_IF),
    .cond_branch_target_addr(cond_branch_target_addr),

    // from Uncond_Branch_BHT
    .uncond_branch_hit_IF(uncond_branch_hit_IF),
    .uncond_branch_target_addr(uncond_branch_target_addr),

    // System Jump operation
    .sys_jump(sys_jump),
    .sys_jump_csr_data(sys_jump_csr_data),

    // frome Decode_Execute_Pipeline
    .cond_branch_hit_EXE(cond_branch_hit_EXE),
    .cond_branch_result_EXE(cond_branch_result_EXE),
    .uncond_branch_hit_EXE(uncond_branch_hit_EXE),

    // from Execute
    .cond_branch_misprediction(cond_branch_misprediction),
    .branch_taken(exe_branch_taken),
    .branch_target_addr(exe_branch_target_addr),
    .branch_restore_addr(exe_pc2pc),

    // to Fetch stage, i-cache
    .pc_o(pc)
);

// =============================================================================
fetch Fetch(
    // System signals
    .clk(clk),
    .rst(rst),

    // that stall Fetch_Decode_Pipeline
    .stall(stall_pipeline || stall_from_hazard),

    // from Pipeline_Control
    .flush(flush2fet || irq_taken),

    // from Cond_Branch_Predictor
    .cond_branch_hit_IF(cond_branch_hit_IF),
    .cond_branch_result_IF(cond_branch_result_IF),

    // from Uncond_Branch_BHT
    .uncond_branch_hit_IF(uncond_branch_hit_IF),

    // from i-cache
    .instruction(instruction),

    // from Program_Counter
    .pc(pc),

    // to Decode
    .instruction_o(fet_instr2dec),

    // to Decode_Execute_Pipeline
    .cond_branch_hit_ID(cond_branch_hit_ID),
    .cond_branch_result_ID(cond_branch_result_ID),
    .uncond_branch_hit_ID(uncond_branch_hit_ID),
    .pc_o(fet_pc2dec),
    .instr_valid_o(fet_valid2dec)
);

// =============================================================================
decode Decode(
    //  Processor clokc and reset signals.
    .clk(clk),
    .rst(rst),
    
    // Processor pipeline stall signal.
    .stall(stall_pipeline),
    
    // Processor pipeline flush signal.
    .flush(flush2dec || irq_taken),

    // Signals from the Fetch Stage.
    .pc(fet_pc2dec),
    .instruction(fet_instr2dec),
    .instr_valid(fet_valid2dec),
    .cond_branch_hit_ID(cond_branch_hit_ID),
    .cond_branch_result_ID(cond_branch_result_ID),
    .uncond_branch_hit_ID(uncond_branch_hit_ID),

    // Instruction operands from the Register File. To be forwarded.
    .rs1_data(rs1_data2dec),
    .rs2_data(rs2_data2dec),

    // Operand register IDs to the Register File and the Pipeline Controller
    .rs1_addr2regfile_o(dec_rs1_addr2regfile),
    .rs2_addr2regfile_o(dec_rs2_addr2regfile),

    // System Jump operation
    .sys_jump_o(sys_jump),
    .sys_jump_csr_addr_o(sys_jump_csr_addr),

    // illegal instruction
    .illegal_instr_o(dec_illegal_instr),

    ////////////////// FROM Decode_Execute /////////////////////////

    // to Execute
    .pc_o(dec_pc2exe),
    .imm_o(dec_imm2exe),
    .inputA_sel_o(dec_inA_sel2exe),
    .inputB_sel_o(dec_inB_sel2exe),
    .operation_sel_o(dec_operation_sel2exe),
    .alu_muldiv_sel_o(alu_muldiv_sel2exe),
    .shift_sel_o(shift_sel2exe),
    .cond_branch_hit_EXE(cond_branch_hit_EXE),
    .cond_branch_result_EXE(cond_branch_result_EXE),
    .is_jalr_o(is_jalr2exe),

    // to Execute, Cond_Branch_Predictor
    .is_branch_o(is_branch2exe),

    // to Execute, Pipeline_Control, Uncond_Branch_BHT
    .is_jal_o(is_jal2exe),

    // to CSR
    .is_csr_instr_o(is_csr_instr2csr),
    .csr_addr_o(dec_csr_addr2csr),
    .csr_imm_o(dec_csr_imm2csr),
    .instr_valid_o(dec_instr_valid2csr),

    // to Execute_Memory_Pipeline
    .regfile_we_o(dec_regfile_we2exe),
    .regfile_input_sel_o(dec_regfile_sel2exe),
    .mem_we_o(dec_we2exe),
    .mem_re_o(dec_re2exe),
    .mem_input_sel_o(dec_input_sel2exe),
    .mem_load_ext_sel_o(dec_load_ext_sel2exe),

    // to Pipeline_Control
    .uncond_branch_hit_EXE(uncond_branch_hit_EXE),

    // to Forwarding_Unit, Pipeline_Control and Execute_Memory_Pipeline
    .rd_addr_o(dec_rd_addr2exe),

    // to Forwarding_Unit
    .rs1_addr_o(dec_rs1_addr2fwd),
    .rs2_addr_o(dec_rs2_addr2fwd),
    .rs1_data_o(dec_rs1_data2fwd),
    .rs2_data_o(dec_rs2_data2fwd)
);

// =============================================================================
execute Execute(
    // System signals
    .clk(clk),
    .rst(rst),

    // From the Program Counter unit.
    .pc(dec_pc2exe),

    // Pipeline stall signal.
    .stall(stall_pipeline),

    // Signals from the Decode stage.
    .imm(dec_imm2exe),
    .inputA_sel(dec_inA_sel2exe),
    .inputB_sel(dec_inB_sel2exe),
    .operation_sel(dec_operation_sel2exe),
    .alu_muldiv_sel(alu_muldiv_sel2exe),
    .shift_sel(shift_sel2exe),
    .is_branch(is_branch2exe),
    .is_jal(is_jal2exe),
    .is_jalr(is_jalr2exe),
    .cond_branch_hit_EXE(cond_branch_hit_EXE),
    .cond_branch_result_EXE(cond_branch_result_EXE),

    .regfile_we(dec_regfile_we2exe),
    .regfile_input_sel(dec_regfile_sel2exe),
    .mem_we(dec_we2exe),
    .mem_re(dec_re2exe),
    .mem_input_sel(dec_input_sel2exe),
    .mem_load_ext_sel(dec_load_ext_sel2exe),
    .rd_addr(dec_rd_addr2exe),

    // Signal from the CSR.
    .csr_data(csr_data2exe),

    // Signals from the Forwarding Unit.
    .rs1_data(rs1_fwd),
    .rs2_data(rs2_fwd),

    // Signal to the Program Counter Unit.
    .pc_o(exe_pc2pc),

    // Signal to the Program Counter unit.
    .branch_target_addr_o(exe_branch_target_addr),

    // Singnals to the Pipeline Control and the Branch Prediction units.
    .branch_taken_o(exe_branch_taken),
    .cond_branch_misprediction_o(cond_branch_misprediction),

    // Pipeline stall signal generator, activated when executing
    //    multicycle mul, div and rem instructions.
    .stall_from_exe_o(stall_from_exe),

    // Signals to D-Cache.
    .mem_we_o(exe_mem_we),
    .mem_re_o(exe_mem_re),

    // Signals to Memory Alignment unit.
    .rs2_data_o(exe_rs2_data2mem),
    .mem_addr_o(exe_mem_addr2mem),
    .mem_input_sel_o(exe_mem_input_sel2mem),

    // Signals to the Memory Writeback and the Forwarding Units.
    .regfile_we_o(exe_regfile_we2mem_wb),
    .regfile_input_sel_o(exe_regfile_input_sel2mem_wb),
    .rd_addr_o(exe_rd_addr2mem_wb),
    .p_data_o(exe_p_data),

    // Signals to Memory Writeback.
    .mem_load_ext_sel_o(exe_mem_load_ext_sel2mem_wb)
);

// =============================================================================
memory_access Memory_Access(
    // from Execute_Memory_Pipeline
    .unaligned_data(exe_rs2_data2mem),          // store value
    .mem_addr_alignment(exe_mem_addr2mem[1: 0]),
    .mem_input_sel(exe_mem_input_sel2mem),

    // to d-cache
    .data_o(data_o),                        // data_write
    .byte_write_sel(byte_write_sel),

    // Exception signal
    .memory_alignment_exception(memory_alignment_exception)
);

// =============================================================================
writeback Writeback(
    // System signals
    .clk(clk),
    .rst(rst),
    
    // that stall Memory_Writeback_Pipeline
    .stall(stall_pipeline),
    
    // from Execute_Memory_Pipeline
    .regfile_we(exe_regfile_we2mem_wb),
    .rd_addr(exe_rd_addr2mem_wb),
    .regfile_input_sel(exe_regfile_input_sel2mem_wb),
    .mem_load_ext_sel(exe_mem_load_ext_sel2mem_wb),
    .mem_addr_alignment(exe_mem_addr2mem[1: 0]),
    .p_data(exe_p_data),
    
    // from d-cache
    .mem_data(data_read),
    
    // to RegisterFile, Forwarding_Unit
    .rd_we_o(rd_we2wb),
    .rd_addr_o(rd_addr2wb),
    .rd_data_o(rd_data2wb)
);

// =============================================================================
csr_file #( .HART_ID(HART_ID) )
CSR(
    // System signals
    .clk(clk),
    .rst(rst),

    // Use for minstret
    //.stall(stall_pipeline),
    //.instr_valid(dec_instr_valid2csr),

    // from Decode_Execute_Pipeline
    .is_csr_instr(is_csr_instr2csr),
    .csr_addr(dec_csr_addr2csr),
    .csr_op(dec_operation_sel2exe),
    .csr_imm(dec_csr_imm2csr),

    // from Forwarding_Unit
    .rs1_data(rs1_fwd),

    // to Execute_Memory_Pipeline
    .csr_data_o(csr_data2exe),

    // System Jump operation
    .sys_jump(sys_jump),
    .sys_jump_csr_addr(sys_jump_csr_addr),
    .sys_jump_pc(dec_pc2exe),
    .sys_jump_csr_data(sys_jump_csr_data),

    // Interrupt
    .ext_irq(ext_irq),
    .tmr_irq(tmr_irq),
    .sft_irq(sft_irq),
    .irq_taken(irq_taken),
    .PC_handler(PC_handler),
    .nxt_unexec_PC(fet_pc2dec)
);

endmodule // core_top
