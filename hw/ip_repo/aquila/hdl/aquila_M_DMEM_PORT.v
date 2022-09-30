`timescale 1 ns / 1 ps
// =============================================================================
//  Program : core_axi_dmem_port.v
//  Author  : Jin-you Wu
//  Date    : June/02/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the AXI bus interface module between the processor core and the
//  external data memory module.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Sep/29/2020, by Chun-Jen Tsai:
//    Modify the module so that the burst length of the data request can
//    change on-the-fly. Also, removed some unnecessary logic & signals.
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

module aquila_M_DMEM_PORT #
(
    parameter MAX_CLSIZE       = `CLP,    // Size of a cache line in bits.
    parameter MAX_BURST_LEN    = `CLP/32, // Maximal Burst Length: 2^0~2^8 words.

    parameter AXI_ID_WIDTH     = 0,   // Thread ID Width.
    parameter AXI_ADDR_WIDTH   = 32,  // Width of the AXI addr bus.
    parameter AXI_DATA_WIDTH   = 32,  // Width of the AXI data bus.

    parameter AXI_AWUSER_WIDTH = 0,   // User Write Addr Bus width.
    parameter AXI_ARUSER_WIDTH = 0,   // User Read Addr Bus width.
    parameter AXI_WUSER_WIDTH  = 0,   // User Write Data Bus width.
    parameter AXI_RUSER_WIDTH  = 0,   // User Read Data Bus width.
    parameter AXI_BUSER_WIDTH  = 0    // User Response Bus width.
)
(
    // Users to add ports here
    input                           RISCV_rst,
    input                           M_DMEM_strobe,
    input  [AXI_ADDR_WIDTH-1 : 0]   M_DMEM_addr,
    input                           M_DMEM_rw,
    input  [MAX_CLSIZE-1: 0]        M_DMEM_dataout,
    output                          M_DMEM_done,
    output [MAX_CLSIZE-1: 0]        M_DMEM_datain,
    input  [7 : 0]                  M_DMEM_burst_len, // Length (NOT length-1)
                                                      // of the current request .
    // User ports ends

    // Global AXI system signals.
    input                           M_AXI_ACLK,    // AXI clock signal.
    input                           M_AXI_ARESETN, // AXI reset singal (Active Low).

    // Write Address Channel Signals.
    output [AXI_ID_WIDTH-1   : 0]   M_AXI_AWID,    // Write Addr ID.
    output [AXI_ADDR_WIDTH-1 : 0]   M_AXI_AWADDR,  // Write Address.
    output [7 : 0]                  M_AXI_AWLEN,   // The # of beats in a burst.
    output [2 : 0]                  M_AXI_AWSIZE,  // The size of a beat in a burst.
    output [1 : 0]                  M_AXI_AWBURST, // Burst type. For addr update.
    output                          M_AXI_AWLOCK,  // Lock type. For atomic op.
    output [3 : 0]                  M_AXI_AWCACHE, // Memory type.
    output [2 : 0]                  M_AXI_AWPROT,  // Protection (privilege) type.
    output [3 : 0]                  M_AXI_AWQOS,   // QoS identifier for write op.
    output [AXI_AWUSER_WIDTH-1 : 0] M_AXI_AWUSER,  // User-defined.
    output                          M_AXI_AWVALID, // Write addr/ctrl are valid.
    input                           M_AXI_AWREADY, // Slave ready to fetch addr.

    // Write Data Channel Signals.
    output                          M_AXI_WLAST,   // Flag last transfer in a burst.
    output [AXI_DATA_WIDTH-1 : 0]   M_AXI_WDATA,   // Write data.
    output [AXI_DATA_WIDTH/8-1 : 0] M_AXI_WSTRB,   // Write byte-enable.
    output                          M_AXI_WVALID,  // Write data is valid.
    input                           M_AXI_WREADY,  // Salve ready to fetch data.
    output [AXI_WUSER_WIDTH-1 : 0]  M_AXI_WUSER,   // User-defined.

    // Write Response Channel Signals.
    input  [AXI_ID_WIDTH-1 : 0]     M_AXI_BID,     // Write response ID.
    input  [1 : 0]                  M_AXI_BRESP,   // Write response.
    input  [AXI_BUSER_WIDTH-1 : 0]  M_AXI_BUSER,   // User-defined.
    input                           M_AXI_BVALID,  // Slave sent write response.
    output                          M_AXI_BREADY,  // Master ready for the response.

    // Read Address Channel Signals.
    output [AXI_ID_WIDTH-1 : 0]     M_AXI_ARID,    // Read Addr ID.
    output [AXI_ADDR_WIDTH-1 : 0]   M_AXI_ARADDR,  // Read Address.
    output [7 : 0]                  M_AXI_ARLEN,   // The # of beats in a burst.
    output [2 : 0]                  M_AXI_ARSIZE,  // The size of a beat in a burst.
    output [1 : 0]                  M_AXI_ARBURST, // Burst type. For addr update.
    output                          M_AXI_ARLOCK,  // Lock type. For atomic op.
    output [3 : 0]                  M_AXI_ARCACHE, // Memory type.
    output [2 : 0]                  M_AXI_ARPROT,  // Protection (privilege) type.
    output [3 : 0]                  M_AXI_ARQOS,   // QoS identifier for write op.
    output                          M_AXI_ARVALID, // Read addr/ctrl are valid.
    input                           M_AXI_ARREADY, // Slave ready to fetch addr.
    output [AXI_ARUSER_WIDTH-1 : 0] M_AXI_ARUSER,  // User-defined.

    // Read Data Channel Signals.
    input  [AXI_ID_WIDTH-1 : 0]     M_AXI_RID,     // Read data ID.
    input                           M_AXI_RLAST,   // Flag last transfer in a burst.
    input  [AXI_DATA_WIDTH-1 : 0]   M_AXI_RDATA,   // Read data.
    input  [1 : 0]                  M_AXI_RRESP,   // Read response.
    input                           M_AXI_RVALID,  // Read data is valid.
    output                          M_AXI_RREADY,  // Master ready to fetch data.
    input  [AXI_RUSER_WIDTH-1 : 0]  M_AXI_RUSER    // User-defined.
);

// Declare local parameters.
localparam BURST_IDX_W = $clog2(MAX_BURST_LEN);    // Width of burst counter.

// AXI4 internal temporary signals.
reg  [AXI_ADDR_WIDTH-1 : 0] axi_awaddr;
reg                         axi_awvalid;
reg  [AXI_DATA_WIDTH-1 : 0] axi_wdata;
reg                         axi_wlast;
reg                         axi_wvalid;
reg                         axi_bready;
reg  [AXI_ADDR_WIDTH-1 : 0] axi_araddr;
reg                         axi_arvalid;
reg                         axi_rready;

// The read/write burst transaction signals.
reg  [BURST_IDX_W : 0] read_index;         // Read beat count in a burst.
reg  [BURST_IDX_W : 0] write_index;        // Write beat count in a burst.
reg                    burst_read_trig;    // Trigger a read burst.
reg                    burst_write_trig;   // Trigger a write burst.
reg                    burst_read_active;  // A read burst is in progress.
reg                    burst_write_active; // A write burst is in progress.
reg                    burst_read_done;    // A read burst is complete.
reg                    burst_write_done;   // A write burst is complete.
wire                   rnext;              // Next read data in a burst is valid.
wire                   wnext;              // Next write data in a burst is valid.

// The buffer for one burst of read/write transactions.
// The burst length must be smaller than MAX_BURST_LEN or it will overflow.
reg  [AXI_DATA_WIDTH-1 : 0] rBuffer[0 : MAX_BURST_LEN-1];
reg  [AXI_DATA_WIDTH-1 : 0] wBuffer[0 : MAX_BURST_LEN-1];

// Interface response error flags.
wire write_resp_error;
wire read_resp_error;

// The FSM to perform one burst transaction.
localparam IDLE  = 0,
           READ  = 1,
           WRITE = 2,
           DONE  = 3;

reg [1: 0] S, S_nxt;

// ---------------------------
//  AXI bus port connections.
// ---------------------------
// 1. Write Address (AW) Channel.
assign M_AXI_AWID    = 'b0;
assign M_AXI_AWADDR  = axi_awaddr;
assign M_AXI_AWLEN   = M_DMEM_burst_len-1; // #data beats in a burst minus 1.
assign M_AXI_AWSIZE  = $clog2(AXI_DATA_WIDTH/8); // A beat has 2^AWSIZE bytes.
assign M_AXI_AWBURST = 2'b01;              // INCR burst type.
assign M_AXI_AWLOCK  = 1'b0;               // No bus lock.
assign M_AXI_AWCACHE = 4'b0010;            // 4'b0011 for coherent accesses thru ACP.
assign M_AXI_AWPROT  = 3'h0;
assign M_AXI_AWQOS   = 4'h0;
assign M_AXI_AWUSER  = 'b1;
assign M_AXI_AWVALID = axi_awvalid;

// 2. Write Data(W) Channel.
assign M_AXI_WDATA	= axi_wdata;
//assign M_AXI_WDATA = (boot_state == WRITE_DDRx)? buffer[write_index] : 32'b0;
assign M_AXI_WSTRB = {(AXI_DATA_WIDTH/8){1'b1}}; // Word-beat and aligned.
assign M_AXI_WLAST = axi_wlast;
assign M_AXI_WUSER = 'b0;
assign M_AXI_WVALID = axi_wvalid;

// 3. Write Response (B) Channel.
assign M_AXI_BREADY = axi_bready;

// 4. Read Address (AR) Channel.
assign M_AXI_ARID    = 'b0;
assign M_AXI_ARADDR  = axi_araddr;
assign M_AXI_ARLEN   = M_DMEM_burst_len-1; // #data beats in a burst minus 1.
assign M_AXI_ARSIZE  = $clog2(AXI_DATA_WIDTH/8); // A beat has 2^ARSIZE bytes.
assign M_AXI_ARBURST = 2'b01;              // INCR burst type.
assign M_AXI_ARLOCK  = 1'b0;               // No bus lock.
assign M_AXI_ARCACHE = 4'b0010;            // 4'b0011 for coherent accesses thru ACP.
assign M_AXI_ARPROT  = 3'h0;
assign M_AXI_ARQOS   = 4'h0;
assign M_AXI_ARUSER  = 'b1;
assign M_AXI_ARVALID = axi_arvalid;

// 5. Read and Read Response (R) Channel.
assign M_AXI_RREADY	= axi_rready;

// -----------------------
//  Write Address Channel
// -----------------------
// The purpose of the write address channel is to request the address and command
// information for the entire transaction.  It is a single beat of information.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_awvalid <= 1'b0;
    else if (~axi_awvalid && burst_write_trig) // If previously not valid,
        axi_awvalid <= 1'b1;                   //   start next transaction
    else if (M_AXI_AWREADY && axi_awvalid)     // Once asserted, VALIDs cannot be
            axi_awvalid <= 1'b0;               //   deasserted, so axi_awvalid
        else                                   //   must wait until transaction
            axi_awvalid <= axi_awvalid;        //   is accepted.
end


// Next address after AWREADY indicates previous address acceptance
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_awaddr <= 'b0;
    else if (S_nxt == WRITE)
        axi_awaddr <= M_DMEM_addr;
    else
        axi_awaddr <= axi_awaddr;
end


// --------------------
//  Write Data Channel
// --------------------
// The write data will continually try to push write data across the interface.
// The amount of data accepted will depend on the AXI slave and the AXI
// Interconnect settings, such as if there are FIFOs enabled in interconnect.

// Note that there is no explicit timing relationship to the write address channel.
// The write channel has its own throttling flag, separate from the AW channel.
// Synchronization between the channels must be determined by the user.

// The simpliest but lowest performance would be to only issue one address write
// and write data burst at a time.

assign wnext = M_AXI_WREADY & axi_wvalid;

// WVALID logic, similar to the axi_awvalid always block above
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_wvalid <= 1'b0;
    else if (~axi_wvalid && burst_write_trig) // If previously not valid,
        axi_wvalid <= 1'b1;                   //   start next transaction.
    else if (wnext && axi_wlast)  // If WREADY & too many writes, throttle
        axi_wvalid <= 1'b0;       //   WVALID. Once asserted, VALIDs can't
    else                          //   be deasserted, so it must wait until
        axi_wvalid <= axi_wvalid; //   burst is complete with WLAST.
end

// WLAST generation on the MSB of a counter underflow
// WVALID logic, similar to the axi_awvalid always block above
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_wlast <= 1'b0;
    // axi_wlast is asserted when the write index count reaches the penultimate
    // count to synchronize with the last write data when write_index is b1111.
    else if (((write_index == M_DMEM_burst_len-2 && M_DMEM_burst_len >= 2) && wnext) ||
             (M_DMEM_burst_len == 1))
        axi_wlast <= 1'b1;
    else if (wnext)        // Deassrt axi_wlast when the last write data has been
        axi_wlast <= 1'b0; // accepted by the slave with a valid response.
    else if (axi_wlast && M_DMEM_burst_len == 1)
        axi_wlast <= 1'b0;
    else
        axi_wlast <= axi_wlast;
end


// Burst length counter. Uses extra counter register bit to
//   indicate terminal count to reduce decode logic.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || burst_write_trig == 1'b1)
        write_index <= 0;
else if (wnext && (write_index != M_DMEM_burst_len - 1))
    write_index <= write_index + 1;
else
    write_index <= write_index;
end

// Write Data Generator. The data come from the write buffer.
always @(*)
begin
    if (M_AXI_ARESETN == 0)
        axi_wdata = 'b0;
    else
        axi_wdata = wBuffer[write_index];
end

// ----------------------------
//  Write Response (B) Channel
// ----------------------------
// The write response channel provides feedback that the write has committed
// to memory. BREADY will occur when all of the data and the write address
// has arrived and been accepted by the slave.

// The write issuance (number of outstanding write addresses) is started by
// the Address Write transfer, and is completed by a BREADY/BRESP.

// While negating BREADY will eventually throttle the AWREADY signal,
// it is best not to throttle the whole data channel this way.

// The BRESP bit [1] is used indicate any errors from the interconnect or
// slave for the entire write burst. This example will capture the error
// into the ERROR output.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_bready <= 1'b0;
    else if (M_AXI_BVALID && ~axi_bready) // Accept/ack bresp with axi_bready
        axi_bready <= 1'b1;               //   by the master when M_AXI_BVALID
    else if (axi_bready)                  //   is asserted by slave.
        axi_bready <= 1'b0;               // Deassert after one clock cycle.
    else
        axi_bready <= axi_bready;         // Retain the previous value.
end

// Flag any write response errors.
assign write_resp_error = axi_bready & M_AXI_BVALID & M_AXI_BRESP[1];


// ----------------------
//  Read Address Channel
// ----------------------
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_arvalid <= 1'b0;
    else if (~axi_arvalid && burst_read_trig) // If previously not valid,
        axi_arvalid <= 1'b1;                  //   start next transaction.
    else if (M_AXI_ARREADY && axi_arvalid)
        axi_arvalid <= 1'b0;
    else
        axi_arvalid <= axi_arvalid;
end

// Next address after ARREADY indicates previous address acceptance.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_araddr <= 'b0;
    else if (S == IDLE)
        axi_araddr <= M_DMEM_addr;
    else
        axi_araddr <= axi_araddr;
end


// ----------------------------------
//  Read Data (and Response) Channel
// ----------------------------------
// Forward movement occurs when the channel is valid and ready
assign rnext = M_AXI_RVALID && axi_rready;

// Burst length counter. Uses extra counter register bit to
// indicate terminal count to reduce decode logic.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || burst_read_trig)
        read_index <= 0;
    else if (rnext && (read_index != M_DMEM_burst_len - 1))
        read_index <= read_index + 1;
    else
        read_index <= read_index;
end

// The Read Data channel returns the results of the read request.
// In this example the data checker is always able to accept more data,
// so no need to throttle the RREADY signal.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        axi_rready <= 1'b0;
    else if (M_AXI_RVALID) // accept/ack rdata/rresp with axi_rready by the master
    begin                  // when M_AXI_RVALID is asserted by slave.
        axi_rready <= (M_AXI_RLAST && axi_rready)? 1'b0 : 1'b1;
    end
end

// Read data fetcher. The data are fetched into the read buffer.
always @(posedge M_AXI_ACLK)
begin
    if (rnext)
        rBuffer[read_index] <= M_AXI_RDATA;
end

// Flag any read response errors.
assign read_resp_error = axi_rready & M_AXI_RVALID & M_AXI_RRESP[1];

// --------------------------------------------------------------------------------
//  burst_read_trig is controlled by AXI BUS state machine
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_read_trig <= 1'b0;
    else if (S_nxt == READ)
    begin
        if (~axi_arvalid && ~burst_read_active && ~burst_read_trig)
            burst_read_trig <= 1'b1;
        else
            burst_read_trig <= 1'b0; //Negate to generate a pulse
    end
    else
        burst_read_trig <= 1'b0;
end

// burst_write_trig is controlled by AXI BUS state machine
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_write_trig <= 1'b0;
    else if (S_nxt == WRITE)
    begin
        if (~axi_awvalid && ~burst_write_trig && ~burst_write_active)
            burst_write_trig <= 1'b1;
        else
            burst_write_trig <= 1'b0; //Negate to generate a pulse
    end
    else
        burst_write_trig <= 1'b0;
end
// --------------------------------------------------------------------------------

// burst_write_active signal is asserted when there is a burst write transaction
// is initiated by the assertion of burst_write_trig. The burst_write_active
// signal remains asserted until the burst write is accepted by the slave
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_write_active <= 1'b0;

    // The burst_write_active is asserted when a write burst transaction is initiated
    else if (burst_write_trig)
        burst_write_active <= 1'b1;
    else if (M_AXI_BVALID && axi_bready)
        burst_write_active <= 0;
end

// Check for last write completion.

// This logic is to qualify the last write count with the final write
// response. This demonstrates how to confirm that a write has been
// committed.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_write_done <= 1'b0;

    //The burst_write_done should be associated with a bready response
    else if (M_AXI_BVALID && (write_index == M_DMEM_burst_len - 1) && axi_bready)
        burst_write_done <= 1'b1;
    else if (burst_write_done == 1'b1)
        burst_write_done <= 1'b0;
    else
        burst_write_done <= burst_write_done;
end

// burst_read_active signal is asserted when there is a burst read transaction
// is initiated by the assertion of burst_read_trig. The burst_read_trig
// signal remains asserted until the burst read is accepted by the master.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_read_active <= 1'b0;

    //The burst_write_active is asserted when a write burst transaction is initiated
    else if (burst_read_trig)
        burst_read_active <= 1'b1;
    else if (M_AXI_RVALID && axi_rready && M_AXI_RLAST)
        burst_read_active <= 0;
end

// Check for last read completion.

// This logic is to qualify the last read count with the final read
// response. This demonstrates how to confirm that a read has been
// committed.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        burst_read_done <= 1'b0;

    //The burst_read_done should be associated with a rready response
    else if (M_AXI_RVALID && axi_rready && (read_index == M_DMEM_burst_len - 1))
        burst_read_done <= 1'b1;
    else if (burst_read_done == 1'b1)
        burst_read_done <= 1'b0;
    else
        burst_read_done <= burst_read_done;
end

// -----------------------------------------------------------------------------
// The main controller for I-Cache

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        S <= IDLE;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        IDLE:
            if (M_DMEM_strobe)
                S_nxt = (M_DMEM_rw) ? WRITE : READ;
            else
                S_nxt = IDLE;
        READ:
            if (burst_read_done)
                S_nxt = DONE;
            else
                S_nxt = READ;
        WRITE:
            if (burst_write_done)
                S_nxt = DONE;
            else
                S_nxt = WRITE;
        DONE:
            S_nxt = IDLE;
    endcase
end

`ifdef ARTY
always @(posedge M_AXI_ACLK)
begin
    wBuffer[0] <= M_DMEM_dataout[127: 96];
    wBuffer[1] <= M_DMEM_dataout[ 95: 64];
    wBuffer[2] <= M_DMEM_dataout[ 63: 32];
    wBuffer[3] <= M_DMEM_dataout[ 31: 0];
