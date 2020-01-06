// =============================================================================
//  Program : bdm_M_ROM_CP_PORT.v
//  Author  : Chun-Jen Tsai
//  Date    : Sep/01/2019
// -----------------------------------------------------------------------------
//  Description:
//  This HDL code is an implementation of the Boot Master Port of the
//  Boot Debug Module (BDM) of a general-purpose processor core. The BDM
//  copies the boot ROM code into the DDRx DRAM through this port, and send
//  the inital program counter addresses to the Trigger Master Port BDM
//  to activate the processor.
//
//  The implementation of the five AXI bus channels and most of the general
//  comments on the AXI bus signals comes from the Xilinx Vivado AXI4 Master
//  IP template.
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

module bdm_M_ROM_CP_PORT #
(
    parameter C_BOOT_CODE_ADDR             = 32'h0000_0000,

    parameter integer C_M_AXI_ID_WIDTH     = 0,  // Thread ID Width.
    parameter integer C_M_AXI_ADDR_WIDTH   = 32, // Width of the AXI addr bus.
    parameter integer C_M_AXI_DATA_WIDTH   = 32, // Width of the AXI data bus.

    parameter integer C_M_AXI_AWUSER_WIDTH = 0,  // User Write Addr Bus width.
    parameter integer C_M_AXI_ARUSER_WIDTH = 0,  // User Read Addr Bus width.
    parameter integer C_M_AXI_WUSER_WIDTH  = 0,  // User Write Data Bus width.
    parameter integer C_M_AXI_RUSER_WIDTH  = 0,  // User Read Data Bus width.
    parameter integer C_M_AXI_BUSER_WIDTH  = 0   // User Response Bus width.
)
(
    // Users to add ports here
    output wire boot_code_ready,
    // User ports ends

    input  wire M_AXI_ACLK,     // AXI bus clock signal.
    input  wire M_AXI_ARESETN,  // AXI bus reset singal (Active Low).

    // Write Address Channel Signals.
    output wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_AWID,      // Write Addr ID.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_AWADDR,  // Write Address.
    output wire [7 : 0] M_AXI_AWLEN,    // The exact # of transfers in a burst.
    output wire [2 : 0] M_AXI_AWSIZE,   // The size of each transfer in a burst.
    output wire [1 : 0] M_AXI_AWBURST,  // Burst type. For addr calculation.
    output wire M_AXI_AWLOCK,           // Lock type. For atomic transactions.
    output wire [3 : 0] M_AXI_AWCACHE,  // Memory type.
    output wire [2 : 0] M_AXI_AWPROT,   // Protection type. The privilege level.
    output wire [3 : 0] M_AXI_AWQOS,    // QoS identifier for each write op.
    output wire [C_M_AXI_AWUSER_WIDTH - 1 : 0] M_AXI_AWUSER,  // User-defined.
    output wire M_AXI_AWVALID,   // Write request, addr/ctrl signals are valid.
    input  wire M_AXI_AWREADY,   // Write ack, slave ready to fetch addr/ctrl.

    // Write Data Channel Signals.
    output wire M_AXI_WLAST,    // Indicates the last transfer in a burst.
    output wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_WDATA,     // Write data.
    output wire [C_M_AXI_DATA_WIDTH / 8 - 1 : 0] M_AXI_WSTRB, // Write byte-enable.
    output wire [C_M_AXI_WUSER_WIDTH - 1 : 0] M_AXI_WUSER,    // User-defined.
    output wire M_AXI_WVALID,   // Write data (and byte-enable strobe) is valid.
    input  wire M_AXI_WREADY,   // Write ready. Salve is ready to accept the data.

    // Write Response Channel Signals.
    input  wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_BID,        // Write response ID.
    input  wire [1 : 0] M_AXI_BRESP,                         // Write response.
    input  wire [C_M_AXI_BUSER_WIDTH - 1 : 0] M_AXI_BUSER,   // User-defined.
    input  wire M_AXI_BVALID,   // Slave has the write response valid.
    output wire M_AXI_BREADY,   // Master is ready to accept the response.

    // Read Address Channel Signals.
    output wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_ARID,       // Read Addr ID.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_ARADDR,   // Read Address.
    output wire [7 : 0] M_AXI_ARLEN,    // The exact # of transfers in a burst.
    output wire [2 : 0] M_AXI_ARSIZE,   // The size of each transfer in a burst.
    output wire [1 : 0] M_AXI_ARBURST,  // Burst type. For addr calculation.
    output wire M_AXI_ARLOCK,           // Lock type. For atomic transactions.
    output wire [3 : 0] M_AXI_ARCACHE,  // Memory type.
    output wire [2 : 0] M_AXI_ARPROT,   // Protection type. The privilege level.
    output wire [3 : 0] M_AXI_ARQOS,    // QoS identifier for each write op.
    output wire [C_M_AXI_ARUSER_WIDTH - 1 : 0] M_AXI_ARUSER,    // User-defined.
    output wire M_AXI_ARVALID,    // Read request, addr/ctrl signals are valid.
    input  wire M_AXI_ARREADY,    // Read ack, slave ready to fetch addr/ctrl.

    // Read Data Channel Signals.
    input  wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_RID,       // Read data ID.
    input  wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_RDATA,   // Read data.
    input  wire [1 : 0] M_AXI_RRESP,                        // Read response.
    input  wire M_AXI_RLAST,      // Indicates the last transfer in a burst.
    input  wire M_AXI_RVALID,     // The read data from the slave is valid.
    output wire M_AXI_RREADY,     // Master is ready to accept the read data.
    input  wire [C_M_AXI_RUSER_WIDTH - 1 : 0] M_AXI_RUSER  // User-defined.
);

