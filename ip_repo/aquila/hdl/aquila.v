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

module aquila #
(
    // Parameters of Axi Slave Bus Interface S_CONFIG_PORT
    parameter integer C_S_CONFIG_PORT_DATA_WIDTH    = 32,
    parameter integer C_S_CONFIG_PORT_ADDR_WIDTH    = 5,

    // Parameters of Axi Master Bus Interface M_ICACHE_PORT
    parameter integer C_M_ICACHE_PORT_ID_WIDTH		= 1,
    parameter integer C_M_ICACHE_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_ICACHE_PORT_DATA_WIDTH	= 32,
    parameter integer C_M_ICACHE_PORT_AWUSER_WIDTH	= 0,
    parameter integer C_M_ICACHE_PORT_ARUSER_WIDTH	= 0,
    parameter integer C_M_ICACHE_PORT_WUSER_WIDTH	= 0,
    parameter integer C_M_ICACHE_PORT_RUSER_WIDTH	= 0,
    parameter integer C_M_ICACHE_PORT_BUSER_WIDTH	= 0,

    // Parameters of Axi Master Bus Interface M_DCACHE_PORT
    parameter integer C_M_DCACHE_PORT_ID_WIDTH		= 1,
    parameter integer C_M_DCACHE_PORT_ADDR_WIDTH	= 32,
    parameter integer C_M_DCACHE_PORT_DATA_WIDTH	= 32,
    parameter integer C_M_DCACHE_PORT_AWUSER_WIDTH	= 0,
    parameter integer C_M_DCACHE_PORT_ARUSER_WIDTH	= 0,
    parameter integer C_M_DCACHE_PORT_WUSER_WIDTH	= 0,
    parameter integer C_M_DCACHE_PORT_RUSER_WIDTH	= 0,
    parameter integer C_M_DCACHE_PORT_BUSER_WIDTH	= 0,

    // Parameters of Axi Master Bus Interface M_DEVICE_PORT
    parameter integer C_M_DEVICE_PORT_ADDR_WIDTH    = 32,
    parameter integer C_M_DEVICE_PORT_DATA_WIDTH    = 32
)
(
    // Ports of Axi Slave Bus Interface S_CONFIG_PORT
    input wire cfg_dev_aclk,
    input wire cfg_dev_aresetn,
    input wire [C_S_CONFIG_PORT_ADDR_WIDTH - 1 : 0] s_config_port_awaddr,
    input wire [2 : 0] s_config_port_awprot,
    input wire s_config_port_awvalid,
    output wire s_config_port_awready,
    input wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] s_config_port_wdata,
    input wire [(C_S_CONFIG_PORT_DATA_WIDTH / 8) - 1 : 0] s_config_port_wstrb,
    input wire s_config_port_wvalid,
    output wire s_config_port_wready,
    output wire [1 : 0] s_config_port_bresp,
    output wire s_config_port_bvalid,
    input wire s_config_port_bready,
    input wire [C_S_CONFIG_PORT_ADDR_WIDTH - 1 : 0] s_config_port_araddr,
    input wire [2 : 0] s_config_port_arprot,
    input wire s_config_port_arvalid,
    output wire s_config_port_arready,
    output wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] s_config_port_rdata,
    output wire [1 : 0] s_config_port_rresp,
    output wire s_config_port_rvalid,
    input wire s_config_port_rready,

    // Ports of Axi Master Bus Interface M_ICACHE_PORT
    input wire cache_aclk,
    input wire cache_aresetn,
    output wire [C_M_ICACHE_PORT_ID_WIDTH - 1 : 0] m_icache_port_awid,
    output wire [C_M_ICACHE_PORT_ADDR_WIDTH - 1 : 0] m_icache_port_awaddr,
    output wire [7 : 0] m_icache_port_awlen,
    output wire [2 : 0] m_icache_port_awsize,
    output wire [1 : 0] m_icache_port_awburst,
    output wire m_icache_port_awlock,
    output wire [3 : 0] m_icache_port_awcache,
    output wire [2 : 0] m_icache_port_awprot,
    output wire [3 : 0] m_icache_port_awqos,
    output wire [C_M_ICACHE_PORT_AWUSER_WIDTH - 1 : 0] m_icache_port_awuser,
    output wire m_icache_port_awvalid,
    input wire m_icache_port_awready,
    output wire [C_M_ICACHE_PORT_DATA_WIDTH - 1 : 0] m_icache_port_wdata,
    output wire [C_M_ICACHE_PORT_DATA_WIDTH / 8 - 1 : 0] m_icache_port_wstrb,
    output wire m_icache_port_wlast,
    output wire [C_M_ICACHE_PORT_WUSER_WIDTH - 1 : 0] m_icache_port_wuser,
    output wire m_icache_port_wvalid,
    input wire m_icache_port_wready,
    input wire [C_M_ICACHE_PORT_ID_WIDTH - 1 : 0] m_icache_port_bid,
    input wire [1 : 0] m_icache_port_bresp,
    input wire [C_M_ICACHE_PORT_BUSER_WIDTH - 1 : 0] m_icache_port_buser,
    input wire m_icache_port_bvalid,
    output wire m_icache_port_bready,
    output wire [C_M_ICACHE_PORT_ID_WIDTH - 1 : 0] m_icache_port_arid,
    output wire [C_M_ICACHE_PORT_ADDR_WIDTH - 1 : 0] m_icache_port_araddr,
    output wire [7 : 0] m_icache_port_arlen,
    output wire [2 : 0] m_icache_port_arsize,
    output wire [1 : 0] m_icache_port_arburst,
    output wire m_icache_port_arlock,
    output wire [3 : 0] m_icache_port_arcache,
    output wire [2 : 0] m_icache_port_arprot,
    output wire [3 : 0] m_icache_port_arqos,
    output wire [C_M_ICACHE_PORT_ARUSER_WIDTH - 1 : 0] m_icache_port_aruser,
    output wire m_icache_port_arvalid,
    input wire m_icache_port_arready,
    input wire [C_M_ICACHE_PORT_ID_WIDTH - 1 : 0] m_icache_port_rid,
    input wire [C_M_ICACHE_PORT_DATA_WIDTH - 1 : 0] m_icache_port_rdata,
    input wire [1 : 0] m_icache_port_rresp,
    input wire m_icache_port_rlast,
    input wire [C_M_ICACHE_PORT_RUSER_WIDTH - 1 : 0] m_icache_port_ruser,
    input wire m_icache_port_rvalid,
    output wire m_icache_port_rready,

    // Ports of Axi Master Bus Interface M_DCACHE_PORT
    output wire [C_M_DCACHE_PORT_ID_WIDTH - 1 : 0] m_dcache_port_awid,
    output wire [C_M_DCACHE_PORT_ADDR_WIDTH - 1 : 0] m_dcache_port_awaddr,
    output wire [7 : 0] m_dcache_port_awlen,
    output wire [2 : 0] m_dcache_port_awsize,
    output wire [1 : 0] m_dcache_port_awburst,
    output wire m_dcache_port_awlock,
    output wire [3 : 0] m_dcache_port_awcache,
    output wire [2 : 0] m_dcache_port_awprot,
    output wire [3 : 0] m_dcache_port_awqos,
    output wire [C_M_DCACHE_PORT_AWUSER_WIDTH - 1 : 0] m_dcache_port_awuser,
    output wire m_dcache_port_awvalid,
    input wire m_dcache_port_awready,
    output wire [C_M_DCACHE_PORT_DATA_WIDTH - 1 : 0] m_dcache_port_wdata,
    output wire [C_M_DCACHE_PORT_DATA_WIDTH / 8 - 1 : 0] m_dcache_port_wstrb,
    output wire m_dcache_port_wlast,
    output wire [C_M_DCACHE_PORT_WUSER_WIDTH - 1 : 0] m_dcache_port_wuser,
    output wire m_dcache_port_wvalid,
    input wire m_dcache_port_wready,
    input wire [C_M_DCACHE_PORT_ID_WIDTH - 1 : 0] m_dcache_port_bid,
    input wire [1 : 0] m_dcache_port_bresp,
    input wire [C_M_DCACHE_PORT_BUSER_WIDTH - 1 : 0] m_dcache_port_buser,
    input wire m_dcache_port_bvalid,
    output wire m_dcache_port_bready,
    output wire [C_M_DCACHE_PORT_ID_WIDTH - 1 : 0] m_dcache_port_arid,
    output wire [C_M_DCACHE_PORT_ADDR_WIDTH - 1 : 0] m_dcache_port_araddr,
    output wire [7 : 0] m_dcache_port_arlen,
    output wire [2 : 0] m_dcache_port_arsize,
    output wire [1 : 0] m_dcache_port_arburst,
    output wire m_dcache_port_arlock,
    output wire [3 : 0] m_dcache_port_arcache,
    output wire [2 : 0] m_dcache_port_arprot,
    output wire [3 : 0] m_dcache_port_arqos,
    output wire [C_M_DCACHE_PORT_ARUSER_WIDTH - 1 : 0] m_dcache_port_aruser,
    output wire m_dcache_port_arvalid,
    input wire m_dcache_port_arready,
    input wire [C_M_DCACHE_PORT_ID_WIDTH - 1 : 0] m_dcache_port_rid,
    input wire [C_M_DCACHE_PORT_DATA_WIDTH - 1 : 0] m_dcache_port_rdata,
    input wire [1 : 0] m_dcache_port_rresp,
    input wire m_dcache_port_rlast,
    input wire [C_M_DCACHE_PORT_RUSER_WIDTH - 1 : 0] m_dcache_port_ruser,
    input wire m_dcache_port_rvalid,
    output wire m_dcache_port_rready,

    // Ports of Axi Master Bus Interface M_DEVICE_PORT
    output wire [C_M_DEVICE_PORT_ADDR_WIDTH-1 : 0] m_device_port_awaddr,
    output wire [2 : 0] m_device_port_awprot,
    output wire  m_device_port_awvalid,
    input wire  m_device_port_awready,
    output wire [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0] m_device_port_wdata,
    output wire [C_M_DEVICE_PORT_DATA_WIDTH/8-1 : 0] m_device_port_wstrb,
    output wire  m_device_port_wvalid,
    input wire  m_device_port_wready,
    input wire [1 : 0] m_device_port_bresp,
    input wire  m_device_port_bvalid,
    output wire  m_device_port_bready,
    output wire [C_M_DEVICE_PORT_ADDR_WIDTH-1 : 0] m_device_port_araddr,
    output wire [2 : 0] m_device_port_arprot,
    output wire  m_device_port_arvalid,
    input wire  m_device_port_arready,
    input wire [C_M_DEVICE_PORT_DATA_WIDTH-1 : 0] m_device_port_rdata,
    input wire [1 : 0] m_device_port_rresp,
    input wire  m_device_port_rvalid,
    output wire  m_device_port_rready
);

