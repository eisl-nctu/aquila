`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila.v
//  Author  : Chun-Jen Tsai
//  Date    : Oct/08/2019
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila SoC module. This file is generated using Vivado
//  IP wizard, with a few manual modifications.
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

module aquila #
(
    // Parameters of AXI Master Bus Interface M_IMEM_PORT
    parameter C_M_IMEM_PORT_ID_WIDTH     = 1,
    parameter C_M_IMEM_PORT_ADDR_WIDTH   = 32,
    parameter C_M_IMEM_PORT_DATA_WIDTH   = 32,
    parameter C_M_IMEM_PORT_AWUSER_WIDTH = 0,
    parameter C_M_IMEM_PORT_ARUSER_WIDTH = 0,
    parameter C_M_IMEM_PORT_WUSER_WIDTH  = 0,
    parameter C_M_IMEM_PORT_RUSER_WIDTH  = 0,
    parameter C_M_IMEM_PORT_BUSER_WIDTH  = 0,

    // Parameters of AXI Master Bus Interface M_DMEM_PORT
    parameter C_M_DMEM_PORT_ID_WIDTH     = 1,
    parameter C_M_DMEM_PORT_ADDR_WIDTH   = 32,
    parameter C_M_DMEM_PORT_DATA_WIDTH   = 32,
    parameter C_M_DMEM_PORT_AWUSER_WIDTH = 0,
    parameter C_M_DMEM_PORT_ARUSER_WIDTH = 0,
    parameter C_M_DMEM_PORT_WUSER_WIDTH  = 0,
    parameter C_M_DMEM_PORT_RUSER_WIDTH	 = 0,
    parameter C_M_DMEM_PORT_BUSER_WIDTH  = 0,

    // Parameters of AXI Master Bus Interface M_DEVICE_PORT
    parameter C_M_DEVICE_PORT_ADDR_WIDTH = 32,
    parameter C_M_DEVICE_PORT_DATA_WIDTH = 32
)
(
    // Ports of AXI Master Bus Interface M_IMEM_PORT
    input  mem_aclk,
    input  mem_aresetn,
    output [C_M_IMEM_PORT_ID_WIDTH : 0] m_imem_port_awid,
    output [C_M_IMEM_PORT_ADDR_WIDTH-1 : 0] m_imem_port_awaddr,
    output [7 : 0] m_imem_port_awlen,
    output [2 : 0] m_imem_port_awsize,
    output [1 : 0] m_imem_port_awburst,
    output m_imem_port_awlock,
    output [3 : 0] m_imem_port_awcache,
    output [2 : 0] m_imem_port_awprot,
    output [3 : 0] m_imem_port_awqos,
    output [C_M_IMEM_PORT_AWUSER_WIDTH : 0] m_imem_port_awuser,
    output m_imem_port_awvalid,
    input  m_imem_port_awready,
    output [C_M_IMEM_PORT_DATA_WIDTH-1 : 0] m_imem_port_wdata,
    output [C_M_IMEM_PORT_DATA_WIDTH/8-1 : 0] m_imem_port_wstrb,
    output m_imem_port_wlast,
    output [C_M_IMEM_PORT_WUSER_WIDTH : 0] m_imem_port_wuser,
    output m_imem_port_wvalid,
    input  m_imem_port_wready,
    input  [C_M_IMEM_PORT_ID_WIDTH : 0] m_imem_port_bid,
    input  [1 : 0] m_imem_port_bresp,
    input  [C_M_IMEM_PORT_BUSER_WIDTH : 0] m_imem_port_buser,
    input  m_imem_port_bvalid,
    output m_imem_port_bready,
    output [C_M_IMEM_PORT_ID_WIDTH : 0] m_imem_port_arid,
    output [C_M_IMEM_PORT_ADDR_WIDTH-1 : 0] m_imem_port_araddr,
    output [7 : 0] m_imem_port_arlen,
    output [2 : 0] m_imem_port_arsize,
    output [1 : 0] m_imem_port_arburst,
    output m_imem_port_arlock,
    output [3 : 0] m_imem_port_arcache,
    output [2 : 0] m_imem_port_arprot,
    output [3 : 0] m_imem_port_arqos,
    output [C_M_IMEM_PORT_ARUSER_WIDTH : 0] m_imem_port_aruser,
    output m_imem_port_arvalid,
    input  m_imem_port_arready,
    input  [C_M_IMEM_PORT_ID_WIDTH : 0] m_imem_port_rid,
    input  [C_M_IMEM_PORT_DATA_WIDTH-1 : 0] m_imem_port_rdata,
    input  [1 : 0] m_imem_port_rresp,
    input  m_imem_port_rlast,
    input  [C_M_IMEM_PORT_RUSER_WIDTH : 0] m_imem_port_ruser,
    input  m_imem_port_rvalid,
    output m_imem_port_rready,

    // Ports of AXI Master Bus Interface M_DMEM_PORT
    output [C_M_DMEM_PORT_ID_WIDTH : 0] m_dmem_port_awid,
    output [C_M_DMEM_PORT_ADDR_WIDTH : 0] m_dmem_port_awaddr,
    output [7 : 0] m_dmem_port_awlen,
    output [2 : 0] m_dmem_port_awsize,
    output [1 : 0] m_dmem_port_awburst,
    output m_dmem_port_awlock,
    output [3 : 0] m_dmem_port_awcache,
    output [2 : 0] m_dmem_port_awprot,
    output [3 : 0] m_dmem_port_awqos,
    output [C_M_DMEM_PORT_AWUSER_WIDTH : 0] m_dmem_port_awuser,
    output m_dmem_port_awvalid,
    input  m_dmem_port_awready,
    output [C_M_DMEM_PORT_DATA_WIDTH-1 : 0] m_dmem_port_wdata,
    output [C_M_DMEM_PORT_DATA_WIDTH/8-1 : 0] m_dmem_port_wstrb,
    output m_dmem_port_wlast,
    output [C_M_DMEM_PORT_WUSER_WIDTH : 0] m_dmem_port_wuser,
    output m_dmem_port_wvalid,
    input  m_dmem_port_wready,
    input  [C_M_DMEM_PORT_ID_WIDTH : 0] m_dmem_port_bid,
    input  [1 : 0] m_dmem_port_bresp,
    input  [C_M_DMEM_PORT_BUSER_WIDTH : 0] m_dmem_port_buser,
    input  m_dmem_port_bvalid,
    output m_dmem_port_bready,
    output [C_M_DMEM_PORT_ID_WIDTH : 0] m_dmem_port_arid,
    output [C_M_DMEM_PORT_ADDR_WIDTH-1 : 0] m_dmem_port_araddr,
    output [7 : 0] m_dmem_port_arlen,
    output [2 : 0] m_dmem_port_arsize,
    output [1 : 0] m_dmem_port_arburst,
    output m_dmem_port_arlock,
    output [3 : 0] m_dmem_port_arcache,
    output [2 : 0] m_dmem_port_arprot,
    output [3 : 0] m_dmem_port_arqos,
    output [C_M_DMEM_PORT_ARUSER_WIDTH : 0] m_dmem_port_aruser,
    output m_dmem_port_arvalid,
    input  m_dmem_port_arready,
    input  [C_M_DMEM_PORT_ID_WIDTH : 0] m_dmem_port_rid,
    input  [C_M_DMEM_PORT_DATA_WIDTH-1 : 0] m_dmem_port_rdata,
    input  [1 : 0] m_dmem_port_rresp,
    input  m_dmem_port_rlast,
    input  [C_M_DMEM_PORT_RUSER_WIDTH : 0] m_dmem_port_ruser,
    input  m_dmem_port_rvalid,
    output m_dmem_port_rready,

    // Ports of AXI Master Bus Interface M_DEVICE_PORT
    input  device_aclk,
    input  device_aresetn,
    output [C_M_DEVICE_PORT_ADDR_WIDTH-1 : 0] m_device_port_awaddr,
    output [2 : 0] m_device_port_awprot,
    output  m_device_port_awvalid,
    input   m_device_port_awready,
    output [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0] m_device_port_wdata,
    output [C_M_DEVICE_PORT_DATA_WIDTH/8-1 : 0] m_device_port_wstrb,
    output  m_device_port_wvalid,
    input   m_device_port_wready,
    input  [1 : 0] m_device_port_bresp,
    input   m_device_port_bvalid,
    output  m_device_port_bready,
    output [C_M_DEVICE_PORT_ADDR_WIDTH-1 : 0] m_device_port_araddr,
    output [2 : 0] m_device_port_arprot,
    output  m_device_port_arvalid,
    input   m_device_port_arready,
    input  [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0] m_device_port_rdata,
    input  [1 : 0] m_device_port_rresp,
    input   m_device_port_rvalid,
    output  m_device_port_rready
);

localparam MAX_CLSIZE    = `CLP;    // Size of a cache line in bits.