// Declare local parameters
localparam C_ROM_SIZE = 4096; // ROM size 4096 words (4096*4 bytes).
localparam integer C_ROM_ADDR_WIDTH  = $clog2(C_ROM_SIZE);
localparam integer C_M_AXI_BURST_LEN = 8; // Burst Length: 2^0~2^8 words.

// Declare IP control signals.
reg hw_trig;
reg last_write_burst;  // Asserted when we reached the last write burst.

reg [C_ROM_ADDR_WIDTH - 1: 0] src_addr;

// The internal buffer to store one burst of data.
reg [C_M_AXI_DATA_WIDTH - 1: 0] buffer [0: C_M_AXI_BURST_LEN - 1];

// C_TRANSACTIONS_NUM is the width of the index counter for
// number of write or read transactions.
localparam integer C_BLEN_WIDTH = $clog2(C_M_AXI_BURST_LEN);

// FSM states to copy the ROM data to the DDRx main memory.
localparam [1: 0]
           IDLE = 2'b00,  // The initial state.
           READ_ROM = 2'b01,  // Read a burst of ROM data into a buffer.
           WRITE_DDRx = 2'b10,  // Write one burst of buffer to the DDRx memory.
           COPY_DONE = 2'b11; // Check if all the data has been copied.

// The main controller state.
reg [1: 0] boot_state;

// AXI4 internal temp signals.
reg [C_M_AXI_ADDR_WIDTH - 1: 0] axi_awaddr;
reg axi_awvalid;
reg axi_wlast;
reg axi_wvalid;
reg axi_bready;
reg [C_M_AXI_ADDR_WIDTH - 1: 0] axi_araddr;
reg axi_arvalid;
reg axi_rready;

reg [C_BLEN_WIDTH - 1: 0] read_index;  // read beat count in a burst
reg [C_BLEN_WIDTH - 1: 0] write_index; // write beat count in a burst
wire [C_BLEN_WIDTH + 2: 0] burst_size_bytes;
reg burst_read_trig;
reg burst_write_trig;
reg burst_read_active;
reg burst_write_active;
reg reads_done;
reg writes_done;

// Interface response error flags.
wire write_resp_error;
wire read_resp_error;

wire wnext;
wire rnext;

