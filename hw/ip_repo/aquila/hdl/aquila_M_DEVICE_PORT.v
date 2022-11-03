`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila_M_DEVICE_PORT.v
//  Author  : Chun-Jen Tsai
//  Date    : Oct/05/2019
// -----------------------------------------------------------------------------
//  Description:
//  This code implements the uncached memory access port of Aquila.  This port
//  is usually used for I/O device accesses.
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

module aquila_M_DEVICE_PORT #
(
    parameter integer C_M_AXI_ADDR_WIDTH = 32, // Width of the AXI addr bus.
    parameter integer C_M_AXI_DATA_WIDTH = 32  // Width of the AXI data bus.
)
(
    input wire M_AXI_ACLK,       // AXI bus clock signal.
    input wire M_AXI_ARESETN,    // AXI bus reset singal (Active Low).

    // Interface signals between Aquila and the AXI-Lite device master port.
    input                                M_DEVICE_strobe,
    input  [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_addr,
    input                                M_DEVICE_rw,
    input  [ C_M_AXI_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable,
    input  [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_data_i,
    output                               M_DEVICE_data_ready,
    output [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_data_o,

    // Write Address Channel Signals.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_AWADDR, // Write Address.
    output wire [2 : 0] M_AXI_AWPROT, // Protection type. The privilege level.
    output wire M_AXI_AWVALID,   // Write request, addr/ctrl signals are valid.
    input  wire M_AXI_AWREADY,   // Write ack, slave ready to fetch addr/ctrl.

    // Write Data Channel Signals.
    output wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_WDATA,  // Write data.
    output wire [C_M_AXI_DATA_WIDTH / 8 - 1 : 0] M_AXI_WSTRB, // Byte-enable.
    output wire M_AXI_WVALID,   // Write data (and byte-enable strobe) is valid.
    input  wire M_AXI_WREADY,   // Write ready. Salve is ready to accept data.

    // Write Response Channel Signals.
    input  wire [1 : 0] M_AXI_BRESP, // Write response.
    input  wire M_AXI_BVALID,        // Slave has the write response valid.
    output wire M_AXI_BREADY,        // Master is ready to accept the response.

    // Read Address Channel Signals.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_ARADDR, // Read Address.
    output wire [2 : 0] M_AXI_ARPROT, // Protection type. The privilege level.
    output wire M_AXI_ARVALID, // Read request, addr/ctrl signals are valid.
    input  wire M_AXI_ARREADY, // Read ack, slave ready to fetch addr/ctrl.

    // Read Data Channel Signals.
    input  wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_RDATA, // Read data.
    input  wire [1 : 0] M_AXI_RRESP,                      // Read response.
    input  wire M_AXI_RVALID,  // The read data from the slave is valid.
    output wire M_AXI_RREADY   // Master is ready to accept the read data.
);

// AXI4Lite internal temp signals.
reg axi_awvalid;
reg axi_wvalid;
reg axi_arvalid;
reg axi_rready;
reg axi_bready;
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] axi_awaddr;
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] axi_araddr;

// Interface response error flags.
wire write_resp_error;
wire read_resp_error;

// user-defined signals
reg [ C_M_AXI_DATA_WIDTH - 1 : 0] fetched_data; // Fetched data from the bus.
reg write_done;   // Flags the completion of the write transaction.
reg read_done;    // Flags the completion of the read transaction.

// I/O Connections assignments

// Write Address (AW)
assign M_AXI_AWADDR	 = axi_awaddr;
assign M_AXI_AWPROT  = 3'b000;
assign M_AXI_AWVALID = axi_awvalid;

// Write Data(W)
assign M_AXI_WVALID = axi_wvalid;
assign M_AXI_WSTRB  = M_DEVICE_byte_enable;

// Write Response (B)
assign M_AXI_BREADY = axi_bready;

// Read Address (AR)
assign M_AXI_ARADDR = axi_araddr;
assign M_AXI_ARVALID = axi_arvalid;
assign M_AXI_ARPROT = 3'b000;

//Read and Read Response (R)
assign M_AXI_RREADY = axi_rready;

// Flag any write errors.
assign write_resp_error = axi_bready & M_AXI_BVALID & M_AXI_BRESP[1];

// Flag any read response errors.
assign read_resp_error = axi_rready & M_AXI_RVALID & M_AXI_RRESP[1];

// Single-cycle signal that flags the completion of a transaction.
assign M_DEVICE_data_ready = write_done || read_done;

// -----------------------
//  Write Address Channel
// -----------------------
// The write address channel requests the address and command information
// for the entire transaction.  It is a single beat of information.
// Typically, the axi_awvalid/axi_wvalid are asserted at the same time,
// and then each is deasserted independent from each other.
// AXI VALID signals must be held active until accepted by the partner.

// A data transfer is accepted by the slave when a master has VALID data
// and the slave acknowledges its READY. A master is allowed to
// generated multiple, back-to-back requests by not deasserting VALID.
always @(posedge M_AXI_ACLK)
begin
    // Only VALID signals must be deasserted during reset per AXI spec.
    // Consider inverting then registering active-low reset for higher fmax.
    if (M_AXI_ARESETN == 0)
        axi_awvalid <= 0;
    else if (M_DEVICE_strobe && M_DEVICE_rw) // Signal a new write request.
        axi_awvalid <= 1;
    else if (M_AXI_AWREADY && axi_awvalid) // Address accepted by the slave
        axi_awvalid <= 0;                  //  (slave issued M_AXI_AWREADY).
    else
        axi_awvalid <= axi_awvalid;
end

always @(posedge M_AXI_ACLK) // Write Addresses
begin
    if (M_AXI_ARESETN == 0)
        axi_awaddr <= 0;
    else if (M_DEVICE_strobe && M_DEVICE_rw)
        axi_awaddr <= M_DEVICE_addr;
end

// --------------------
//  Write Data Channel
// --------------------
// The write data channel is for transfering the actual data.

// Signaling valid write data on the bus.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_wvalid <= 0;
    else if (M_DEVICE_strobe && M_DEVICE_rw)
        axi_wvalid <= 1;                 // Signal that data is on WDATA.
    else if (M_AXI_WREADY && axi_wvalid) // Data accepted by the slave
        axi_wvalid <= 0;                 //  (slave issued M_AXI_WREADY).
    else
        axi_wvalid <= axi_wvalid;
end

// Write data generation.
assign M_AXI_WDATA = M_DEVICE_data_i;

// ----------------------------
//  Write Response (B) Channel
// ----------------------------
// The write response channel provides feedback that the write has committed
// to memory. BREADY will occur after both the data and the write address
// has arrived and been accepted by the slave, and can guarantee that no
// other accesses launched afterwards will be able to be reordered before it.

// The BRESP bit [1] is used indicate any errors from the interconnect or
// slave for the entire write burst. This example will capture the error.

// While not necessary per spec, it is advisable to reset READY signals in
// case of differing reset latencies between master/slave.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_bready <= 0;
    else if (M_AXI_BVALID && ~axi_bready) // Accept/ack. bresp with axi_bready
        axi_bready <= 1;                  // by the master when M_AXI_BVALID
    else if (axi_bready)                  // is asserted by slave.
        axi_bready <= 0;                  // Deassert after one clock cycle.
    else
        axi_bready <= axi_bready;         // Retain the previous value.
end

// ----------------------
//  Read Address Channel
// ----------------------
// A new axi_arvalid is asserted when there is a valid read address
// available by the master. read_trigger triggers a new read transaction.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_arvalid <= 0;
    else if (M_DEVICE_strobe && !M_DEVICE_rw) // Signal a new read request.
        axi_arvalid <= 1;
    else if (M_AXI_ARREADY && axi_arvalid)    // Address accepted by the slave
        axi_arvalid <= 0;                     //  (slave issued M_AXI_ARREADY).
end

always @(posedge M_AXI_ACLK) // Read Addresses
begin
    if (M_AXI_ARESETN == 0)
        axi_araddr <= 0;
    else if (M_DEVICE_strobe && !M_DEVICE_rw)
        axi_araddr <= M_DEVICE_addr;
end

// ----------------------------------
//  Read Data (and Response) Channel
// ----------------------------------
// The Read Data channel returns the results of the read request. The master
// will accept the read data by asserting axi_rready when a valid read data
// is available. While not necessary per spec, it is advisable to reset
// READY signals in case of differing reset latencies between master/slave.

// Signaling valid read data on the bus.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_rready <= 0;
    else if (M_AXI_RVALID && ~axi_rready) // Accept/ack. rdata/rresp with
        axi_rready <= 1;                  // axi_rready by the master when
    else if (axi_rready)                  // M_AXI_RVALID is asserted by slave.
        axi_rready <= 0;                  // Deassert after one clock cycle.
end

// Read data generation.
assign M_DEVICE_data_o = fetched_data;

always @(posedge M_AXI_ACLK) // Read Addresses
begin
    if (M_AXI_ARESETN == 0)
        fetched_data <= 32'b0;
    else if (M_AXI_RVALID)
        fetched_data <= M_AXI_RDATA;
end

// ----------------------------------
//  User Logics
// ----------------------------------

// Check for write_done completion.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_BVALID && axi_bready) // The write_done should be associated
        write_done <= 1;            //     with a bready response.
    else
        write_done <= 0;
end

// Check for read_done completion.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_RVALID && axi_rready) // The read_done should be associated
    read_done <= 1;                 //     with a rready response.
else
    read_done <= 0;
end

endmodule

