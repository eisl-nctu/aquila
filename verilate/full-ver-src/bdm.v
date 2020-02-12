// =============================================================================
//  Program : bdm.v
//  Author  : Chun-Jen Tsai
//  Date    : Sep/01/2019
// -----------------------------------------------------------------------------
//  Description:
//  This HDL code is the top-level module of the Boot Debug Module of a
//  general-purpose processor-core.
//
//  The implementation is generated using the Xilinx Vivado AXI4 IP template,
//  with some additional user signals passing between AXI bus ports.
//
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
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

`timescale 1 ns / 1 ps

module aquila_mock_bdm #
(
    // DDRx starting address of the boot code.
    parameter C_BOOT_CODE_ADDR                     = 32'hB000_0000,

    // Parameters of Axi Master Bus Interface M_BOOT_PORT
    parameter integer C_M_BOOT_PORT_ADDR_WIDTH     = 32,
    parameter integer C_M_BOOT_PORT_DATA_WIDTH     = 32,

    // Parameters of Axi Master Bus Interface M_ROM_CP_PORT
    parameter integer C_M_ROM_CP_PORT_ID_WIDTH     = 1,
    parameter integer C_M_ROM_CP_PORT_ADDR_WIDTH   = 32,
    parameter integer C_M_ROM_CP_PORT_DATA_WIDTH   = 32,
    parameter integer C_M_ROM_CP_PORT_AWUSER_WIDTH = 0,
    parameter integer C_M_ROM_CP_PORT_ARUSER_WIDTH = 0,
    parameter integer C_M_ROM_CP_PORT_WUSER_WIDTH  = 0,
    parameter integer C_M_ROM_CP_PORT_RUSER_WIDTH  = 0,
    parameter integer C_M_ROM_CP_PORT_BUSER_WIDTH  = 0
)
(
    input boot_ready,
    // Ports of Axi Master Bus Interface M_BOOT_PORT
    input wire  boot_aclk,
    input wire  boot_aresetn,
    output wire [C_M_BOOT_PORT_ADDR_WIDTH - 1 : 0] m_boot_port_awaddr,
    output wire [2 : 0] m_boot_port_awprot,
    output wire m_boot_port_awvalid,
    input wire  m_boot_port_awready,
    output wire [C_M_BOOT_PORT_DATA_WIDTH - 1 : 0] m_boot_port_wdata,
    output wire [C_M_BOOT_PORT_DATA_WIDTH / 8 - 1 : 0] m_boot_port_wstrb,
    output wire m_boot_port_wvalid,
    input wire  m_boot_port_wready,
    input wire [1 : 0] m_boot_port_bresp,
    input wire  m_boot_port_bvalid,
    output wire m_boot_port_bready,
    output wire [C_M_BOOT_PORT_ADDR_WIDTH - 1 : 0] m_boot_port_araddr,
    output wire [2 : 0] m_boot_port_arprot,
    output wire m_boot_port_arvalid,
    input wire  m_boot_port_arready,
    input wire [C_M_BOOT_PORT_DATA_WIDTH - 1 : 0] m_boot_port_rdata,
    input wire [1 : 0] m_boot_port_rresp,
    input wire  m_boot_port_rvalid,
    output wire m_boot_port_rready
);


// Instantiation of Axi-Lite Bus Interface M_BOOT_PORT
bdm_M_BOOT_PORT # (
    .C_BOOT_CODE_ADDR(C_BOOT_CODE_ADDR),
    .C_M_AXI_ADDR_WIDTH(C_M_BOOT_PORT_ADDR_WIDTH),
    .C_M_AXI_DATA_WIDTH(C_M_BOOT_PORT_DATA_WIDTH)
) bdm_M_BOOT_PORT_inst (
    .boot_code_ready(boot_ready),
    .M_AXI_ACLK(boot_aclk),
    .M_AXI_ARESETN(boot_aresetn),
    .M_AXI_AWADDR(m_boot_port_awaddr),
    .M_AXI_AWPROT(m_boot_port_awprot),
    .M_AXI_AWVALID(m_boot_port_awvalid),
    .M_AXI_AWREADY(m_boot_port_awready),
    .M_AXI_WDATA(m_boot_port_wdata),
    .M_AXI_WSTRB(m_boot_port_wstrb),
    .M_AXI_WVALID(m_boot_port_wvalid),
    .M_AXI_WREADY(m_boot_port_wready),
    .M_AXI_BRESP(m_boot_port_bresp),
    .M_AXI_BVALID(m_boot_port_bvalid),
    .M_AXI_BREADY(m_boot_port_bready),
    .M_AXI_ARADDR(m_boot_port_araddr),
    .M_AXI_ARPROT(m_boot_port_arprot),
    .M_AXI_ARVALID(m_boot_port_arvalid),
    .M_AXI_ARREADY(m_boot_port_arready),
    .M_AXI_RDATA(m_boot_port_rdata),
    .M_AXI_RRESP(m_boot_port_rresp),
    .M_AXI_RVALID(m_boot_port_rvalid),
    .M_AXI_RREADY(m_boot_port_rready)
);

endmodule