// AXI bus port connections.
// 1. Write Address (AW) Channel.
assign M_AXI_AWID = 'b0;
assign M_AXI_AWADDR = axi_awaddr;
assign M_AXI_AWLEN = C_M_AXI_BURST_LEN - 1; // #data beats in a burst minus 1.
assign M_AXI_AWSIZE = $clog2(C_M_AXI_DATA_WIDTH / 8); // A beat has 2^AWSIZE bytes.
assign M_AXI_AWBURST = 2'b01;   // INCR burst type.
assign M_AXI_AWLOCK = 1'b0;    // No bus lock.
assign M_AXI_AWCACHE = 4'b0010; // 4'b0011 for coherent accesses thru ACP.
assign M_AXI_AWPROT = 3'h0;
assign M_AXI_AWQOS = 4'h0;
assign M_AXI_AWUSER = 'b1;
assign M_AXI_AWVALID = axi_awvalid;
// 2. Write Data(W) Channel.
assign M_AXI_WDATA = (boot_state == WRITE_DDRx)? buffer[write_index] : 32'b0;
assign M_AXI_WSTRB = {(C_M_AXI_DATA_WIDTH / 8){1'b1}}; // Word-beat and aligned.
assign M_AXI_WLAST = axi_wlast;
assign M_AXI_WUSER = 'b0;
assign M_AXI_WVALID = axi_wvalid;
// 3. Write Response (B) Channel.
assign M_AXI_BREADY = axi_bready;
// 4. Read Address (AR) Channel.
assign M_AXI_ARID = 'b0;
assign M_AXI_ARADDR = axi_araddr;
assign M_AXI_ARLEN = C_M_AXI_BURST_LEN - 1; // #data beats in a burst minus 1.
assign M_AXI_ARSIZE = $clog2(C_M_AXI_DATA_WIDTH / 8); // A beat has 2^ARSIZE bytes.
assign M_AXI_ARBURST = 2'b01;   // INCR burst type.
assign M_AXI_ARLOCK = 1'b0;    // No bus lock.
assign M_AXI_ARCACHE = 4'b0010; // 4'b0011 for coherent accesses thru ACP.
assign M_AXI_ARPROT = 3'h0;
assign M_AXI_ARQOS = 4'h0;
assign M_AXI_ARUSER = 'b1;
assign M_AXI_ARVALID = axi_arvalid;
// 5. Read and Read Response (R) Channel.
assign M_AXI_RREADY = axi_rready;

assign burst_size_bytes	= C_M_AXI_BURST_LEN * C_M_AXI_DATA_WIDTH / 8;

// -----------------------
//  Write Address Channel
// -----------------------
// The purpose of the write address channel is to request the address and
// command information for the entire transaction.  It is a single beat
// of information.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_awvalid <= 1'b0;
    else if (~axi_awvalid && burst_write_trig) // If previously not valid,
        axi_awvalid <= 1'b1;                             // start next transaction.
    else if (M_AXI_AWREADY && axi_awvalid) // Once asserted, VALIDs cannot be
        axi_awvalid <= 1'b0;                 // deasserted, so axi_awvalid must
    else                                   // wait until transaction is accepted.
        axi_awvalid <= axi_awvalid;
end

// Next address after AWREADY indicates previous address acceptance.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1)
        axi_awaddr <= C_BOOT_CODE_ADDR;
    else if (M_AXI_AWREADY && axi_awvalid)
        axi_awaddr <= axi_awaddr + burst_size_bytes;
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

// In this IP they are kept in sync by using the same address increment
// and burst sizes. Then the AW and W channels have their transactions measured
// with threshold counters as part of the user logic, to make sure neither
// channel gets too far ahead of each other.

// Forward movement occurs when the write channel is valid and ready.

assign wnext = M_AXI_WREADY & axi_wvalid;

// WVALID logic, similar to the axi_awvalid always block above.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_wvalid <= 1'b0;
    else if (~axi_wvalid && burst_write_trig) // If previously not valid,
        axi_wvalid <= 1'b1;                             // start next transaction.
    else if (wnext && axi_wlast) // If WREADY & too many writes, throttle WVALID.
        axi_wvalid <= 1'b0;        // Once asserted, VALIDs can't be deasserted, so
    else                         // it must wait until burst is complete with WLAST.
        axi_wvalid <= axi_wvalid;
end

// WLAST generation on the MSB of a counter underflow
// WVALID logic, similar to the axi_awvalid always block above.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_wlast <= 1'b0;
    // axi_wlast is asserted when the write index count reaches the penultimate
    // count to synchronize with the last write data when write_index is b1111.
    else if ((write_index == C_M_AXI_BURST_LEN - 2 && C_M_AXI_BURST_LEN >= 2) &&
             wnext || (C_M_AXI_BURST_LEN == 1))
        axi_wlast <= 1'b1;
    else if (wnext)      // Deassrt axi_wlast when the last write data has been
        axi_wlast <= 1'b0; // accepted by the slave with a valid response.
    else if (axi_wlast && C_M_AXI_BURST_LEN == 1)
        axi_wlast <= 1'b0;
    else
        axi_wlast <= axi_wlast;
end

// Burst length counter. Uses extra counter register bit to
// indicate terminal count to reduce decode logic.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 || burst_write_trig == 1'b1)
        write_index <= 0;
    else if (wnext && (write_index != C_M_AXI_BURST_LEN - 1))
        write_index <= write_index + 1;
    else
        write_index <= write_index;
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
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_bready <= 1'b0;
    else if (M_AXI_BVALID && ~axi_bready) // Accept/ack bresp with axi_bready
        axi_bready <= 1'b1;                 // by the master when M_AXI_BVALID is
    else if (axi_bready)                  // asserted by slave.
        axi_bready <= 1'b0;       // Deassert after one clock cycle.
    else
        axi_bready <= axi_bready; // Retain the previous value.
end

// Flag any write response errors.
assign write_resp_error = axi_bready & M_AXI_BVALID & M_AXI_BRESP[1];

// ----------------------
//  Read Address Channel
// ----------------------
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_arvalid <= 1'b0;
    else if (~axi_arvalid && burst_read_trig) // If previously not valid,
        axi_arvalid <= 1'b1;                            // start next transaction.
    else if (M_AXI_ARREADY && axi_arvalid)
        axi_arvalid <= 1'b0;
    else
        axi_arvalid <= axi_arvalid;
end

// Next address after ARREADY indicates previous address acceptance.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1)
        axi_araddr <= {{(C_M_AXI_DATA_WIDTH - C_ROM_ADDR_WIDTH){1'b0}}, src_addr};
    else if (M_AXI_ARREADY && axi_arvalid)
        axi_araddr <= axi_araddr + burst_size_bytes;
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
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 || burst_read_trig)
        read_index <= 0;
    else if ( /*rnext &&*/ (read_index != C_M_AXI_BURST_LEN - 1))
        read_index <= read_index + 1;
    else
        read_index <= read_index;
end

// The Read Data channel returns the results of the read request.
// In this example the data checker is always able to accept more data,
// so no need to throttle the RREADY signal.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1'b1 )
        axi_rready <= 1'b0;
    else if (M_AXI_RVALID) // accept/ack rdata/rresp with axi_rready by the master
    begin                  // when M_AXI_RVALID is asserted by slave.
        axi_rready <= (M_AXI_RLAST && axi_rready) ? 1'b0 : 1'b1;
    end
end

// Read a data burst into the buffer.
// The following always-block is not used in this IP. So, we simply
// Read the data into an unused buffer.
reg [C_M_AXI_DATA_WIDTH - 1: 0] unused_buffer;
always @(posedge M_AXI_ACLK)
begin
    // Read data when RVALID is active
    if (rnext)
        unused_buffer <= M_AXI_RDATA;
end

// Flag any read response errors.
assign read_resp_error = axi_rready & M_AXI_RVALID & M_AXI_RRESP[1];

// ----------------------------------
//  User Logic
// ----------------------------------

// Signals that the boot code has been copied to DDRx and is ready to run.
assign boot_code_ready = last_write_burst && (boot_state == IDLE);

// Delay boot process for user to setup ILA trigger during debugging.
localparam USER_DELAY_TIME = 1;  // delay 1 msecs upon reset.
reg [31:0] delay_counter;
reg stop_counting;

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
    begin
        delay_counter <= USER_DELAY_TIME * 32'd100_000;
        stop_counting <= 0;
    end
    else if ( (|delay_counter) && !stop_counting)
    begin
        delay_counter <= delay_counter - 1;
        stop_counting <= 0;
    end
    else
    begin
        delay_counter <= 1;
        stop_counting <= 1;
    end
end

// Generates a one-clock pulse to activate this IP.
always @(posedge M_AXI_ACLK)
begin
    if (!(| delay_counter))
        hw_trig <= 1;
    else
        hw_trig <= 0;
end

// burst_write_active signal is asserted when there is a burst write issued.
// The signal remains asserted until the burst write is accepted by the slave.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        burst_write_active <= 0;

    // The burst_write_active is asserted when a write burst transaction is initiated.
    else if (burst_write_trig)
        burst_write_active <= 1;
    else if (M_AXI_BVALID && axi_bready)
        burst_write_active <= 0;
end

// This logic is to qualify the last write count with the final write response.
// This demonstrates how to confirm that a write has been committed.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || boot_state == COPY_DONE)
        writes_done <= 0;

    // The writes_done should be associated with a bready response.
    else if (M_AXI_BVALID && axi_bready && (write_index == C_M_AXI_BURST_LEN - 1))
        writes_done <= 1;
    else
        writes_done <= writes_done;
end

// burst_read_active signal is asserted when there is a burst read issued.
// The signal remains asserted until the burst read is accepted by the slave.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        burst_read_active <= 0;

    // The burst_read_active is asserted when a read burst transaction is initiated.
    else if (burst_read_trig)
        burst_read_active <= 1;
    else if (M_AXI_RVALID && axi_rready && M_AXI_RLAST)
        burst_read_active <= 0;
end

// This logic checks whether ROM copying has reached the last burst or not.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        last_write_burst <= 0;
    else if (src_addr == C_ROM_SIZE - 1)
        last_write_burst <= 1;
    else
        last_write_burst <= last_write_burst;
end

// --------------------------------------------------
//  The main controller of the boot code copy logic.
// --------------------------------------------------
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
    begin
        // All the signals are assigned default values under reset condition.
        boot_state <= IDLE;
        burst_write_trig <= 0;
        burst_read_trig <= 0;
    end
    else
    begin
        case (boot_state)
            IDLE:
            begin
                boot_state <= (hw_trig == 1) ? READ_ROM : IDLE;
            end

            READ_ROM:
            begin
                // This state is responsible to read one burst of data from the
                // on-chip ROM to a burst buffer for the write operation later.
                boot_state <= (reads_done) ? WRITE_DDRx : READ_ROM;
                if (!reads_done && ~axi_arvalid && ~burst_read_active && ~burst_read_trig)
                    burst_read_trig <= 0; // CJT: never do burst read in this IP.
                else
                    burst_read_trig <= 0; // Negate to generate a pulse
            end

            WRITE_DDRx:
            begin
                // This state raises a pulse, burst_write_trig, to initiate a burst
                // write. The pulse will be raised until burst_write_active is asserted.
                if (writes_done)
                    boot_state <= COPY_DONE;
                else
                begin
                    boot_state <= WRITE_DDRx;
                    if (~axi_awvalid && ~burst_write_trig && ~burst_write_active)
                        burst_write_trig <= 1;
                    else
                        burst_write_trig <= 0; // Negate to generate a pulse.
                end
            end

            COPY_DONE:
            begin
                // This state determines if all the ROM data has been copied to DDRx
                // DRAM or not. If not, repeat copying.
                if (last_write_burst)
                    boot_state <= IDLE;
                else
                    boot_state <= READ_ROM;
            end
        endcase
    end
end

// --------------------------------------------------------------------
//  The following code describes an boot ROM memory block that
//  stores the program binary to be executed. Each time we reach the
//  READ_ROM state, one burst-size of boot rom data will be copied to
//  the burst buffer registers.
// --------------------------------------------------------------------
wire [C_M_AXI_DATA_WIDTH - 1: 0] rom_dout;
reg [C_BLEN_WIDTH - 1: 0] buf_idx;

boot_rom
    #(.DATA_WIDTH(C_M_AXI_DATA_WIDTH), .ADDR_WIDTH(C_ROM_ADDR_WIDTH), .ROM_SIZE(C_ROM_SIZE))
    rom0 (.clk(M_AXI_ACLK), .addr(src_addr), .data_o(rom_dout));

always @(posedge M_AXI_ACLK)
    if (M_AXI_ARESETN == 0 || boot_state == COPY_DONE)
    begin
        src_addr <= (M_AXI_ARESETN) ? src_addr - 1 : 13'h0;
        reads_done <= 0;
        buf_idx <= 0;
    end
    else if (boot_state == READ_ROM)
    begin
        // BRAM data will come out with a two-cycle delay
        // after a sequential rom_addr assignment.
        buffer[buf_idx] <= rom_dout;
        buf_idx <= src_addr[C_BLEN_WIDTH - 1: 0];
        src_addr <= src_addr + 1;
        reads_done <= (src_addr[C_BLEN_WIDTH - 1: 0] == C_M_AXI_BURST_LEN - 1) ? 1 : 0;
    end
    else
        reads_done <= 0;

endmodule
