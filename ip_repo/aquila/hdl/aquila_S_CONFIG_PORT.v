
`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila_S_CONFIG_PORT.v
//  Author  : Chun-Jen Tsai
//  Date    : Oct/08/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the Aquila SoC system registers module. Currently, two out of eight
//  system registers are used to store Aquila SoC system parameters.  This file
//  is generated using Vivado IP wizard, with quite a few manual modifications.
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

module aquila_S_CONFIG_PORT #
(
    parameter integer C_S_AXI_DATA_WIDTH = 32, // Width of S_AXI data bus
    parameter integer C_S_AXI_ADDR_WIDTH = 4   // Width of S_AXI address bus
)
(
    // Users to add ports here ////////////////////////////////////////////////
    output RISCV_rst,                            // Level-sensitive reset.
    output [C_S_AXI_DATA_WIDTH-1 : 0] base_addr, // Base address of DDRx DRAM. 
    // User ports ends ////////////////////////////////////////////////////////

    input  wire S_AXI_ACLK,      // AXI bus clock signal.
    input  wire S_AXI_ARESETN,   // AXI bus reset singal (Active Low).

    // Write Address Channel (issued by master, acceped by Slave).
    input  wire [C_S_AXI_ADDR_WIDTH - 1 : 0] S_AXI_AWADDR, // Write Address.
    input  wire [2 : 0] S_AXI_AWPROT, // Protection type. The privilege level.
    input  wire S_AXI_AWVALID,   // Write request, addr/ctrl signals are valid.
    output wire S_AXI_AWREADY,   // Write ack, slave ready to fetch addr/ctrl.

    // Write Data Channel (issued by master, acceped by Slave).
    input  wire [C_S_AXI_DATA_WIDTH - 1 : 0] S_AXI_WDATA,  // Write data.
    input  wire [(C_S_AXI_DATA_WIDTH / 8) - 1 : 0] S_AXI_WSTRB, // Byte-enable.
    input  wire S_AXI_WVALID,   // Write data (and byte-enable strobe) is valid.
    output wire S_AXI_WREADY,   // Write ready. Salve is ready to accept data.

    // Write Response Channel.
    output wire [1 : 0] S_AXI_BRESP,  // Write response.
    output wire S_AXI_BVALID,         // Slave has the write response valid.
    input  wire S_AXI_BREADY,         // Master is ready to accept the response.

    // Read Address Channel (issued by master, acceped by Slave).
    input  wire [C_S_AXI_ADDR_WIDTH - 1 : 0] S_AXI_ARADDR, // Read Address.
    input  wire [2 : 0] S_AXI_ARPROT, // Protection type. The privilege level.
    input  wire S_AXI_ARVALID, // Read request, addr/ctrl signals are valid.
    output wire S_AXI_ARREADY, // Read ack, slave ready to fetch addr/ctrl.

    // Read Data Channel (issued by slave).
    output wire [C_S_AXI_DATA_WIDTH - 1 : 0] S_AXI_RDATA, // Read data.
    output wire [1 : 0] S_AXI_RRESP,                      // Read response.
    output wire S_AXI_RVALID,  // The read data from the slave is valid.
    input  wire S_AXI_RREADY   // Master is ready to accept the read data.
);

// AXI4Lite internal temp signals.
reg [C_S_AXI_ADDR_WIDTH - 1 : 0] axi_awaddr;
reg                              axi_awready;
reg                              axi_wready;
reg [1 : 0]                      axi_bresp;
reg                              axi_bvalid;
reg [C_S_AXI_ADDR_WIDTH - 1 : 0] axi_araddr;
reg                              axi_arready;
reg [C_S_AXI_DATA_WIDTH - 1 : 0] axi_rdata;
reg [1 : 0]                      axi_rresp;
reg                              axi_rvalid;

// Example-specific design signals
// local parameter for addressing 32 bit / 64 bit C_S_AXI_DATA_WIDTH
// ADDR_LSB is used for addressing 32/64 bit registers/memories
// ADDR_LSB = 2 for 32 bits (n downto 2)
// ADDR_LSB = 3 for 64 bits (n downto 3)
localparam integer ADDR_LSB = (C_S_AXI_DATA_WIDTH / 32) + 1;
localparam integer OPT_MEM_ADDR_BITS = 2;

//----------------------------------------------
// Aquila system registers
//------------------------------------------------
reg [C_S_AXI_DATA_WIDTH - 1: 0] slv_reg0;     // Aquila reset control.
reg [C_S_AXI_DATA_WIDTH - 1: 0] slv_reg1;     // Boot code address.
reg [C_S_AXI_DATA_WIDTH - 1: 0] slv_reg2;     // unused.
reg [C_S_AXI_DATA_WIDTH - 1: 0] slv_reg3;     // unused.
wire                            slv_reg_rden;
wire                            slv_reg_wren;
reg [C_S_AXI_DATA_WIDTH - 1: 0] reg_data_out;
integer                         byte_index;
reg                             aw_en;

// I/O Connections assignments
assign S_AXI_AWREADY = axi_awready;
assign S_AXI_WREADY  = axi_wready;
assign S_AXI_BRESP   = axi_bresp;
assign S_AXI_BVALID  = axi_bvalid;
assign S_AXI_ARREADY = axi_arready;
assign S_AXI_RDATA   = axi_rdata;
assign S_AXI_RRESP   = axi_rresp;
assign S_AXI_RVALID  = axi_rvalid;

// Implement axi_awready generation
// axi_awready is asserted for one S_AXI_ACLK clock cycle when both
// S_AXI_AWVALID and S_AXI_WVALID are asserted. axi_awready is
// de-asserted when reset is low.
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_awready <= 1'b0;
        aw_en <= 1'b1;
    end
    else
    begin
        if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID && aw_en)
        begin
            // slave is ready to accept write address when
            // there is a valid write address and write data
            // on the write address and data bus. This design
            // expects no outstanding transactions.
            axi_awready <= 1'b1;
            aw_en <= 1'b0;
        end
        else if (S_AXI_BREADY && axi_bvalid)
        begin
            aw_en <= 1'b1;
            axi_awready <= 1'b0;
        end
        else
        begin
            axi_awready <= 1'b0;
        end
    end
end

// Implement axi_awaddr latching
// This process is used to latch the address when both
// S_AXI_AWVALID and S_AXI_WVALID are valid.
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_awaddr <= 0;
    end
    else
    begin
        if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID && aw_en)
        begin
            // Write Address latching
            axi_awaddr <= S_AXI_AWADDR;
        end
    end
end

// Implement axi_wready generation
// axi_wready is asserted for one S_AXI_ACLK clock cycle when both
// S_AXI_AWVALID and S_AXI_WVALID are asserted. axi_wready is
// de-asserted when reset is low.
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_wready <= 1'b0;
    end
    else
    begin
        if (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID && aw_en )
        begin
            // slave is ready to accept write data when
            // there is a valid write address and write data
            // on the write address and data bus. This design
            // expects no outstanding transactions.
            axi_wready <= 1'b1;
        end
        else
        begin
            axi_wready <= 1'b0;
        end
    end
end

// Implement memory mapped register select and write logic generation
// The write data is accepted and written to memory mapped registers when
// axi_awready, S_AXI_WVALID, axi_wready and S_AXI_WVALID are asserted.
// Write strobes are used to select byte enables of slave registers while
// writing. These registers are cleared when reset (active low) is applied.
// Slave register write enable is asserted when valid address and data are
// available and the slave is ready to accept the write address and data.

assign slv_reg_wren = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;

always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        slv_reg0 <= 1;  // Put the Aquila core in frozen mode at platform reset.
        slv_reg1 <= 0;
        slv_reg2 <= 0;
        slv_reg3 <= 0;
    end
    else
    begin
        if (slv_reg_wren)
        begin
            case ( axi_awaddr[ADDR_LSB + OPT_MEM_ADDR_BITS: ADDR_LSB] )
                4'h0:
                    for ( byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH / 8) - 1; byte_index = byte_index + 1 )
                        if ( S_AXI_WSTRB[byte_index] == 1 )
                        begin
                            // Respective byte enables are asserted as per write strobes
                            // Slave register 0
                            slv_reg0[(byte_index * 8) +: 8] <= S_AXI_WDATA[(byte_index * 8) +: 8];
                        end
                4'h1:
                    for ( byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH / 8) - 1; byte_index = byte_index + 1 )
                        if ( S_AXI_WSTRB[byte_index] == 1 )
                        begin
                            // Respective byte enables are asserted as per write strobes
                            // Slave register 1
                            slv_reg1[(byte_index * 8) +: 8] <= S_AXI_WDATA[(byte_index * 8) +: 8];
                        end
                4'h2:
                    for ( byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH / 8) - 1; byte_index = byte_index + 1 )
                        if ( S_AXI_WSTRB[byte_index] == 1 )
                        begin
                            // Respective byte enables are asserted as per write strobes
                            // Slave register 2
                            slv_reg2[(byte_index * 8) +: 8] <= S_AXI_WDATA[(byte_index * 8) +: 8];
                        end
                4'h3:
                    for ( byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH / 8) - 1; byte_index = byte_index + 1 )
                        if ( S_AXI_WSTRB[byte_index] == 1 )
                        begin
                            // Respective byte enables are asserted as per write strobes
                            // Slave register 3
                            slv_reg3[(byte_index * 8) +: 8] <= S_AXI_WDATA[(byte_index * 8) +: 8];
                        end
                default :
                begin
                    slv_reg0 <= slv_reg0;
                    slv_reg1 <= slv_reg1;
                    slv_reg2 <= slv_reg2;
                    slv_reg3 <= slv_reg3;
                end
            endcase
        end
    end
end

// Implement write response logic generation
// The write response and response valid signals are asserted by the slave
// when axi_wready, S_AXI_WVALID, axi_wready and S_AXI_WVALID are asserted.
// This marks the acceptance of address and indicates the status of
// write transaction.
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_bvalid <= 0;
        axi_bresp <= 2'b0;
    end
    else
    begin
        if (axi_awready && S_AXI_AWVALID && ~axi_bvalid && axi_wready && S_AXI_WVALID)
        begin
            // indicates a valid write response is available
            axi_bvalid <= 1'b1;
            axi_bresp <= 2'b0; // 'OKAY' response
        end                   // work error responses in future
        else
        begin
            if (S_AXI_BREADY && axi_bvalid)
                //check if bready is asserted while bvalid is high)
                //(there is a possibility that bready is always asserted high)
            begin
                axi_bvalid <= 1'b0;
            end
        end
    end
end

// Implement axi_arready generation
// axi_arready is asserted for one S_AXI_ACLK clock cycle when
// S_AXI_ARVALID is asserted. axi_awready is
// de-asserted when reset (active low) is asserted.
// The read address is also latched when S_AXI_ARVALID is
// asserted. axi_araddr is reset to zero on reset assertion.
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_arready <= 1'b0;
        axi_araddr <= 32'b0;
    end
    else
    begin
        if (~axi_arready && S_AXI_ARVALID)
        begin
            // indicates that the slave has acceped the valid read address
            axi_arready <= 1'b1;
            // Read address latching
            axi_araddr <= S_AXI_ARADDR;
        end
        else
        begin
            axi_arready <= 1'b0;
        end
    end
end

// Implement axi_arvalid generation
// axi_rvalid is asserted for one S_AXI_ACLK clock cycle when both
// S_AXI_ARVALID and axi_arready are asserted. The slave registers
// data are available on the axi_rdata bus at this instance. The
// assertion of axi_rvalid marks the validity of read data on the
// bus and axi_rresp indicates the status of read transaction.axi_rvalid
// is deasserted on reset (active low). axi_rresp and axi_rdata are
// cleared to zero on reset (active low).
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_rvalid <= 0;
        axi_rresp <= 0;
    end
    else
    begin
        if (axi_arready && S_AXI_ARVALID && ~axi_rvalid)
        begin
            // Valid read data is available at the read data bus
            axi_rvalid <= 1'b1;
            axi_rresp <= 2'b0; // 'OKAY' response
        end
        else if (axi_rvalid && S_AXI_RREADY)
        begin
            // Read data is accepted by the master
            axi_rvalid <= 1'b0;
        end
    end
end

// Implement memory mapped register select and read logic generation
// Slave register read enable is asserted when valid address is available
// and the slave is ready to accept the read address.
assign slv_reg_rden = axi_arready & S_AXI_ARVALID & ~axi_rvalid;
always @(*)
begin
    // Address decoding for reading registers
    case ( axi_araddr[ADDR_LSB+OPT_MEM_ADDR_BITS:ADDR_LSB] )
        3'h0   : reg_data_out <= slv_reg0;
        3'h1   : reg_data_out <= slv_reg1;
        3'h2   : reg_data_out <= slv_reg2;
        3'h3   : reg_data_out <= slv_reg3;
        default : reg_data_out <= 0;
    endcase
end

// Output register or memory read data
always @( posedge S_AXI_ACLK )
begin
    if ( S_AXI_ARESETN == 1'b0 )
    begin
        axi_rdata <= 0;
    end
    else
    begin
        // When there is a valid read address (S_AXI_ARVALID) with
        // acceptance of read address by the slave (axi_arready),
        // output the read data
        if (slv_reg_rden)
        begin
            axi_rdata <= reg_data_out;     // register read data
        end
    end
end

// Add user logic here ////////////////////////////////////////////////////////
assign RISCV_rst = ( | slv_reg0);
assign base_addr = slv_reg1;
// User logic ends  ///////////////////////////////////////////////////////////

endmodule
