`timescale 1ns / 1ps
// =============================================================================
//  Program : execute.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Execution Unit of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Nov/29/2019, by Chun-Jen Tsai:
//    Merges the pipeline register module 'execute_memory' into the 'execute'
//    module.
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

module execute #( parameter XLEN = 32 )
(
    //  Processor clock and reset signals.
    input                   clk_i,
    input                   rst_i,

    // Pipeline stall signal.
    input                   stall_i,

    // Pipeline flush signal.
    input                   flush_i,

    // From Decode.
    input  [XLEN-1 : 0]     imm_i,
    input  [ 1 : 0]         inputA_sel_i,
    input  [ 1 : 0]         inputB_sel_i,
    input  [ 2 : 0]         operation_sel_i,
    input                   alu_muldiv_sel_i,
    input                   shift_sel_i,
    input                   is_branch_i,
    input                   is_jal_i,
    input                   is_jalr_i,
    input                   branch_hit_i,
    input                   branch_decision_i,

    input                   regfile_we_i,
    input  [ 2 : 0]         regfile_input_sel_i,
    input                   we_i,
    input                   re_i,
    input  [ 1 : 0]         dsize_sel_i,
    input                   signex_sel_i,
    input  [ 4 : 0]         rd_addr_i,
    input                   is_fencei_i,
    input                   is_amo_i,
    input  [4 : 0]          amo_type_i,

    // From CSR.
    input  [ 4 : 0]         csr_imm_i,
    input                   csr_we_i,
    input  [11 : 0]         csr_we_addr_i,

    // From the Forwarding Unit.
    input  [XLEN-1 : 0]     rs1_data_i,
    input  [XLEN-1 : 0]     rs2_data_i,
    input  [XLEN-1 : 0]     csr_data_i,

    // To the Program Counter Unit.
    output [XLEN-1 : 0]     branch_restore_pc_o,    // to PC only
    output [XLEN-1 : 0]     branch_target_addr_o,   // to PC and BPU

    // To the Pipeline Control and the Branch Prediction units.
    output                  is_branch_o,
    output                  branch_taken_o,
    output                  branch_misprediction_o,

    // Pipeline stall signal generator, activated when executing
    //    multicycle mul, div and rem instructions.
    output                  stall_from_exe_o,

    // Signals to D-memory.
    output reg              we_o,
    output reg              re_o,
    output reg              is_fencei_o,
    output reg              is_amo_o,
    output reg [ 4 : 0]     amo_type_o,

    // Signals to Memory Alignment unit.
    output reg [XLEN-1 : 0] rs2_data_o,
    output reg [XLEN-1 : 0] addr_o,
    output reg [ 1 : 0]     dsize_sel_o,
    
    // Signals to Memory Writeback Pipeline.
    output reg [ 2 : 0]     regfile_input_sel_o,
    output reg              regfile_we_o,
    output reg [ 4 : 0]     rd_addr_o,
    output reg [XLEN-1 : 0] p_data_o,
    output reg              csr_we_o,
    output reg [11 : 0]     csr_we_addr_o,
    output reg [XLEN-1 : 0] csr_we_data_o,

    // to Memory_Write_Back_Pipeline
    output reg              signex_sel_o,

    // PC of the current instruction.
    input  [XLEN-1 : 0]     pc_i,
    output reg [XLEN-1 : 0] pc_o,

    // System Jump operation
    input                   sys_jump_i,
    input  [ 1 : 0]         sys_jump_csr_addr_i,
    output reg              sys_jump_o,
    output reg [ 1 : 0]     sys_jump_csr_addr_o,

    // Has instruction fetch being successiful?
    input                   fetch_valid_i,
    output reg              fetch_valid_o,

    // Exception info passed from Decode to Memory.
    input                   xcpt_valid_i,
    input  [ 3 : 0]         xcpt_cause_i,
    input  [XLEN-1 : 0]     xcpt_tval_i,
    output reg              xcpt_valid_o,
    output reg [ 3 : 0]     xcpt_cause_o,
    output reg [XLEN-1 : 0] xcpt_tval_o
);

reg  [XLEN-1 : 0] inputA, inputB;
wire [XLEN-1 : 0] alu_result;
wire [XLEN-1 : 0] muldiv_result;
wire              compare_result, stall_from_muldiv, muldiv_ready;

wire [XLEN-1 : 0] result;
wire [XLEN-1 : 0] mem_addr;

always @(*)
begin
    case (inputA_sel_i)
        3'd0: inputA = 0;
        3'd1: inputA = pc_i;
        3'd2: inputA = rs1_data_i;
        default: inputA = 0;
    endcase
end

always @(*)
begin
    case (inputB_sel_i)
        3'd0: inputB = imm_i;
        3'd1: inputB = rs2_data_i;
        3'd2: inputB = ~rs2_data_i + 1'b1;
        default: inputB = 0;
    endcase
end

// branch target address generate by alu adder
wire [2: 0] alu_operation = (is_branch_i | is_jal_i | is_jalr_i)? 3'b000 : operation_sel_i;
wire [2: 0] muldiv_operation = operation_sel_i;
wire muldiv_req = alu_muldiv_sel_i & !muldiv_ready;
wire [2: 0] branch_operation = operation_sel_i;

// ===============================================================================
//  ALU Regular operation
//
alu ALU(
    .a_i(inputA),
    .b_i(inputB),
    .operation_sel_i(alu_operation),
    .shift_sel_i(shift_sel_i),
    .alu_result_o(alu_result)
);

// ===============================================================================
//   MulDiv
//
muldiv MulDiv(
    .clk_i(clk_i),
    .rst_i(rst_i),
    .stall_i(stall_i),
    .a_i(inputA),
    .b_i(inputB),
    .req_i(muldiv_req),
    .operation_sel_i(muldiv_operation),
    .muldiv_result_o(muldiv_result),
    .ready_o(muldiv_ready)
);

// ==============================================================================
//  BCU
//
bcu BCU(
    .a_i(rs1_data_i),
    .b_i(rs2_data_i),
    .operation_sel_i(branch_operation),
    .compare_result_o(compare_result)
);

// ===============================================================================
//  AGU & Output signals
//
assign mem_addr = rs1_data_i + imm_i;     // The target addr of memory load/store
assign branch_target_addr_o = alu_result; // The target addr of BRANCH, JAL, JALR
assign branch_restore_pc_o = pc_i + 'd4;  // The next PC of instruction, and the
                                          // restore PC if mispredicted branch taken.

assign is_branch_o = is_branch_i | is_jal_i;
assign branch_taken_o = (is_branch_i & compare_result) | is_jal_i | is_jalr_i;
assign branch_misprediction_o = branch_hit_i & (branch_decision_i ^ branch_taken_o);

assign result = alu_muldiv_sel_i ? muldiv_result : alu_result;
assign stall_from_exe_o = alu_muldiv_sel_i & !muldiv_ready;

// ===============================================================================
//  CSR
//
wire [XLEN-1 : 0] csr_inputA = csr_data_i;
wire [XLEN-1 : 0] csr_inputB = operation_sel_i[2] ? {27'b0, csr_imm_i} : rs1_data_i;
reg  [XLEN-1 : 0] csr_update_data;

always @(*)
begin
    case (operation_sel_i[1: 0])
        `CSR_RW:
            csr_update_data = csr_inputB;
        `CSR_RS:
            csr_update_data = csr_inputA | csr_inputB;
        `CSR_RC:
            csr_update_data = csr_inputA & ~csr_inputB;
        default:
            csr_update_data = csr_inputA;
    endcase
