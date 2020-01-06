`timescale 1ns / 1ps 
// =============================================================================
//  Program : csr_file.v
//  Author  : Jin-you Wu
//  Date    : Dec/18/2018
// -----------------------------------------------------------------------------
//  Description:
//  This module implements the Control and Status Register File of the
//  Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Dec/16/2019, by Chun-Jen Tsai:
//    Map the CSR addresses of CYCLES & CYCLESH to that of MCYCLES & MCYCLESH's
//    counters so that 'RDCYCLE' & 'RDCYCLEH' pseudo instructions can read the
//    counters.
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

module csr_file #(parameter HART_ID = 0, ADDR_WIDTH = 32, DATA_WIDTH = 32)
(
    // External Signal
    input                     clk,
    input                     rst,

    // from Decode_Eexcute_Pipeline
    input                     is_csr_instr,
    input [11: 0]             csr_addr,
    input [2: 0]              csr_op,
    input [4: 0]              csr_imm,

    // from RegisterFile
    input [DATA_WIDTH-1 : 0]  rs1_data,

    // interrupt requests
    input                     ext_irq,
    input                     tmr_irq,
    input                     sft_irq,
    output                    irq_taken,
    output [ADDR_WIDTH-1 : 0] PC_handler,
    input  [ADDR_WIDTH-1 : 0] nxt_unexec_PC,

    // to Execute_Memory_Pipeline
    output [DATA_WIDTH-1 : 0] csr_data_o,

    // System Jump operation
    input                     sys_jump,
    input  [11: 0]            sys_jump_csr_addr,
    input  [ADDR_WIDTH-1 : 0] sys_jump_pc,
    output [DATA_WIDTH-1 : 0] sys_jump_csr_data
);

// =============================================================================================
//  Machine-level CSRs (v1.10)
//          CSR Name        Address         R/W Attribute       Full Name
`define     CSR_MSTATUS     12'h300         // RW               Machine Status Register
`define     CSR_MISA        12'h301         // RW               Machine ISA Register
`define     CSR_MEDELEG     12'h302         // RW               Machine Exception Delegation Register
`define     CSR_MIDELEG     12'h303         // RW               Machine Interrupt Delegation Register
`define     CSR_MIE         12'h304         // RW               Machine Interrupt Enable Register
`define     CSR_MTVEC       12'h305         // RW               Machine Trap-Vector Base-Address Register
`define     CSR_MCOUNTEREN  12'h306         // RW               Machine Counter Enable