// Declaration of local signals.
wire                                      RISCV_rst;
wire                                      M_IMEM_strobe, M_IMEM_done;
wire                                      M_DMEM_strobe, M_DMEM_done;
wire                                      M_DMEM_rw;
wire [C_M_IMEM_PORT_DATA_WIDTH-1 : 0]     M_IMEM_addr;
wire [C_M_DMEM_PORT_DATA_WIDTH-1 : 0]     M_DMEM_addr;
wire [MAX_CLSIZE-1 : 0]                   M_IMEM_datain, M_DMEM_datain, M_DMEM_dataout;
wire [7 : 0]                              M_IMEM_burst_len = `CLP/32; // in XLEN-bit words
wire [7 : 0]                              M_DMEM_burst_len = `CLP/32; // in XLEN-bit words

wire                                      M_DEVICE_strobe;
wire [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0]   M_DEVICE_addr;
wire                                      M_DEVICE_rw;
wire [C_M_DEVICE_PORT_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable;
wire [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0]   M_DEVICE_core2dev_data;
wire                                      M_DEVICE_data_ready;
wire [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0]   M_DEVICE_dev2core_data;

// The CPU reset signal.
assign RISCV_rst = ~device_aresetn;

// Instantiation of the AXI Bus Interface M_IMEM_PORT
aquila_M_IMEM_PORT # (
    .AXI_ID_WIDTH(C_M_IMEM_PORT_ID_WIDTH),
    .AXI_ADDR_WIDTH(C_M_IMEM_PORT_ADDR_WIDTH),
    .AXI_DATA_WIDTH(C_M_IMEM_PORT_DATA_WIDTH),
    .AXI_AWUSER_WIDTH(C_M_IMEM_PORT_AWUSER_WIDTH),
    .AXI_ARUSER_WIDTH(C_M_IMEM_PORT_ARUSER_WIDTH),
    .AXI_WUSER_WIDTH(C_M_IMEM_PORT_WUSER_WIDTH),
    .AXI_RUSER_WIDTH(C_M_IMEM_PORT_RUSER_WIDTH),
    .AXI_BUSER_WIDTH(C_M_IMEM_PORT_BUSER_WIDTH)
) aquila_M_IMEM_PORT_inst (
    .RISCV_rst(RISCV_rst),
    .M_IMEM_strobe(M_IMEM_strobe),
    .M_IMEM_addr(M_IMEM_addr),
    .M_IMEM_done(M_IMEM_done),
    .M_IMEM_datain(M_IMEM_datain),
    .M_IMEM_burst_len(M_IMEM_burst_len),

    .M_AXI_ACLK(mem_aclk),
    .M_AXI_ARESETN(mem_aresetn),
    .M_AXI_AWID(m_imem_port_awid),
    .M_AXI_AWADDR(m_imem_port_awaddr),
    .M_AXI_AWLEN(m_imem_port_awlen),
    .M_AXI_AWSIZE(m_imem_port_awsize),
    .M_AXI_AWBURST(m_imem_port_awburst),
    .M_AXI_AWLOCK(m_imem_port_awlock),
    .M_AXI_AWCACHE(m_imem_port_awcache),
    .M_AXI_AWPROT(m_imem_port_awprot),
    .M_AXI_AWQOS(m_imem_port_awqos),
    .M_AXI_AWUSER(m_imem_port_awuser),
    .M_AXI_AWVALID(m_imem_port_awvalid),
    .M_AXI_AWREADY(m_imem_port_awready),
    .M_AXI_WDATA(m_imem_port_wdata),
    .M_AXI_WSTRB(m_imem_port_wstrb),
    .M_AXI_WLAST(m_imem_port_wlast),
    .M_AXI_WUSER(m_imem_port_wuser),
    .M_AXI_WVALID(m_imem_port_wvalid),
    .M_AXI_WREADY(m_imem_port_wready),
    .M_AXI_BID(m_imem_port_bid),
    .M_AXI_BRESP(m_imem_port_bresp),
    .M_AXI_BUSER(m_imem_port_buser),
    .M_AXI_BVALID(m_imem_port_bvalid),
    .M_AXI_BREADY(m_imem_port_bready),
    .M_AXI_ARID(m_imem_port_arid),
    .M_AXI_ARADDR(m_imem_port_araddr),
    .M_AXI_ARLEN(m_imem_port_arlen),
    .M_AXI_ARSIZE(m_imem_port_arsize),
    .M_AXI_ARBURST(m_imem_port_arburst),
    .M_AXI_ARLOCK(m_imem_port_arlock),
    .M_AXI_ARCACHE(m_imem_port_arcache),
    .M_AXI_ARPROT(m_imem_port_arprot),
    .M_AXI_ARQOS(m_imem_port_arqos),
    .M_AXI_ARUSER(m_imem_port_aruser),
    .M_AXI_ARVALID(m_imem_port_arvalid),
    .M_AXI_ARREADY(m_imem_port_arready),
    .M_AXI_RID(m_imem_port_rid),
    .M_AXI_RDATA(m_imem_port_rdata),
    .M_AXI_RRESP(m_imem_port_rresp),
    .M_AXI_RLAST(m_imem_port_rlast),
    .M_AXI_RUSER(m_imem_port_ruser),
    .M_AXI_RVALID(m_imem_port_rvalid),
    .M_AXI_RREADY(m_imem_port_rready)
);