// Declaration of local signals.
wire                                      RISCV_rst;
wire [C_S_CONFIG_PORT_DATA_WIDTH - 1 : 0] main_memory_addr;

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

// Instantiation of the Axi Bus Interface S_CONFIG_PORT
aquila_S_CONFIG_PORT # (
    .C_S_AXI_DATA_WIDTH(C_S_CONFIG_PORT_DATA_WIDTH),
    .C_S_AXI_ADDR_WIDTH(C_S_CONFIG_PORT_ADDR_WIDTH)
) aquila_S_CONFIG_PORT_inst (
    .RISCV_rst(RISCV_rst),
    .base_addr(main_memory_addr),

    .S_AXI_ACLK(cfg_dev_aclk),
    .S_AXI_ARESETN(cfg_dev_aresetn),
    .S_AXI_AWADDR(s_config_port_awaddr),
    .S_AXI_AWPROT(s_config_port_awprot),
    .S_AXI_AWVALID(s_config_port_awvalid),
    .S_AXI_AWREADY(s_config_port_awready),
    .S_AXI_WDATA(s_config_port_wdata),
    .S_AXI_WSTRB(s_config_port_wstrb),
    .S_AXI_WVALID(s_config_port_wvalid),
    .S_AXI_WREADY(s_config_port_wready),
    .S_AXI_BRESP(s_config_port_bresp),
    .S_AXI_BVALID(s_config_port_bvalid),
    .S_AXI_BREADY(s_config_port_bready),
    .S_AXI_ARADDR(s_config_port_araddr),
    .S_AXI_ARPROT(s_config_port_arprot),
    .S_AXI_ARVALID(s_config_port_arvalid),
    .S_AXI_ARREADY(s_config_port_arready),
    .S_AXI_RDATA(s_config_port_rdata),
    .S_AXI_RRESP(s_config_port_rresp),
    .S_AXI_RVALID(s_config_port_rvalid),
    .S_AXI_RREADY(s_config_port_rready)
);