end

assign M_DMEM_done = ( ( (S == READ) && burst_read_done) || ( (S == WRITE) && burst_write_done ) );
assign M_DMEM_datain = (M_DMEM_done) ? {rBuffer[0], rBuffer[1], rBuffer[2], rBuffer[3]} : {MAX_CLSIZE{1'b0}};

`else // KC705

always @(posedge M_AXI_ACLK)
begin
    wBuffer[0] <= M_DMEM_dataout[255: 224];
    wBuffer[1] <= M_DMEM_dataout[223: 192];
    wBuffer[2] <= M_DMEM_dataout[191: 160];
    wBuffer[3] <= M_DMEM_dataout[159: 128];
    wBuffer[4] <= M_DMEM_dataout[127: 96];
    wBuffer[5] <= M_DMEM_dataout[ 95: 64];
    wBuffer[6] <= M_DMEM_dataout[ 63: 32];
    wBuffer[7] <= M_DMEM_dataout[ 31: 0];
end

assign M_DMEM_done = ( ( (S == READ) && burst_read_done) || ( (S == WRITE) && burst_write_done ) );
assign M_DMEM_datain = (M_DMEM_done) ? {rBuffer[0], rBuffer[1], rBuffer[2], rBuffer[3],
        rBuffer[4], rBuffer[5], rBuffer[6], rBuffer[7]} : {MAX_CLSIZE{1'b0}};
`endif

endmodule
