`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila_top.v
//  Author  : Chun-Jen Tsai
//  Date    : Oct/08/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila IP wrapper for an AXI-based processor SoC.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  This module is based on the soc_top.v module written by Jin-you Wu
//  on Feb/28/2019. The original module was a stand-alone top-level module
//  for an SoC. This rework makes it a module embedded inside an AXI IP.
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

module aquila_top #
(
    parameter integer ADDR_WIDTH      = 32, // Width of address bus
    parameter integer DATA_WIDTH      = 32, // Width of data bus
    parameter integer CACHE_LINE_SIZE = 256 // Size of a cache line in bits.
)
(
    input  clk,
    input  rst,   // level-sensitive reset signal.

    // Initial program counter address for the Aquila core
    input  [ADDR_WIDTH-1 : 0]      base_addr,

    // Aquila M_ICACHE master port interface signals
    output                         M_ICACHE_strobe,
    output [ADDR_WIDTH-1 : 0]      M_ICACHE_addr,
    input                          M_ICACHE_done,
    input  [CACHE_LINE_SIZE-1 : 0] M_ICACHE_datain,

    // Aquila M_DCACHE master port interface signals
    output                         M_DCACHE_strobe,
    output [ADDR_WIDTH-1 : 0]      M_DCACHE_addr,
    output                         M_DCACHE_rw,
    output [CACHE_LINE_SIZE-1 : 0] M_DCACHE_dataout,
    input                          M_DCACHE_done,
    input  [CACHE_LINE_SIZE-1 : 0] M_DCACHE_datain,

    // Aquila M_DEVICE master port interface signals
    output                         M_DEVICE_strobe,
    output [ADDR_WIDTH-1 : 0]      M_DEVICE_addr,
    output                         M_DEVICE_rw,
    output [DATA_WIDTH/8-1 : 0]    M_DEVICE_byte_enable,
    output [DATA_WIDTH-1 : 0]      M_DEVICE_core2dev_data,
    input                          M_DEVICE_data_ready,
    input  [DATA_WIDTH-1 : 0]      M_DEVICE_dev2core_data
);

// ------------- Signals for cpu, cache and master ip -------------------------
// CPU core
wire [DATA_WIDTH-1 : 0]      data_read_sel;
wire [  1 : 0]               mem_sel;
wire                         data_rw;
wire                         data_ready;
wire [DATA_WIDTH-1 : 0]      instr_addr;
wire [DATA_WIDTH-1 : 0]      data_addr;

// Processor to I-cache signals.
wire                         p_i_strobe, p_i_ready;
wire [DATA_WIDTH-1 : 0]      p_i_instr;

// Processor to D-cache signals.
wire                         p_d_strobe;
wire                         p_d_ready;
wire [DATA_WIDTH/8-1 : 0]    p_d_byte_enable;
wire [DATA_WIDTH-1 : 0]      p_d_dout, p_d_din;

// I/D Caches to DDRx memory signals.
wire                         i_m_strobe, i_m_ready;
wire                         d_m_strobe, d_m_rw, d_m_ready;
wire [DATA_WIDTH-1 : 0]      i_m_addr, d_m_addr;
wire [CACHE_LINE_SIZE-1 : 0] i_m_dout, d_m_din, d_m_dout;

// Interrupt signals.
wire tmr_irq, sft_irq;

// Core Local Interrupt controller (CLINT) memory read bus.
wire [DATA_WIDTH-1 : 0] clint_mem_data;

// ----------- System Memory Map: DDRx DRAM, Devices, or CLINT --------------
//       [0] 0x8000_0000 - 0xBFFF_FFFF : DDRx DRAM memory (cached)
//       [1] 0xC000_0000 - 0xCFFF_FFFF : device memory (uncached)
//       [2] 0xF000_0000 - 0xF000_0010 : CLINT I/O registers (uncached)
//
assign mem_sel = (data_addr[31:28] == 'hC)? 1 : (data_addr[31:28] == 'hF)? 2 : 0;
assign data_read_sel = (mem_sel == 1)? M_DEVICE_dev2core_data :
                       (mem_sel == 2)? clint_mem_data : p_d_dout;
assign data_ready    = (mem_sel == 1)? M_DEVICE_data_ready :
                       (mem_sel == 0)? p_d_ready : 1; // CLINT-read always ready!

// --- Master IP interface driving signals for I/D caches and I/O devices ---
assign M_ICACHE_strobe  = i_m_strobe;
assign M_ICACHE_addr    = i_m_addr;
assign i_m_ready        = M_ICACHE_done;
assign i_m_dout         = M_ICACHE_datain;

assign M_DCACHE_strobe  = d_m_strobe;
assign M_DCACHE_addr    = d_m_addr;
assign M_DCACHE_rw      = d_m_rw;
assign M_DCACHE_dataout = d_m_din;
assign d_m_ready        = M_DCACHE_done;
assign d_m_dout         = M_DCACHE_datain;

assign M_DEVICE_strobe        = p_d_strobe && (mem_sel == 1);
assign M_DEVICE_addr          = (mem_sel == 1)? data_addr : 32'h0;
assign M_DEVICE_rw            = data_rw && (mem_sel == 1);
assign M_DEVICE_byte_enable   = p_d_byte_enable;
assign M_DEVICE_core2dev_data = (mem_sel == 1)? p_d_din : 32'h0;

// ----------------------------------------------------------------------------
//  Aquila processor core
//  0x0000_0000
//
localparam COND_ENTRY_NUM    = 24,
           COND_DATA_WIDTH   = 32,
           UNCOND_ENTRY_NUM  = 20,
           UNCOND_DATA_WIDTH = 32;

core_top #(
    .HART_ID(0),
    .COND_ENTRY_NUM(COND_ENTRY_NUM),
    .COND_DATA_WIDTH(COND_DATA_WIDTH),
    .UNCOND_ENTRY_NUM(UNCOND_ENTRY_NUM),
    .UNCOND_DATA_WIDTH(UNCOND_DATA_WIDTH)
)
RISCV_CORE0(
    // System signals
    .clk(clk),
    .rst(rst),            // from slave register
    .stall(0),            // disable user stall signal

    // Program counter address at reset for the Aquila core
    .init_pc_addr(base_addr),

    // Instruction cache port
    .instruction(p_i_instr),
    .instruction_ready(p_i_ready),
    .instruction_addr(instr_addr),
    .instruction_req(p_i_strobe),

    // Data cache port
    .data_read(data_read_sel),
    .data_ready(data_ready),
    .data_write(p_d_din),
    .data_addr(data_addr),
    .data_rw(data_rw),
    .data_byte_enable(p_d_byte_enable),
    .data_req(p_d_strobe),

    // Interrupts
    .ext_irq(0),        // no external interrupt (yet)
    .tmr_irq(tmr_irq),
    .sft_irq(sft_irq)
);

// ----------------------------------------------------------------------------
//  Instiantiation of the CLINT module.
//
clint #( .TIMER(1_00_000) )
CLINT(
    .clk(clk),
    .rst(rst),
    .en(mem_sel == 2),
    .we(data_rw && (mem_sel == 2)),
    .addr({6'b0, data_addr[DATA_WIDTH - 5: 2]}),
    .data_in(p_d_din),
    .data_out(clint_mem_data),

    .tmr_irq(tmr_irq),
    .sft_irq(sft_irq)
);

// ----------------------------------------------------------------------------
//  Instiantiation of the I/D-cache modules.
//
localparam ICACHE_SIZE = 4; // Cache size in KB.
localparam DCACHE_SIZE = 4; // Cache size in KB.

// Instruction read from I-cache port.
icache #(.ADDR_WIDTH(ADDR_WIDTH), .CACHE_SIZE(ICACHE_SIZE))
I_Cache(
    .clk(clk),
    .rst(rst),

    .p_addr(instr_addr),
    .p_instr_o(p_i_instr),
    .p_strobe(p_i_strobe),
    .p_ready_o(p_i_ready),

    .m_addr_o(i_m_addr),
    .m_dout(i_m_dout),
    .m_strobe_o(i_m_strobe),
    .m_ready(i_m_ready)
);

// Data read/write through D-cache port.
dcache #(.ADDR_WIDTH(ADDR_WIDTH), .CACHE_SIZE(DCACHE_SIZE))
D_Cache(
    .clk(clk),
    .rst(rst),

    .p_strobe(p_d_strobe && (mem_sel == 0)),
    .p_rw(data_rw && (mem_sel == 0)),
    .p_byte_enable(p_d_byte_enable),
    .p_addr(data_addr),
    .p_dout_o(p_d_dout),
    .p_din(p_d_din),
    .p_ready_o(p_d_ready),

    .m_addr_o(d_m_addr),
    .m_dout(d_m_dout),
    .m_din_o(d_m_din),
    .m_strobe_o(d_m_strobe),
    .m_rw_o(d_m_rw),
    .m_ready(d_m_ready)
);

endmodule