`define     CSR_MSCRATCH    12'h340         // RW               Machine Scratch Register
`define     CSR_MEPC        12'h341         // RW               Machine Exception Program Counter
`define     CSR_MCAUSE      12'h342         // RW               Machine Cause Register
`define     CSR_MTVAL       12'h343         // RW               Machine Trap Value Register
`define     CSR_MIP         12'h344         // RW               Machine Interrupt Pending Register

`define     CSR_MCYCLE      12'hB00         // RW               Lower 32 bits of Cycle counter
`define     CSR_MCYCLEH     12'hB80         // RW               Upper 32 bits of Cycle counter
`define     CSR_MINSTRET    12'hB02         // RW               Lower 32 bits of Instructions-retired counter
`define     CSR_MINSTRETH   12'hB82         // RW               Upper 32 bits of Instructions-retired counter

`define     CSR_MVENDORID   12'hF11         // RO               Machine Vendor ID Register
`define     CSR_MARCHID     12'hF12         // RO               Machine Architecture ID Register
`define     CSR_MIMPID      12'hF13         // RO               Machine Implementation ID Register
`define     CSR_MHARTID     12'hF14         // RO               Hart ID Register

`define     CSR_CYCLE       12'hC00         // RO               Cycle counter for RDCYCLE instruction.
`define     CSR_TIME        12'hC01         // RO               Timer for RDTIME instruction.
`define     CSR_INSTRET     12'hC02         // RO               Instructions-retired counter for RDINSTRET instruction.
`define     CSR_CYCLEH      12'hC00         // RO               Upper 32 bits of cycle, RV32I only.
`define     CSR_TIMEH       12'hC01         // RO               Upper 32 bits of time, RV32I only.
`define     CSR_INSTRETH    12'hC02         // RO               Upper 32 bits of instret, RV32I only.

// =============================================================================================
//  CSRs implementations
//
wire [DATA_WIDTH-1 : 0] mstatus;
reg                     mstatus_mpie_r;
reg                     mstatus_mie_r;

reg  [DATA_WIDTH-1 : 0] misa_r;
wire [DATA_WIDTH-1 : 0] mie;
reg                     mie_meie_r;
reg                     mie_mtie_r;
reg                     mie_msie_r;

reg  [DATA_WIDTH-1 : 0] mtvec_r;
wire [DATA_WIDTH-1 : 0] mtvec_base = {mtvec_r[DATA_WIDTH-1 : 2], 2'b00};
wire [ 2 : 0] mtvec_mode = mtvec_r[1: 0];

reg  [DATA_WIDTH-1 : 0] mscratch_r;
reg  [DATA_WIDTH-1 : 0] mepc_r;
reg  [DATA_WIDTH-1 : 0] mcause_r;  // mcause_r <= irq_taken ? irq_cause : excp_taken? excp_cause : mcause_r;
//wire [DATA_WIDTH-1 : 0] excp_cause;
wire [DATA_WIDTH-1 : 0] irq_cause;

wire [30 : 0]           excp_code = irq_cause[30: 0];
//reg  [DATA_WIDTH-1 : 0] mtval_r;  // for exception
wire [DATA_WIDTH-1 : 0] mip;
reg                     mip_meip_r;
reg                     mip_mtip_r;
reg                     mip_msip_r;

wire mirq;

reg [63 : 0] mcycle_r;
//reg  [63 : 0] minstret_r;
//wire retired = instr_valid & !stall;

wire [DATA_WIDTH-1 : 0] mvendorid = 0;  // Non-commercial implementation, so return 0
wire [DATA_WIDTH-1 : 0] marchid   = 0;
wire [DATA_WIDTH-1 : 0] mimpid    = 0;
wire [DATA_WIDTH-1 : 0] mhartid   = HART_ID;

wire is_mret = (sys_jump_csr_addr == `CSR_MEPC);
wire is_ecall = (sys_jump_csr_addr == `CSR_MTVEC);

reg  [DATA_WIDTH-1 : 0] csr_data;
wire [DATA_WIDTH-1 : 0] csr_inputA = csr_data;
wire [DATA_WIDTH-1 : 0] csr_inputB = csr_op[2] ? {27'b0, csr_imm} : rs1_data;
reg  [DATA_WIDTH-1 : 0] updated_csr_data;

assign mstatus[31] = 1'b0;              // SD
assign mstatus[30: 23]  = 8'b0;         // Reserved
assign mstatus[22: 17]  = 6'b0;         // TSR--MPRV
assign mstatus[16: 15]  = 2'b0;         // XS
assign mstatus[14: 13]  = 2'b0;         // FS
assign mstatus[12: 11]  = 2'b11;        // MPP : We only support M-mode, so it always is 2'b11
assign mstatus[10: 9] = 2'b0;           // Reserved
assign mstatus[8] = 1'b0;               // SPP
assign mstatus[7] = mstatus_mpie_r;     // MPIE
assign mstatus[6] = 1'b0;               // Reserved
assign mstatus[5] = 1'b0;               // SPIE
assign mstatus[4] = 1'b0;               // UPIE
assign mstatus[3] = mstatus_mie_r;      // MIE
assign mstatus[2] = 1'b0;               // Reserved
assign mstatus[1] = 1'b0;               // SIE
assign mstatus[0] = 1'b0;               // UIE

assign mie[DATA_WIDTH-1 : 12]  = 20'b0; // Reserved
assign mie[11]  = mie_meie_r;           // MEIE
assign mie[10]  = 1'b0;                 // Reserved
assign mie[9]   = 1'b0;                 // SEIE
assign mie[8]   = 1'b0;                 // UEIE
assign mie[7]   = mie_mtie_r;           // MTIE
assign mie[6]   = 1'b0;                 // Reserved
assign mie[5]   = 1'b0;                 // STIE
assign mie[4]   = 1'b0;                 // UTIE
assign mie[3]   = mie_msie_r;           // MSIE
assign mie[2]   = 1'b0;                 // Reserved
assign mie[1]   = 1'b0;                 // SSIE
assign mie[0]   = 1'b0;                 // USIE

assign irq_cause[31] = 1'b1;
assign irq_cause[30: 4] = 27'b0;
assign irq_cause[3: 0]  =
       (ext_irq & mie_meie_r) ? 4'd11 :
       (tmr_irq & mie_mtie_r) ? 4'd7  :
       (sft_irq & mie_msie_r) ? 4'd3  :
                                4'b0  ;

assign mip[DATA_WIDTH-1 : 12]  = 20'b0;        // Reserved
assign mip[11]  = mip_meip_r;       // MEIP
assign mip[10]  = 1'b0;             // Reserved
assign mip[9]   = 1'b0;             // SEIP
assign mip[8]   = 1'b0;             // UEIP
assign mip[7]   = mip_mtip_r;       // MTIP
assign mip[6]   = 1'b0;             // Reserved
assign mip[5]   = 1'b0;             // STIP
assign mip[4]   = 1'b0;             // UTIP
assign mip[3]   = mip_msip_r;       // MSIP
assign mip[2]   = 1'b0;             // Reserved
assign mip[1]   = 1'b0;             // SSIP
assign mip[0]   = 1'b0;             // USIP

assign mirq = (ext_irq & mie_meie_r) | (tmr_irq & mie_mtie_r) | (sft_irq & mie_msie_r) ;

// =============================================================================================
//  SYSTEM Operations
//

// mstatus
always @(posedge clk)
begin
    if (rst)
    begin
        mstatus_mpie_r <= 1'b0;
        mstatus_mie_r <= 1'b1; // for demo, it should be 0
    end
    else if (irq_taken)
    begin
        mstatus_mpie_r <= mstatus_mie_r;
        mstatus_mie_r <= 1'b0;
    end
    else if (sys_jump & is_mret)
    begin
        mstatus_mie_r <= mstatus_mpie_r;
        mstatus_mpie_r <= 1'b1;
    end
    else if (is_csr_instr && csr_addr == `CSR_MSTATUS)
    begin
        mstatus_mie_r <= updated_csr_data[3];
        mstatus_mpie_r <= updated_csr_data[7];
    end
