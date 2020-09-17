
`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila.v
//  Author  : Hon-Chou Dai (Daichou)
//  Date    : FEB/12/2020
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila SoC testharness module.
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

module aquila_testharness #
(
    // Parameters of Axi Master Bus Interface M_ICACHE_PORT
    parameter integer C_M_IMEM_PORT_ID_WIDTH		= 1,
    parameter integer C_M_IMEM_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_IMEM_PORT_DATA_WIDTH	= 32,
    parameter integer C_M_IMEM_PORT_AWUSER_WIDTH	= 0,
    parameter integer C_M_IMEM_PORT_ARUSER_WIDTH	= 0,
    parameter integer C_M_IMEM_PORT_WUSER_WIDTH	= 0,
    parameter integer C_M_IMEM_PORT_RUSER_WIDTH	= 0,
    parameter integer C_M_IMEM_PORT_BUSER_WIDTH	= 0,

    // Parameters of Axi Master Bus Interface M_DMEM_PORT
    parameter integer C_M_DMEM_PORT_ID_WIDTH		= 1,
    parameter integer C_M_DMEM_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_DMEM_PORT_DATA_WIDTH	= 32,
    parameter integer C_M_DMEM_PORT_AWUSER_WIDTH	= 0,
    parameter integer C_M_DMEM_PORT_ARUSER_WIDTH	= 0,
    parameter integer C_M_DMEM_PORT_WUSER_WIDTH	= 0,
    parameter integer C_M_DMEM_PORT_RUSER_WIDTH	= 0,
    parameter integer C_M_DMEM_PORT_BUSER_WIDTH	= 0,

    // Parameters of Axi Master Bus Interface M_DEVICE_PORT
    parameter integer C_M_DEVICE_PORT_ADDR_WIDTH    = 32,
    parameter integer C_M_DEVICE_PORT_DATA_WIDTH    = 32
)
(
    input logic   clk,
    input logic   rst_n,
    input logic   [31 : 0] main_memory_addr,
    output logic [31:0] cur_instr_addr
);


// Declaration of local signals.
wire                                      RISCV_rst;
wire                                      M_IMEM_strobe, M_IMEM_done;
wire                                      M_DMEM_strobe, M_DMEM_done;
wire                                      M_DMEM_rw;
wire [C_M_IMEM_PORT_DATA_WIDTH - 1 : 0] M_IMEM_addr;
wire [C_M_DMEM_PORT_DATA_WIDTH - 1 : 0] M_DMEM_addr;
wire [255 : 0] M_IMEM_datain, M_DMEM_datain, M_DMEM_dataout;

wire                                      M_DEVICE_strobe;
wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_addr;
wire                                      M_DEVICE_rw;
wire [C_M_DEVICE_PORT_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable;
wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_core2dev_data;
wire                                      M_DEVICE_data_ready;
wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_dev2core_data;


// Debug pc
wire [31:0] debug_pc/*verilator public_flat*/;
assign debug_pc = aquila_core.p_i_addr;
assign cur_instr_addr = aquila_core.p_i_addr;

//wire [31:0] debug_rf [0:31]/*verilator public_flat*/;
//genvar idx;
//generate
//for (idx = 0 ; idx < 32 ; idx = idx + 1)
//  assign debug_rf[i] = aquila_core.RISCV_CORE0.Register_File.rf[i];
//endgenerate

// Instiantiation of the top-level Aquila core module.
aquila_top aquila_core(
    .clk_i(clk),
    .rst_i(~rst_n),
    .base_addr_i(main_memory_addr),

    .M_IMEM_strobe_o(M_IMEM_strobe),
    .M_IMEM_addr_o(M_IMEM_addr),
    .M_IMEM_done_i(M_IMEM_done),
    .M_IMEM_data_i(M_IMEM_datain),

    .M_DMEM_strobe_o(M_DMEM_strobe),
    .M_DMEM_addr_o(M_DMEM_addr),
    .M_DMEM_rw_o(M_DMEM_rw),
    .M_DMEM_data_o(M_DMEM_dataout),
    .M_DMEM_done_i(M_DMEM_done),
    .M_DMEM_data_i(M_DMEM_datain),

    .M_DEVICE_strobe_o(M_DEVICE_strobe),
    .M_DEVICE_addr_o(M_DEVICE_addr),
    .M_DEVICE_rw_o(M_DEVICE_rw),
    .M_DEVICE_byte_enable_o(M_DEVICE_byte_enable),
    .M_DEVICE_data_o(M_DEVICE_core2dev_data),
    .M_DEVICE_data_ready_i(M_DEVICE_data_ready),
    .M_DEVICE_data_i(M_DEVICE_dev2core_data)
);

dp_ram mock_ram(
    .clk(clk),
    .rst_n(rst_n),
    .strobe_imem(M_IMEM_strobe),
    .addr_imem_i(M_IMEM_addr),
    .rdata_imem_o(M_IMEM_datain),
    .done_imem_o(M_IMEM_done),

    .strobe_dmem(M_DMEM_strobe),
    .addr_dmem_i(M_DMEM_addr),
    .wdata_dmem_i(M_DMEM_dataout),
    .rdata_dmem_o(M_DMEM_datain),
    .rw_dmem_i(M_DMEM_rw),
    .done_dmem_o(M_DMEM_done)
);

mock_uart mock_uart_0(
    .clk(clk),
    .rst_n(rst_n),

    .M_DEVICE_strobe(M_DEVICE_strobe),
    .M_DEVICE_addr(M_DEVICE_addr),
    .M_DEVICE_rw(M_DEVICE_rw),
    .M_DEVICE_byte_enable(M_DEVICE_byte_enable),
    .M_DEVICE_core2dev_data(M_DEVICE_core2dev_data),
    .M_DEVICE_data_ready(M_DEVICE_data_ready),
    .M_DEVICE_dev2core_data(M_DEVICE_dev2core_data)
);
endmodule