// Instantiation of the AXI Bus Interface M_DMEM_PORT
aquila_M_DMEM_PORT # (
    .AXI_ID_WIDTH(C_M_DMEM_PORT_ID_WIDTH),
    .AXI_ADDR_WIDTH(C_M_DMEM_PORT_ADDR_WIDTH),
    .AXI_DATA_WIDTH(C_M_DMEM_PORT_DATA_WIDTH),
    .AXI_AWUSER_WIDTH(C_M_DMEM_PORT_AWUSER_WIDTH),
    .AXI_ARUSER_WIDTH(C_M_DMEM_PORT_ARUSER_WIDTH),
    .AXI_WUSER_WIDTH(C_M_DMEM_PORT_WUSER_WIDTH),
    .AXI_RUSER_WIDTH(C_M_DMEM_PORT_RUSER_WIDTH),
    .AXI_BUSER_WIDTH(C_M_DMEM_PORT_BUSER_WIDTH)
) aquila_M_DMEM_PORT_inst (
    .RISCV_rst(RISCV_rst),
    .M_DMEM_strobe(M_DMEM_strobe),
    .M_DMEM_addr(M_DMEM_addr),
    .M_DMEM_rw(M_DMEM_rw),
    .M_DMEM_dataout(M_DMEM_dataout),
    .M_DMEM_done(M_DMEM_done),
    .M_DMEM_datain(M_DMEM_datain),
    .M_DMEM_burst_len(M_DMEM_burst_len),

    .M_AXI_ACLK(mem_aclk),
    .M_AXI_ARESETN(mem_aresetn),
    .M_AXI_AWID(m_dmem_port_awid),
    .M_AXI_AWADDR(m_dmem_port_awaddr),
    .M_AXI_AWLEN(m_dmem_port_awlen),
    .M_AXI_AWSIZE(m_dmem_port_awsize),
    .M_AXI_AWBURST(m_dmem_port_awburst),
    .M_AXI_AWLOCK(m_dmem_port_awlock),
    .M_AXI_AWCACHE(m_dmem_port_awcache),
    .M_AXI_AWPROT(m_dmem_port_awprot),
    .M_AXI_AWQOS(m_dmem_port_awqos),
    .M_AXI_AWUSER(m_dmem_port_awuser),
    .M_AXI_AWVALID(m_dmem_port_awvalid),
    .M_AXI_AWREADY(m_dmem_port_awready),
    .M_AXI_WDATA(m_dmem_port_wdata),
    .M_AXI_WSTRB(m_dmem_port_wstrb),
    .M_AXI_WLAST(m_dmem_port_wlast),
    .M_AXI_WUSER(m_dmem_port_wuser),
    .M_AXI_WVALID(m_dmem_port_wvalid),
    .M_AXI_WREADY(m_dmem_port_wready),
    .M_AXI_BID(m_dmem_port_bid),
    .M_AXI_BRESP(m_dmem_port_bresp),
    .M_AXI_BUSER(m_dmem_port_buser),
    .M_AXI_BVALID(m_dmem_port_bvalid),
    .M_AXI_BREADY(m_dmem_port_bready),
    .M_AXI_ARID(m_dmem_port_arid),
    .M_AXI_ARADDR(m_dmem_port_araddr),
    .M_AXI_ARLEN(m_dmem_port_arlen),
    .M_AXI_ARSIZE(m_dmem_port_arsize),
    .M_AXI_ARBURST(m_dmem_port_arburst),
    .M_AXI_ARLOCK(m_dmem_port_arlock),
    .M_AXI_ARCACHE(m_dmem_port_arcache),
    .M_AXI_ARPROT(m_dmem_port_arprot),
    .M_AXI_ARQOS(m_dmem_port_arqos),
    .M_AXI_ARUSER(m_dmem_port_aruser),
    .M_AXI_ARVALID(m_dmem_port_arvalid),
    .M_AXI_ARREADY(m_dmem_port_arready),
    .M_AXI_RID(m_dmem_port_rid),
    .M_AXI_RDATA(m_dmem_port_rdata),
    .M_AXI_RRESP(m_dmem_port_rresp),
    .M_AXI_RLAST(m_dmem_port_rlast),
    .M_AXI_RUSER(m_dmem_port_ruser),
    .M_AXI_RVALID(m_dmem_port_rvalid),
    .M_AXI_RREADY(m_dmem_port_rready)
);

