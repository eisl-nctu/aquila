
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
    // Parameters of Axi Slave Bus Interface S_CONFIG_PORT
    parameter integer C_S_CONFIG_PORT_DATA_WIDTH    = 32,
    //parameter integer C_S_CONFIG_PORT_ADDR_WIDTH    = 5,
    // Parameters of Axi Master Bus Interface M_ICACHE_PORT
    parameter integer C_M_ICACHE_PORT_ID_WIDTH		= 1,
    parameter integer C_M_ICACHE_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_ICACHE_PORT_DATA_WIDTH	= 32,

    // Parameters of Axi Master Bus Interface M_DCACHE_PORT
    parameter integer C_M_DCACHE_PORT_ID_WIDTH		= 1,
    parameter integer C_M_DCACHE_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_DCACHE_PORT_DATA_WIDTH	= 32,

    // Parameters of Axi Master Bus Interface M_DEVICE_PORT
    parameter integer C_M_DEVICE_PORT_ADDR_WIDTH    = 32,
    parameter integer C_M_DEVICE_PORT_DATA_WIDTH    = 32
)
(
  input logic   clk,
  input logic   rst_n,
  input logic   [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] main_memory_addr,
  output logic [31:0] cur_instr_addr
);


// Declaration of local signals.
wire                                      RISCV_rst;

wire                                      M_ICACHE_strobe, M_ICACHE_done;
wire                                      M_DCACHE_strobe, M_DCACHE_done;
wire                                      M_DCACHE_rw;
wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] M_ICACHE_addr, M_DCACHE_addr;
wire [255 : 0] M_ICACHE_datain, M_DCACHE_datain, M_DCACHE_dataout;

wire                                      M_DEVICE_strobe;
wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_addr;
wire                                      M_DEVICE_rw;
wire [C_S_CONFIG_PORT_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable;
wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_core2dev_data;
wire                                      M_DEVICE_data_ready;
wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_dev2core_data;

// Debug pc
wire [31:0] debug_pc/*verilator public_flat*/;
assign debug_pc = aquila_core.instr_addr;
assign cur_instr_addr = aquila_core.instr_addr;

//wire [31:0] debug_rf [0:31]/*verilator public_flat*/;
//genvar idx;
//generate
//for (idx = 0 ; idx < 32 ; idx = idx + 1)
//  assign debug_rf[i] = aquila_core.RISCV_CORE0.Register_File.rf[i];
//endgenerate

// Instiantiation of the top-level Aquila core module.
  aquila_top aquila_core(
      .clk(clk),
      .rst(~rst_n),
      .base_addr(main_memory_addr),

      .M_ICACHE_strobe(M_ICACHE_strobe),
      .M_ICACHE_addr(M_ICACHE_addr),
      .M_ICACHE_done(M_ICACHE_done),
      .M_ICACHE_datain(M_ICACHE_datain),

      .M_DCACHE_strobe(M_DCACHE_strobe),
      .M_DCACHE_addr(M_DCACHE_addr),
      .M_DCACHE_rw(M_DCACHE_rw),
      .M_DCACHE_dataout(M_DCACHE_dataout),
      .M_DCACHE_done(M_DCACHE_done),
      .M_DCACHE_datain(M_DCACHE_datain),

      .M_DEVICE_strobe(M_DEVICE_strobe),
      .M_DEVICE_addr(M_DEVICE_addr),
      .M_DEVICE_rw(M_DEVICE_rw),
      .M_DEVICE_byte_enable(M_DEVICE_byte_enable),
      .M_DEVICE_core2dev_data(M_DEVICE_core2dev_data),
      .M_DEVICE_data_ready(M_DEVICE_data_ready),
      .M_DEVICE_dev2core_data(M_DEVICE_dev2core_data)
  );

  dp_ram mock_ram(
    .clk(clk),
    .rst_n(rst_n),
    .strobe_icache(M_ICACHE_strobe),
    .addr_icache_i(M_ICACHE_addr),
    .rdata_icache_o(M_ICACHE_datain),
    .done_icache_o(M_ICACHE_done),

    .strobe_dcache(M_DCACHE_strobe),
    .addr_dcache_i(M_DCACHE_addr),
    .wdata_dcache_i(M_DCACHE_dataout),
    .rdata_dcache_o(M_DCACHE_datain),
    .rw_dcache_i(M_DCACHE_rw),
    .done_dcache_o(M_DCACHE_done)
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
