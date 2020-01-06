`timescale 1ns / 1ps
// =============================================================================
//  Program : decode.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Decoding Unit of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Nov/29/2019, by Chun-Jen Tsai:
//    Merges the pipeline register moduel 'decode_execute' into the 'decode'
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

module decode #(parameter DATA_WIDTH = 32)
(
    //  Processor clokc and reset signals.
    input                     clk,
    input                     rst,

    // Processor pipeline stall signal.
    input                     stall,

    // Processor pipeline flush signal.
    input                     flush,

    // Signals from the Fetch Stage.
    input [DATA_WIDTH-1 : 0]  pc,
    input [DATA_WIDTH-1 : 0]  instruction,
    input                     instr_valid,
    input                     cond_branch_hit_ID,
    input                     cond_branch_result_ID,
    input                     uncond_branch_hit_ID,

    // Instruction operands from the Register File. To be forwarded.
    input  [DATA_WIDTH-1 : 0] rs1_data,
    input  [DATA_WIDTH-1 : 0] rs2_data,

    // Operand register IDs to the Register File and the Pipeline Controller
    output [4: 0]             rs1_addr2regfile_o,
    output [4: 0]             rs2_addr2regfile_o,

    // System Jump operation
    output                    sys_jump_o,
    output [11: 0]            sys_jump_csr_addr_o,

    // illegal
    output                    illegal_instr_o,

    // to Execute
    output reg [DATA_WIDTH-1 : 0] pc_o,
    output reg [DATA_WIDTH-1 : 0] imm_o,
    output reg [1: 0]             inputA_sel_o,
    output reg [1: 0]             inputB_sel_o,
    output reg [2: 0]             operation_sel_o,
    output reg                    mem_load_ext_sel_o,
    output reg                    alu_muldiv_sel_o,
    output reg                    shift_sel_o,
    output reg                    is_branch_o,
    output reg                    is_jal_o,
    output reg                    is_jalr_o,
    output reg                    cond_branch_hit_EXE,
    output reg                    cond_branch_result_EXE,
    output reg                    uncond_branch_hit_EXE,

    // to CSR
    output reg                    is_csr_instr_o,
    output reg [11: 0]            csr_addr_o,
    output reg [4: 0]             csr_imm_o,
    output reg                    instr_valid_o,

    // to Execute_Memory_Pipeline
    output reg                    regfile_we_o,
    output reg [2: 0]             regfile_input_sel_o,
    output reg                    mem_we_o,
    output reg                    mem_re_o,
    output reg [1: 0]             mem_input_sel_o,

    // to Forwarding_Unit, Hazard_Detection_Unit, and Execute_Memory_Pipeline
    output reg [4: 0]             rd_addr_o,

    // to Forwarding_Unit
    output reg [4: 0]             rs1_addr_o,
    output reg [4: 0]             rs2_addr_o,
    output reg [DATA_WIDTH-1 : 0] rs1_data_o,
    output reg [DATA_WIDTH-1 : 0] rs2_data_o
);

// Interal signals of the Decode Stage.
wire [DATA_WIDTH-1 : 0] imm;
wire [4: 0]             rd_addr;
wire                    mem_we;
wire                    mem_re;
wire                    regfile_we;
reg  [1: 0]             inputA_sel;
reg  [1: 0]             inputB_sel;
reg  [2: 0]             regfile_input_sel;
wire [2: 0]             operation_sel;
wire [1: 0]             mem_input_sel;
wire                    mem_load_ext_sel; // for lb, lbu, lh and lhu.
wire                    alu_muldiv_sel;   // for rv32m operation.
wire                    shift_sel;        // for shift right operation.
wire                    is_branch;
wire                    is_jal;
wire                    is_jalr;
wire                    is_csr_instr;
wire [11: 0]            csr_addr;
wire [4: 0]             csr_imm;

/* *******************************************************************************
 * Info Signals Description                                                      *
 * ----------------------------------------------------------------------------- *
 *      There are 2 inputs for the exe:                                          *
 *          # inputA has 4 possible sources, determined by inputA_sel:           *
 *              (0) 0 (LUI)                                                      *
 *              (1) pc (AUIPC, JAL, BRANCH)                                      *
 *              (2) rs1                                                          *
 *          # inputB has 3 possible sources, determined by inputB_sel:           *
 *              (0) imm                                                          *
 *              (1) rs2                                                          *
 *              (2) -rs2 (SUB)                                                   *
 * ----------------------------------------------------------------------------- *
 *      There are 6 possible input sources to the register file, determined by   *
 *      regfile_input_sel:                                                       *
 *              (0) one byte from data memory                                    *
 *              (1) half of word from data memory                                *
 *              (2) word from data memory                                        *
 *              (3) pc + 4 (pc of next instruction)                              *
 *              (4) execute result                                               *
 *              (5) csr value                                                    *
 * ----------------------------------------------------------------------------- *
 *      Usage of operation_sel are listed below:                                 *
 *          # Conditional branch                                                 *
 *              (0) 3'b000 : equal                                               *
 *              (1) 3'b001 : not equal                                           *
 *              (2) 3'b100 : less than                                           *
 *              (3) 3'b101 : greater than or equal to                            *
 *              (4) 3'b110 : less than unsigned                                  *
 *              (5) 3'b111 : greater than or equal to                            *
 *          # RVI, alu_muldiv_sel = 0                                            *
 *              (0) 3'b000 : add (add/sub)                                       *
 *              (1) 3'b001 : sll (shift left logic)                              *
 *              (2) 3'b010 : slt (set less than)                                 *
 *              (3) 3'b011 : sltu (set less than unsigned)                       *
 *              (4) 3'b100 : xor                                                 *
 *              (5) 3'b101 : sr (shift right logic/arithmetic)                   *
 *              (6) 3'b110 : or                                                  *
 *              (7) 3'b111 : and                                                 *
 *          # RVM, alu_muldiv_sel = 1                                            *
 *              (0) 3'b000 : mul                                                 *
 *              (1) 3'b001 : mulh                                                *
 *              (2) 3'b010 : mulhsu                                              *
 *              (3) 3'b011 : mulhu                                               *
 *              (4) 3'b100 : div                                                 *
 *              (5) 3'b101 : divu                                                *
 *              (6) 3'b110 : rem                                                 *
 *              (7) 3'b111 : remu                                                *
 *          # RVI, CSR instructions  (csr_op)                                    *
 *              (0) 3'b001 : csrrw                                               *
 *              (1) 3'b010 : csrrs                                               *
 *              (2) 3'b011 : csrrc                                               *
 *              (3) 3'b101 : csrrwi                                              *
 *              (4) 3'b110 : csrrsi                                              *
 *              (5) 3'b111 : csrrci                                              *
 * ----------------------------------------------------------------------------- *
 *      Bytes of load data or store data, determined by mem_input_sel            *
 *              (0) 2'b00 : byte                                                 *
 *              (1) 2'b01 : half word                                            *
 *              (2) 2'b10 : word                                                 *
 * *******************************************************************************/

wire [DATA_WIDTH-1 : 0] rv32_instr = instruction;
wire [ 6 : 0]           opcode = rv32_instr[6: 0];
wire [ 4 : 0]           rv32_shamt = rv32_instr[24: 20];
wire [ 2 : 0]           rv32_funct3 = rv32_instr[14: 12];
wire [ 6 : 0]           rv32_funct7 = rv32_instr[DATA_WIDTH-1 : 25];

wire [DATA_WIDTH-1 : 0] immI, immS, immB, immU, immJ;
assign immI = { {21{rv32_instr[31]}}, rv32_instr[30: 25],
                 rv32_instr[24: 21], rv32_instr[20] };
assign immS = { {21{rv32_instr[31]}}, rv32_instr[30: 25], rv32_instr[11: 7] };
assign immB = { {20{rv32_instr[31]}}, rv32_instr[7],
                 rv32_instr[30: 25], rv32_instr[11: 8], 1'b0 };
assign immU = { rv32_instr[31: 12], 12'b0 };
assign immJ = { {12{rv32_instr[31]}}, rv32_instr[19: 12],
                rv32_instr[20], rv32_instr[30: 25], rv32_instr[24: 21], 1'b0 };

// ================================================================================
//  We generate the signals and reused them as much as possible to save gate counts
//
// wire opcode_1_0_00 = (opcode[1:0] == 2'b00);  // rvc
// wire opcode_1_0_01 = (opcode[1:0] == 2'b01);  // rvc
// wire opcode_1_0_10 = (opcode[1:0] == 2'b10);  // rvc
// wire opcode_1_0_11 = (opcode[1: 0] == 2'b11); // rv32

wire opcode_4_2_000 = (opcode[4: 2] == 3'b000);
wire opcode_4_2_001 = (opcode[4: 2] == 3'b001);
wire opcode_4_2_010 = (opcode[4: 2] == 3'b010);
wire opcode_4_2_011 = (opcode[4: 2] == 3'b011);
wire opcode_4_2_100 = (opcode[4: 2] == 3'b100);
wire opcode_4_2_101 = (opcode[4: 2] == 3'b101);
wire opcode_4_2_110 = (opcode[4: 2] == 3'b110);
wire opcode_4_2_111 = (opcode[4: 2] == 3'b111);

wire opcode_6_5_00 = (opcode[6: 5] == 2'b00);
wire opcode_6_5_01 = (opcode[6: 5] == 2'b01);
wire opcode_6_5_10 = (opcode[6: 5] == 2'b10);
wire opcode_6_5_11 = (opcode[6: 5] == 2'b11);

wire rv32_funct3_000 = (rv32_funct3 == 3'b000);
wire rv32_funct3_001 = (rv32_funct3 == 3'b001);
wire rv32_funct3_010 = (rv32_funct3 == 3'b010);
wire rv32_funct3_011 = (rv32_funct3 == 3'b011);
wire rv32_funct3_100 = (rv32_funct3 == 3'b100);
wire rv32_funct3_101 = (rv32_funct3 == 3'b101);
wire rv32_funct3_110 = (rv32_funct3 == 3'b110);
wire rv32_funct3_111 = (rv32_funct3 == 3'b111);

wire rv32_funct7_0000000 = (rv32_funct7 == 7'b0000000);
wire rv32_funct7_0100000 = (rv32_funct7 == 7'b0100000);
wire rv32_funct7_0000001 = (rv32_funct7 == 7'b0000001);
wire rv32_funct7_0000101 = (rv32_funct7 == 7'b0000101);
wire rv32_funct7_0001001 = (rv32_funct7 == 7'b0001001);
wire rv32_funct7_0001101 = (rv32_funct7 == 7'b0001101);
wire rv32_funct7_0010101 = (rv32_funct7 == 7'b0010101);
wire rv32_funct7_0100001 = (rv32_funct7 == 7'b0100001);
wire rv32_funct7_0010001 = (rv32_funct7 == 7'b0010001);
wire rv32_funct7_0101101 = (rv32_funct7 == 7'b0101101);
wire rv32_funct7_1111111 = (rv32_funct7 == 7'b1111111);
wire rv32_funct7_0000100 = (rv32_funct7 == 7'b0000100);
wire rv32_funct7_0001000 = (rv32_funct7 == 7'b0001000);
wire rv32_funct7_0001100 = (rv32_funct7 == 7'b0001100);
wire rv32_funct7_0101100 = (rv32_funct7 == 7'b0101100);
wire rv32_funct7_0010000 = (rv32_funct7 == 7'b0010000);
wire rv32_funct7_0010100 = (rv32_funct7 == 7'b0010100);
wire rv32_funct7_1100000 = (rv32_funct7 == 7'b1100000);
wire rv32_funct7_1110000 = (rv32_funct7 == 7'b1110000);
wire rv32_funct7_1010000 = (rv32_funct7 == 7'b1010000);
wire rv32_funct7_1101000 = (rv32_funct7 == 7'b1101000);
wire rv32_funct7_1111000 = (rv32_funct7 == 7'b1111000);
wire rv32_funct7_1010001 = (rv32_funct7 == 7'b1010001);
wire rv32_funct7_1110001 = (rv32_funct7 == 7'b1110001);
wire rv32_funct7_1100001 = (rv32_funct7 == 7'b1100001);
wire rv32_funct7_1101001 = (rv32_funct7 == 7'b1101001);

// ================================================================================
//  RV32I Opcode Classification
//
wire rv32_op = opcode_6_5_01 & opcode_4_2_100;      // OP opcode
wire rv32_op_imm = opcode_6_5_00 & opcode_4_2_100;  // OP-IMM opcode
wire rv32_jal = opcode_6_5_11 & opcode_4_2_011;     // JAL opcode
wire rv32_jalr = opcode_6_5_11 & opcode_4_2_001;    // JARL opcode
wire rv32_load = opcode_6_5_00 & opcode_4_2_000;    // LOAD opcode
wire rv32_store = opcode_6_5_01 & opcode_4_2_000;   // STORE opcode
wire rv32_branch = opcode_6_5_11 & opcode_4_2_000;  // BRANCH opcode
wire rv32_lui = opcode_6_5_01 & opcode_4_2_101;     // LUI opcode
wire rv32_auipc = opcode_6_5_00 & opcode_4_2_101;   // AUIPC opcode
wire rv32_miscmem = opcode_6_5_00 & opcode_4_2_011; // MISC-MEM opcode
wire rv32_system = opcode_6_5_11 & opcode_4_2_100;  // SYSTEM opcode
wire rv32_amo = opcode_6_5_01 & opcode_4_2_011;     // AMO opcode

wire rv32m = rv32_op & rv32_funct7_0000001;  // Mul, Div and Rem instructions

wire rv32_imm_seli = rv32_op_imm | rv32_jalr | rv32_load;
wire rv32_imm_sels = rv32_store;
wire rv32_imm_selb = rv32_branch;
wire rv32_imm_selu = rv32_lui | rv32_auipc;
wire rv32_imm_selj = rv32_jal;

wire rv32_sub = rv32_op & rv32_funct3_000 & rv32_funct7_0100000;

// ================================================================================
//  Conditional Branch Instructions
//
wire rv32_beq = rv32_branch & rv32_funct3_000;
wire rv32_bne = rv32_branch & rv32_funct3_001;
wire rv32_blt = rv32_branch & rv32_funct3_100;
wire rv32_bgt = rv32_branch & rv32_funct3_101;
wire rv32_bltu = rv32_branch & rv32_funct3_110;
wire rv32_bgtu = rv32_branch & rv32_funct3_111;

// ================================================================================
//  MISC-MEM
wire rv32_fence = rv32_miscmem & rv32_funct3_000;
wire rv32_fence_i = rv32_miscmem & rv32_funct3_001;

// ================================================================================
//  System Instructions
//
wire rv32_csrrw = rv32_system & rv32_funct3_001;
wire rv32_csrrs = rv32_system & rv32_funct3_010;
wire rv32_csrrc = rv32_system & rv32_funct3_011;
wire rv32_csrrwi = rv32_system & rv32_funct3_101;
wire rv32_csrrsi = rv32_system & rv32_funct3_110;
wire rv32_csrrci = rv32_system & rv32_funct3_111;
wire rv32_csr = rv32_system & (~rv32_funct3_000);

wire rv32_sys_op = rv32_system & rv32_funct3_000;
wire rv32_ecall = rv32_sys_op & (rv32_instr[31: 20] == 12'b0000_0000_0000);
wire rv32_ebreak = rv32_sys_op & (rv32_instr[31: 20] == 12'b0000_0000_0001);
wire rv32_mret = rv32_sys_op & (rv32_instr[31: 20] == 12'b0011_0000_0010);

// ================================================================================
// Load/Store Instructions
//
wire rv32_lb = rv32_load & rv32_funct3_000;
wire rv32_lh = rv32_load & rv32_funct3_001;
wire rv32_lw = rv32_load & rv32_funct3_010;
wire rv32_lbu = rv32_load & rv32_funct3_100;
wire rv32_lhu = rv32_load & rv32_funct3_101;

wire rv32_sb = rv32_store & rv32_funct3_000;
wire rv32_sh = rv32_store & rv32_funct3_001;
wire rv32_sw = rv32_store & rv32_funct3_010;

// ================================================================================
//  Output Signals
//
assign imm =
       ({32{rv32_imm_seli}} & immI)
       | ({32{rv32_imm_sels}} & immS)
       | ({32{rv32_imm_selb}} & immB)
       | ({32{rv32_imm_selu}} & immU)
       | ({32{rv32_imm_selj}} & immJ)
       ;

// All the RV32IMA need rd except the
//   # BRANCH, STORE,
//   # FENCE, FENCE.I
//   # ECALL, EBREAK
assign regfile_we = rv32_lui | rv32_auipc | rv32_load | rv32_op_imm |
                    rv32_op | rv32_csr | rv32_amo | rv32_jal | rv32_jalr;

assign mem_re = rv32_load | rv32_amo; // AMO instr. also need to load d-cache data
assign mem_we = rv32_store;

assign is_jal = rv32_jal;
assign is_jalr = rv32_jalr;
assign is_branch = rv32_branch;

assign rd_addr = rv32_instr[11: 7];
assign rs1_addr2regfile_o = rv32_instr[19: 15];
assign rs2_addr2regfile_o = rv32_instr[24: 20];

assign mem_input_sel = rv32_funct3[1: 0];         // {00: b}, {01: h}, {10: w}
assign mem_load_ext_sel = rv32_funct3[2];         // {0: signed extension},
                                                  //     {1: unsigned extension}
assign alu_muldiv_sel = rv32m;                    // {0: rv32i op}, {1: rv32m op}
assign operation_sel = (rv32_lui | rv32_auipc) ?  // LUI and AUIPC use alu
       3'b000 : rv32_funct3;                      //      adder result
assign shift_sel = rv32_funct7_0100000;           // {0: logic}, {1: arithmetic}

assign is_csr_instr = rv32_csr;
assign csr_addr = rv32_instr[31: 20];
assign csr_imm = rv32_instr[19: 15];

always @(*)
begin
    if (rv32_auipc | rv32_jal | rv32_branch)
        inputA_sel = 1; // pc
    else if (rv32_lui | rv32_store)
        inputA_sel = 0; // 0
    else
        inputA_sel = 2; // rs1
end

always @(*)
begin
    if (rv32_sub)
        inputB_sel = 2; // -rs2
    else if (rv32_store | rv32_op | rv32_amo)
        inputB_sel = 1; // rs2
    else
        inputB_sel = 0; // immediate
end

always @(*)
begin
    if (rv32_lb | rv32_lbu)
        regfile_input_sel = 0; // load byte
    else if (rv32_lh | rv32_lhu)
        regfile_input_sel = 1; // load half word
    else if (rv32_lw)
        regfile_input_sel = 2; // load word
    else if (is_jal | is_jalr)
        regfile_input_sel = 3; // pc+4
    else if (rv32_csr)
        regfile_input_sel = 5; // csr
    else
        regfile_input_sel = 4; // execute result
end


assign sys_jump_o = rv32_mret | rv32_ecall; // the instructions that change the pc
assign sys_jump_csr_addr_o = ( {12{rv32_mret}} & 12'h341)
                         | ( {12{rv32_ecall}} & 12'h305 );

assign illegal_instr_o =     // the instructions that are not supported currently
       rv32_fence
       | rv32_fence_i
       | rv32_ebreak;


//////////////////////////////////////////////////////////////////
//  Output to other stages
//////////////////////////////////////////////////////////////////
always @(posedge clk)
begin
    if (rst)
    begin
        pc_o <= 0;
        rs1_data_o <= 0;
        rs2_data_o <= 0;
        imm_o   <= 0;
        inputA_sel_o    <= 2;
        inputB_sel_o    <= 0;
        operation_sel_o <= 0;
        mem_load_ext_sel_o  <= 0;
        mem_input_sel_o <= 0;
        alu_muldiv_sel_o    <= 0;
        shift_sel_o  <= 0;
        is_branch_o <= 0;
        is_jal_o    <= 0;
        is_jalr_o   <= 0;
        regfile_we_o    <= 1;
        regfile_input_sel_o <= 4;
        mem_we_o    <= 0;
        mem_re_o    <= 0;
        mem_input_sel_o <= 0;
        rd_addr_o   <= 0;
        rs1_addr_o  <= 0;
        rs2_addr_o  <= 0;
        is_csr_instr_o  <= 0;
        csr_addr_o  <= 0;
        csr_imm_o   <= 0;
        instr_valid_o   <= 0;
        cond_branch_hit_EXE <= 0;
        cond_branch_result_EXE <= 0;
        uncond_branch_hit_EXE <= 0;
    end
    else if (stall)
    begin
        pc_o <= pc_o ;
        rs1_data_o <= rs1_data_o ;
        rs2_data_o <= rs2_data_o ;
        imm_o   <= imm_o    ;
        inputA_sel_o    <= inputA_sel_o ;
        inputB_sel_o    <= inputB_sel_o ;
        operation_sel_o <= operation_sel_o  ;
        mem_load_ext_sel_o  <= mem_load_ext_sel_o   ;
        mem_input_sel_o <= mem_input_sel_o  ;
        alu_muldiv_sel_o    <= alu_muldiv_sel_o ;
        shift_sel_o  <= shift_sel_o   ;
        is_branch_o <= is_branch_o  ;
        is_jal_o    <= is_jal_o ;
        is_jalr_o   <= is_jalr_o    ;
        regfile_we_o    <= regfile_we_o ;
        regfile_input_sel_o <= regfile_input_sel_o  ;
        mem_we_o    <= mem_we_o ;
        mem_re_o    <= mem_re_o ;
        mem_input_sel_o <= mem_input_sel_o  ;
        rd_addr_o   <= rd_addr_o    ;
        rs1_addr_o  <= rs1_addr_o   ;
        rs2_addr_o  <= rs2_addr_o   ;
        is_csr_instr_o  <= is_csr_instr_o   ;
        csr_addr_o  <= csr_addr_o   ;
        csr_imm_o   <= csr_imm_o    ;
        instr_valid_o   <= instr_valid_o    ;
        cond_branch_hit_EXE <= cond_branch_hit_EXE  ;
        cond_branch_result_EXE <= cond_branch_result_EXE    ;
        uncond_branch_hit_EXE <= uncond_branch_hit_EXE  ;
    end
    else if (flush)
    begin // nop instruction = 0000_0000_0000_0000_0000_0000_0001_0011 = 32'h13
        pc_o <= pc;
        rs1_data_o <= 0;
        rs2_data_o <= 0;
        imm_o   <= 0;
        inputA_sel_o    <= 2;
        inputB_sel_o    <= 0;
        operation_sel_o <= 0;
        mem_load_ext_sel_o  <= 0;
        mem_input_sel_o <= 0;
        alu_muldiv_sel_o    <= 0;
        shift_sel_o  <= 0;
        is_branch_o <= 0;
        is_jal_o    <= 0;
        is_jalr_o   <= 0;
        regfile_we_o    <= 1;
        regfile_input_sel_o <= 4;
        mem_we_o    <= 0;
        mem_re_o    <= 0;
        mem_input_sel_o <= 0;
        rd_addr_o   <= 0;
        rs1_addr_o  <= 0;
        rs2_addr_o  <= 0;
        is_csr_instr_o  <= 0;
        csr_addr_o  <= 0;
        csr_imm_o   <= 0;
        instr_valid_o   <= 0;
        cond_branch_hit_EXE <= 0;
        cond_branch_result_EXE <= 0;
        uncond_branch_hit_EXE <= 0;
    end
    else
    begin
        pc_o <= pc;
        rs1_data_o <= rs1_data;
        rs2_data_o <= rs2_data;
        imm_o   <= imm;
        inputA_sel_o    <= inputA_sel;
        inputB_sel_o    <= inputB_sel;
        operation_sel_o <= operation_sel;
        mem_load_ext_sel_o  <= mem_load_ext_sel;
        mem_input_sel_o <= mem_input_sel;
        alu_muldiv_sel_o    <= alu_muldiv_sel;
        shift_sel_o  <= shift_sel;
        is_branch_o <= is_branch;
        is_jal_o    <= is_jal;
        is_jalr_o   <= is_jalr;
        regfile_we_o    <= regfile_we;
        regfile_input_sel_o <= regfile_input_sel;
        mem_we_o    <= mem_we;
        mem_re_o    <= mem_re;
        mem_input_sel_o <= mem_input_sel;
        rd_addr_o   <= rd_addr;
        rs1_addr_o  <= rs1_addr2regfile_o;
        rs2_addr_o  <= rs2_addr2regfile_o;
        is_csr_instr_o  <= is_csr_instr;
        csr_addr_o  <= csr_addr;
        csr_imm_o   <= csr_imm;
        instr_valid_o   <= instr_valid;
        cond_branch_hit_EXE <= cond_branch_hit_ID;
        cond_branch_result_EXE <= cond_branch_result_ID;
        uncond_branch_hit_EXE <= uncond_branch_hit_ID;
    end
end

endmodule   // decode