// Instantiation of the AXI Bus Interface M_DEVICE_PORT
aquila_M_DEVICE_PORT # (
    .C_M_AXI_ADDR_WIDTH(C_M_DEVICE_PORT_ADDR_WIDTH),
    .C_M_AXI_DATA_WIDTH(C_M_DEVICE_PORT_DATA_WIDTH)
) aquila_M_DEVICE_PORT_inst (
    .M_DEVICE_strobe(M_DEVICE_strobe),
    .M_DEVICE_addr(M_DEVICE_addr),
    .M_DEVICE_rw(M_DEVICE_rw),
    .M_DEVICE_byte_enable(M_DEVICE_byte_enable),
    .M_DEVICE_data_i(M_DEVICE_core2dev_data),
    .M_DEVICE_data_ready(M_DEVICE_data_ready),
    .M_DEVICE_data_o(M_DEVICE_dev2core_data),

    .M_AXI_ACLK(device_aclk),
    .M_AXI_ARESETN(device_aresetn),
    .M_AXI_AWADDR(m_device_port_awaddr),
    .M_AXI_AWPROT(m_device_port_awprot),
    .M_AXI_AWVALID(m_device_port_awvalid),
    .M_AXI_AWREADY(m_device_port_awready),
    .M_AXI_WDATA(m_device_port_wdata),
    .M_AXI_WSTRB(m_device_port_wstrb),
    .M_AXI_WVALID(m_device_port_wvalid),
    .M_AXI_WREADY(m_device_port_wready),
    .M_AXI_BRESP(m_device_port_bresp),
    .M_AXI_BVALID(m_device_port_bvalid),
    .M_AXI_BREADY(m_device_port_bready),
    .M_AXI_ARADDR(m_device_port_araddr),
    .M_AXI_ARPROT(m_device_port_arprot),
    .M_AXI_ARVALID(m_device_port_arvalid),
    .M_AXI_ARREADY(m_device_port_arready),
    .M_AXI_RDATA(m_device_port_rdata),
    .M_AXI_RRESP(m_device_port_rresp),
    .M_AXI_RVALID(m_device_port_rvalid),
    .M_AXI_RREADY(m_device_port_rready)
);

// Instiantiation of the top-level Aquila core module.
aquila_top aquila_core(
    .clk_i(device_aclk),
    .rst_i(RISCV_rst),
    .base_addr_i(32'b0),

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

endmodule