// Instantiation of the Axi Bus Interface M_ICACHE_PORT
aquila_M_ICACHE_PORT # (
    .C_M_AXI_ID_WIDTH(C_M_ICACHE_PORT_ID_WIDTH),
    .C_M_AXI_ADDR_WIDTH(C_M_ICACHE_PORT_ADDR_WIDTH),
    .C_M_AXI_DATA_WIDTH(C_M_ICACHE_PORT_DATA_WIDTH),
    .C_M_AXI_AWUSER_WIDTH(C_M_ICACHE_PORT_AWUSER_WIDTH),
    .C_M_AXI_ARUSER_WIDTH(C_M_ICACHE_PORT_ARUSER_WIDTH),
    .C_M_AXI_WUSER_WIDTH(C_M_ICACHE_PORT_WUSER_WIDTH),
    .C_M_AXI_RUSER_WIDTH(C_M_ICACHE_PORT_RUSER_WIDTH),
    .C_M_AXI_BUSER_WIDTH(C_M_ICACHE_PORT_BUSER_WIDTH)
) aquila_M_ICACHE_PORT_inst (
    .RISCV_rst(RISCV_rst),
    .M_ICACHE_strobe(M_ICACHE_strobe),
    .M_ICACHE_addr(M_ICACHE_addr),
    .M_ICACHE_done(M_ICACHE_done),
    .M_ICACHE_datain(M_ICACHE_datain),

    .M_AXI_ACLK(cache_aclk),
    .M_AXI_ARESETN(cache_aresetn),
    .M_AXI_AWID(m_icache_port_awid),
    .M_AXI_AWADDR(m_icache_port_awaddr),
    .M_AXI_AWLEN(m_icache_port_awlen),
    .M_AXI_AWSIZE(m_icache_port_awsize),
    .M_AXI_AWBURST(m_icache_port_awburst),
    .M_AXI_AWLOCK(m_icache_port_awlock),
    .M_AXI_AWCACHE(m_icache_port_awcache),
    .M_AXI_AWPROT(m_icache_port_awprot),
    .M_AXI_AWQOS(m_icache_port_awqos),
    .M_AXI_AWUSER(m_icache_port_awuser),
    .M_AXI_AWVALID(m_icache_port_awvalid),
    .M_AXI_AWREADY(m_icache_port_awready),
    .M_AXI_WDATA(m_icache_port_wdata),
    .M_AXI_WSTRB(m_icache_port_wstrb),
    .M_AXI_WLAST(m_icache_port_wlast),
    .M_AXI_WUSER(m_icache_port_wuser),
    .M_AXI_WVALID(m_icache_port_wvalid),
    .M_AXI_WREADY(m_icache_port_wready),
    .M_AXI_BID(m_icache_port_bid),
    .M_AXI_BRESP(m_icache_port_bresp),
    .M_AXI_BUSER(m_icache_port_buser),
    .M_AXI_BVALID(m_icache_port_bvalid),
    .M_AXI_BREADY(m_icache_port_bready),
    .M_AXI_ARID(m_icache_port_arid),
    .M_AXI_ARADDR(m_icache_port_araddr),
    .M_AXI_ARLEN(m_icache_port_arlen),
    .M_AXI_ARSIZE(m_icache_port_arsize),
    .M_AXI_ARBURST(m_icache_port_arburst),
    .M_AXI_ARLOCK(m_icache_port_arlock),
    .M_AXI_ARCACHE(m_icache_port_arcache),
    .M_AXI_ARPROT(m_icache_port_arprot),
    .M_AXI_ARQOS(m_icache_port_arqos),
    .M_AXI_ARUSER(m_icache_port_aruser),
    .M_AXI_ARVALID(m_icache_port_arvalid),
    .M_AXI_ARREADY(m_icache_port_arready),
    .M_AXI_RID(m_icache_port_rid),
    .M_AXI_RDATA(m_icache_port_rdata),
    .M_AXI_RRESP(m_icache_port_rresp),
    .M_AXI_RLAST(m_icache_port_rlast),
    .M_AXI_RUSER(m_icache_port_ruser),
    .M_AXI_RVALID(m_icache_port_rvalid),
    .M_AXI_RREADY(m_icache_port_rready)
);