end

// mie
always @(posedge clk)
begin
    if (rst)
    begin
        mie_meie_r <= 1'b0;
        mie_mtie_r <= 1'b0;
        mie_msie_r <= 1'b0;
    end
    else if (is_csr_instr && csr_addr == `CSR_MIE)
    begin
        mie_meie_r <= updated_csr_data[11];
        mie_mtie_r <= updated_csr_data[7];
        mie_msie_r <= updated_csr_data[3];
    end
end

// mtvec
always @(posedge clk)
begin
    if (rst)
    begin
        mtvec_r <= 32'h0; // the entry point of timer ISR
    end
    else if (is_csr_instr && csr_addr == `CSR_MTVEC)
    begin
        mtvec_r <= updated_csr_data;
    end
end

// mscratch
always @(posedge clk)
begin
    if (rst)
    begin
        mscratch_r <= 32'b0;
    end
    else if (is_csr_instr && csr_addr == `CSR_MSCRATCH)
    begin
        mscratch_r <= updated_csr_data;
    end
end

// mepc
always @(posedge clk)
begin
    if (rst)
    begin
        mepc_r <= 32'b0;
    end
    else if (irq_taken)
    begin
        mepc_r <= nxt_unexec_PC;
    end
    else if (sys_jump & is_ecall)
    begin
        mepc_r <= sys_jump_pc;
    end
    else if (is_csr_instr && csr_addr == `CSR_MEPC)
    begin
        mepc_r <= updated_csr_data;
    end
end

