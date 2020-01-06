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

module execute #(DATA_WIDTH = 32)
(
    // System Signals
    input                         clk,
    input                         rst,

    // Signal from the Program_Counter Unit.
    input  [DATA_WIDTH-1 : 0]     pc,

    // Pipeline stall signal.
    input                         stall,

    // Signals from the Decode stage.
    input  [DATA_WIDTH-1 : 0]     imm,
    input  [ 1: 0]                inputA_sel,
    input  [ 1: 0]                inputB_sel,
    input  [ 2: 0]                operation_sel,
    input                         alu_muldiv_sel,
    input                         shift_sel,
    input                         is_branch,
    input                         is_jal,
    input                         is_jalr,
    input                         cond_branch_hit_EXE,
    input                         cond_branch_result_EXE,

    input                         regfile_we,
    input  [2: 0]                 regfile_input_sel,
    input                         mem_we,
    input                         mem_re,
    input  [1: 0]                 mem_input_sel,
    input                         mem_load_ext_sel,
    input  [4: 0]                 rd_addr,

    // Signal from the CSR.
    input  [DATA_WIDTH-1 : 0]     csr_data,

    // Signals from the Forwarding Unit.
    input  [DATA_WIDTH-1 : 0]     rs1_data,
    input  [DATA_WIDTH-1 : 0]     rs2_data,

    // Signal to the Program Counter Unit.
    output [DATA_WIDTH-1 : 0]     pc_o,

    // Signal to the Program Counter unit.
    output [DATA_WIDTH-1 : 0]     branch_target_addr_o,

    // Singnals to the Pipeline Control and the Branch Prediction units.
    output                        branch_taken_o,
    output                        cond_branch_misprediction_o,

    // Pipeline stall signal generator, activated when executing
    //    multicycle mul, div and rem instructions.
    output                        stall_from_exe_o,

    // Signals to D-Cache.
    output reg                    mem_we_o,
    output reg                    mem_re_o,

    // Signals to Memory Alignment unit.
    output reg [DATA_WIDTH-1 : 0] rs2_data_o,
    output reg [DATA_WIDTH-1 : 0] mem_addr_o,
    output reg [1: 0]             mem_input_sel_o,
    
    // Signals to Memory Writeback Pipeline.
    output reg [2: 0]             regfile_input_sel_o,
    output reg                    regfile_we_o,
    output reg [4: 0]             rd_addr_o,
    output reg [DATA_WIDTH-1 : 0] p_data_o,

    // to Memory_Write_Back_Pipeline
    output reg                    mem_load_ext_sel_o
);

reg  [DATA_WIDTH-1 : 0]           inputA, inputB;
wire [DATA_WIDTH-1 : 0]           alu_result, muldiv_result;
wire                              compare_result, stall_from_muldiv, muldiv_ready;

wire [DATA_WIDTH-1 : 0]           result;
wire [DATA_WIDTH-1 : 0]           mem_addr;

always @(*)
begin
    case (inputA_sel)
        3'd0: inputA = 0;
        3'd1: inputA = pc;
        3'd2: inputA = rs1_data;
        default: inputA = 0;
    endcase
end

always @(*)
begin
    case (inputB_sel)
        3'd0: inputB = imm;
        3'd1: inputB = rs2_data;
        3'd2: inputB = ~rs2_data + 1'b1;
        default: inputB = 0;
    endcase
end

wire [2: 0] alu_operation = (is_branch | is_jal | is_jalr) ? 3'b000 : operation_sel;    // branch target address generate by alu adder
wire [2: 0] muldiv_operation = operation_sel;
wire muldiv_req = alu_muldiv_sel & !muldiv_ready;
wire [2: 0] branch_operation = operation_sel;

// ===================================================================================
//  ALU Regular operation
//
alu ALU(
    .a(inputA),
    .b(inputB),
    .operation_sel(alu_operation),
    .shift_sel(shift_sel),
    .alu_result(alu_result)
);

// ===================================================================================
//   MulDiv
//
muldiv MulDiv(
    .clk(clk),
    .rst(rst),
    .a(inputA),
    .b(inputB),
    .req(muldiv_req),
    .operation_sel(muldiv_operation),
    .muldiv_result(muldiv_result),
    .ready(muldiv_ready)
);

// ===================================================================================
//  BCU
//
bcu BCU(
    .a(rs1_data),
    .b(rs2_data),
    .operation_sel(branch_operation),
    .compare_result(compare_result)
);

// ===================================================================================
//  AGU & Output signals
//
assign mem_addr = rs1_data + imm;        // The target address of memory load/store
assign branch_target_addr_o = alu_result;  // The target address of BRANCH, JAL, JALR instructions

assign pc_o = pc + 'd4;                  // The next PC of current instruction, and
                                         // the restore PC for mispredict branch taken

assign branch_taken_o = (is_branch & compare_result) | is_jal | is_jalr;
assign cond_branch_misprediction_o = cond_branch_hit_EXE & (cond_branch_result_EXE ^ branch_taken_o);

assign result = alu_muldiv_sel ? muldiv_result : alu_result;
assign stall_from_exe_o = alu_muldiv_sel & !muldiv_ready;

// ===================================================================================
//  Pipeline register operations for the Execute stage.

always @(posedge clk)
begin
    if (rst)
    begin
        mem_we_o <= 0;
        mem_re_o    <= 0;
        rs2_data_o  <= 0;
        mem_addr_o  <= 0;
        mem_input_sel_o <= 0;
        mem_load_ext_sel_o <= 0;
        regfile_input_sel_o <= 0;
        regfile_we_o    <= 0;
        rd_addr_o   <= 0;
    end
    else if (stall)
    begin
        mem_we_o <= mem_we_o ;
        mem_re_o    <= mem_re_o ;
        rs2_data_o  <= rs2_data_o   ;
        mem_addr_o  <= mem_addr_o   ;
        mem_input_sel_o <= mem_input_sel_o  ;
        mem_load_ext_sel_o <= mem_load_ext_sel_o    ;
        regfile_input_sel_o <= regfile_input_sel_o  ;
        regfile_we_o    <= regfile_we_o ;
        rd_addr_o   <= rd_addr_o    ;
    end
    else
    begin
        mem_we_o <= mem_we ;
        mem_re_o    <= mem_re   ;
        rs2_data_o  <= rs2_data ;
        mem_addr_o  <= mem_addr ;
        mem_input_sel_o <= mem_input_sel    ;
        mem_load_ext_sel_o <= mem_load_ext_sel  ;
        regfile_input_sel_o <= regfile_input_sel    ;
        regfile_we_o    <= regfile_we   ;
        rd_addr_o   <= rd_addr  ;
    end
end


always @(posedge clk)
begin
    if (rst)
    begin
        p_data_o <= 0;  // data from processor
    end
    else if (stall)
    begin
        p_data_o <= p_data_o;
    end
    else
    begin
        case (regfile_input_sel)
            3'b011: p_data_o <= pc_o;
            3'b100: p_data_o <= result;
            3'b101: p_data_o <= csr_data;
            default: p_data_o <= 0;
        endcase
    end
end

endmodule   // execute