end

// ===============================================================================
//  Pipeline register operations for the Execute stage.

always @(posedge clk_i)
begin
    if (rst_i || (flush_i && !stall_i)) // stall has higher priority than flush.
    begin
        we_o <= 0;
        re_o <= 0;
        rs2_data_o <= 0;
        addr_o <= 0;
        dsize_sel_o <= 0;
        signex_sel_o <= 0;
        regfile_input_sel_o <= 0;
        regfile_we_o <= 0;
        rd_addr_o <= 0;
        is_fencei_o <= 0;
        is_amo_o <= 0;
        amo_type_o <= 0;

        sys_jump_o <= 0;
        sys_jump_csr_addr_o <= 0;
        xcpt_valid_o <= 0;
        xcpt_cause_o <= 0;
        xcpt_tval_o <= 0;
        pc_o <= 0;
        fetch_valid_o <= 0;
        csr_we_o <= 0;
        csr_we_addr_o <= 0;
        csr_we_data_o <= 0;
    end
    else if (stall_i || stall_from_exe_o)
    begin
        we_o <= we_o;
        re_o <= re_o;
        rs2_data_o <= rs2_data_o;
        addr_o <= addr_o;
        dsize_sel_o <= dsize_sel_o;
        signex_sel_o <= signex_sel_o;
        regfile_input_sel_o <= regfile_input_sel_o;
        regfile_we_o <= regfile_we_o;
        rd_addr_o <= rd_addr_o;
        is_fencei_o <= is_fencei_o;
        is_amo_o <= is_amo_o;
        amo_type_o <= amo_type_o;

        sys_jump_o <= sys_jump_o;
        sys_jump_csr_addr_o <= sys_jump_csr_addr_o;
        xcpt_valid_o <= xcpt_valid_o;
        xcpt_cause_o <= xcpt_cause_o;
        xcpt_tval_o <= xcpt_tval_o;
        pc_o <= pc_o;
        fetch_valid_o <= fetch_valid_o;
        csr_we_o <= csr_we_o;
        csr_we_addr_o <= csr_we_addr_o;
        csr_we_data_o <= csr_we_data_o;
    end
    else
    begin
        we_o <= we_i ;
        re_o <= re_i;
        rs2_data_o <= rs2_data_i;
        addr_o  <= mem_addr;
        dsize_sel_o <= dsize_sel_i;
        signex_sel_o <= signex_sel_i;
        regfile_input_sel_o <= regfile_input_sel_i;
        regfile_we_o <= regfile_we_i;
        rd_addr_o <= rd_addr_i;
        is_fencei_o <= is_fencei_i;
        is_amo_o <= is_amo_i;
        amo_type_o <= amo_type_i;

        sys_jump_o <= sys_jump_i;
        sys_jump_csr_addr_o <= sys_jump_csr_addr_i;
        xcpt_valid_o <= xcpt_valid_i;
        xcpt_cause_o <= xcpt_cause_i;
        xcpt_tval_o <= xcpt_tval_i;
        pc_o <= pc_i;
        fetch_valid_o <= fetch_valid_i;
        csr_we_o <= csr_we_i;
        csr_we_addr_o <= csr_we_addr_i;
        csr_we_data_o <= csr_update_data;
    end
end

always @(posedge clk_i)
begin
    if (rst_i || (flush_i && !stall_i)) // stall has higher priority than flush.
    begin
        p_data_o <= 0;  // data from processor
    end
    else if (stall_i || stall_from_exe_o)
    begin
        p_data_o <= p_data_o;
    end
    else
    begin
        case (regfile_input_sel_i)
            3'b011: p_data_o <= branch_restore_pc_o;
            3'b100: p_data_o <= result;
            3'b101: p_data_o <= csr_data_i;
            default: p_data_o <= 0;
        endcase
    end
end

endmodule