// mcause
always @(posedge clk)
begin
    if (rst)
    begin
        mcause_r <= 32'b0;
    end
    else if (irq_taken)
    begin
        mcause_r <= irq_cause;
    end
    else if (is_csr_instr && csr_addr == `CSR_MCAUSE)
    begin
        mcause_r <= updated_csr_data;
    end
end

// TODO: mtval for exception handling

// mip : read-only
always @(posedge clk)
begin
    if (rst)
    begin
        mip_meip_r <= 1'b0;
        mip_mtip_r <= 1'b0;
        mip_msip_r <= 1'b0;
    end
    else
    begin
        mip_meip_r <= ext_irq;
        mip_mtip_r <= tmr_irq;
        mip_msip_r <= sft_irq;
    end
end

// mcycle, mcycleh
always @(posedge clk)
begin
    if (rst)
    begin
        mcycle_r    <= 64'b0;
    end
    else if (is_csr_instr)
    begin
        case (csr_addr)
            `CSR_MCYCLE :
                mcycle_r[31 : 0] <= updated_csr_data;
            `CSR_MCYCLEH :
                mcycle_r[63: 32]    <= updated_csr_data;
            `CSR_CYCLE :
                mcycle_r[31 : 0] <= updated_csr_data;
            `CSR_CYCLEH :
                mcycle_r[63: 32]    <= updated_csr_data;
        endcase
    end
    else
    begin
        mcycle_r <= mcycle_r + 1;
    end
end

// TODO: minstret, minstreth

// =============================================================================================
//  Operations and Multiplexer
//

always @( * )
begin
    case (csr_addr)
        `CSR_MSTATUS:
            csr_data = mstatus;
        `CSR_MIE:
            csr_data = mie;
        `CSR_MTVEC:
            csr_data = mtvec_r;

        `CSR_MSCRATCH:
            csr_data = mscratch_r;
        `CSR_MEPC:
            csr_data = mepc_r;
        `CSR_MCAUSE:
            csr_data = mcause_r;
        //`CSR_MTVAL:       csr_data = mtval_r;
        `CSR_MIP:
            csr_data = mip;

        `CSR_MCYCLE:
            csr_data = mcycle_r[31 : 0];
        `CSR_MCYCLEH:
            csr_data = mcycle_r[63: 32];

        //`CSR_MINSTRET:    csr_data = minstret_r[DATA_WIDTH-1 :0];
        //`CSR_MINSTRETH: csr_data = minstret_r[63:32];

        `CSR_CYCLE:
            csr_data = mcycle_r[31 : 0];
        `CSR_CYCLEH:
            csr_data = mcycle_r[63: 32];

        `CSR_MVENDORID:
            csr_data = mvendorid;
        `CSR_MARCHID:
            csr_data = marchid;
        `CSR_MIMPID:
            csr_data = mimpid;
        `CSR_MHARTID:
            csr_data = mhartid;

        default :
            csr_data = 0;
    endcase
end

`define CSR_RW 2'b01
`define CSR_RS 2'b10
`define CSR_RC 2'b11

always @( * )
begin
    case (csr_op[1: 0])
        `CSR_RW:
            updated_csr_data = csr_inputB;
        `CSR_RS:
            updated_csr_data = csr_inputA | csr_inputB;
        `CSR_RC:
            updated_csr_data = csr_inputA & ~csr_inputB;
        default:
            updated_csr_data = csr_inputA;
    endcase
end


// =============================================================================================
//  Output signals interface
//
assign csr_data_o = csr_data;
assign sys_jump_csr_data = is_mret ? mepc_r :
       is_ecall ? mtvec_base :
       32'b0;

assign irq_taken = (mstatus_mie_r & mirq);
// ------------------
// mtvec[1:0] == 0 : MODE 0, set PC to BASE
// mtvec[1:0] == 1 : MODE 1, set PC to BASE + 4*casue
// mtvec[1:0] >= 2 : Reserved
assign PC_handler = (mtvec_mode == 2'b00) ? mtvec_base
       : mtvec_base + (excp_code << 2);

endmodule   // csr_file