// Instantiation of the Axi Bus Interface M_DCACHE_PORT
aquila_M_DCACHE_PORT # (
    .C_M_AXI_ID_WIDTH(C_M_DCACHE_PORT_ID_WIDTH),
    .C_M_AXI_ADDR_WIDTH(C_M_DCACHE_PORT_ADDR_WIDTH),
    .C_M_AXI_DATA_WIDTH(C_M_DCACHE_PORT_DATA_WIDTH),
    .C_M_AXI_AWUSER_WIDTH(C_M_DCACHE_PORT_AWUSER_WIDTH),
    .C_M_AXI_ARUSER_WIDTH(C_M_DCACHE_PORT_ARUSER_WIDTH),
    .C_M_AXI_WUSER_WIDTH(C_M_DCACHE_PORT_WUSER_WIDTH),
    .C_M_AXI_RUSER_WIDTH(C_M_DCACHE_PORT_RUSER_WIDTH),
    .C_M_AXI_BUSER_WIDTH(C_M_DCACHE_PORT_BUSER_WIDTH)
) aquila_M_DCACHE_PORT_inst (
    .RISCV_rst(RISCV_rst),
    .M_DCACHE_strobe(M_DCACHE_strobe),
    .M_DCACHE_addr(M_DCACHE_addr),
    .M_DCACHE_rw(M_DCACHE_rw),
    .M_DCACHE_dataout(M_DCACHE_dataout),
    .M_DCACHE_done(M_DCACHE_done),
    .M_DCACHE_datain(M_DCACHE_datain),

    .M_AXI_ACLK(cache_aclk),
    .M_AXI_ARESETN(cache_aresetn),
    .M_AXI_AWID(m_dcache_port_awid),
    .M_AXI_AWADDR(m_dcache_port_awaddr),
    .M_AXI_AWLEN(m_dcache_port_awlen),
    .M_AXI_AWSIZE(m_dcache_port_awsize),
    .M_AXI_AWBURST(m_dcache_port_awburst),
    .M_AXI_AWLOCK(m_dcache_port_awlock),
    .M_AXI_AWCACHE(m_dcache_port_awcache),
    .M_AXI_AWPROT(m_dcache_port_awprot),
    .M_AXI_AWQOS(m_dcache_port_awqos),
    .M_AXI_AWUSER(m_dcache_port_awuser),
    .M_AXI_AWVALID(m_dcache_port_awvalid),
    .M_AXI_AWREADY(m_dcache_port_awready),
    .M_AXI_WDATA(m_dcache_port_wdata),
    .M_AXI_WSTRB(m_dcache_port_wstrb),
    .M_AXI_WLAST(m_dcache_port_wlast),
    .M_AXI_WUSER(m_dcache_port_wuser),
    .M_AXI_WVALID(m_dcache_port_wvalid),
    .M_AXI_WREADY(m_dcache_port_wready),
    .M_AXI_BID(m_dcache_port_bid),
    .M_AXI_BRESP(m_dcache_port_bresp),
    .M_AXI_BUSER(m_dcache_port_buser),
    .M_AXI_BVALID(m_dcache_port_bvalid),
    .M_AXI_BREADY(m_dcache_port_bready),
    .M_AXI_ARID(m_dcache_port_arid),
    .M_AXI_ARADDR(m_dcache_port_araddr),
    .M_AXI_ARLEN(m_dcache_port_arlen),
    .M_AXI_ARSIZE(m_dcache_port_arsize),
    .M_AXI_ARBURST(m_dcache_port_arburst),
    .M_AXI_ARLOCK(m_dcache_port_arlock),
    .M_AXI_ARCACHE(m_dcache_port_arcache),
    .M_AXI_ARPROT(m_dcache_port_arprot),
    .M_AXI_ARQOS(m_dcache_port_arqos),
    .M_AXI_ARUSER(m_dcache_port_aruser),
    .M_AXI_ARVALID(m_dcache_port_arvalid),
    .M_AXI_ARREADY(m_dcache_port_arready),
    .M_AXI_RID(m_dcache_port_rid),
    .M_AXI_RDATA(m_dcache_port_rdata),
    .M_AXI_RRESP(m_dcache_port_rresp),
    .M_AXI_RLAST(m_dcache_port_rlast),
    .M_AXI_RUSER(m_dcache_port_ruser),
    .M_AXI_RVALID(m_dcache_port_rvalid),
    .M_AXI_RREADY(m_dcache_port_rready)
);

// Instantiation of the Axi Bus Interface M_DEVICE_PORT
aquila_M_DEVICE_PORT # (
    .C_M_AXI_ADDR_WIDTH(C_M_DEVICE_PORT_ADDR_WIDTH),
    .C_M_AXI_DATA_WIDTH(C_M_DEVICE_PORT_DATA_WIDTH)
) aquila_M_DEVICE_PORT_inst (
    .M_DEVICE_strobe(M_DEVICE_strobe),
    .M_DEVICE_addr(M_DEVICE_addr),
    .M_DEVICE_rw(M_DEVICE_rw),
    .M_DEVICE_byte_enable(M_DEVICE_byte_enable),
    .M_DEVICE_core2dev_data(M_DEVICE_core2dev_data),
    .M_DEVICE_data_ready(M_DEVICE_data_ready),
    .M_DEVICE_dev2core_data(M_DEVICE_dev2core_data),

    .M_AXI_ACLK(cfg_dev_aclk),
    .M_AXI_ARESETN(cfg_dev_aresetn),
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
    .clk(cfg_dev_aclk),
    .rst(RISCV_rst),
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

endmodule
