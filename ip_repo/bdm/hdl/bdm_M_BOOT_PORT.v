// =============================================================================
//  Program : bdm_M_BOOT_PORT.v
//  Author  : Chun-Jen Tsai
//  Date    : Sep/24/2019
// -----------------------------------------------------------------------------
//  Description:
//  This HDL code is an implementation of the Trigger Master Port of the
//  Boot Debug Module (BDM) of a general-purpose processor core. The BDM
//  writes start-up program counter ranges into the processor system registers
//  and trigger the reset of the processor core.
//
//  The five AXI bus-channel implementations and most of the general comments
//  on the AXI bus signals are based on the Xilinx Vivado master IP template.
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

module bdm_M_BOOT_PORT #
(
    parameter C_BOOT_CODE_ADDR           = 32'h0000_0000,

    parameter integer C_M_AXI_ADDR_WIDTH = 32,  // Width of the AXI addr bus.
    parameter integer C_M_AXI_DATA_WIDTH = 32   // Width of the AXI data bus.
)
(
    input wire boot_code_ready,  // Boot code has been initialized in DRAM.

    input wire M_AXI_ACLK,       // AXI bus clock signal.
    input wire M_AXI_ARESETN,    // AXI bus reset singal (Active Low).

    // Write Address Channel Signals.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_AWADDR, // Write Address.
    output wire [2 : 0] M_AXI_AWPROT, // Protection type. The privilege level.
    output wire M_AXI_AWVALID,   // Write request, addr/ctrl signals are valid.
    input wire M_AXI_AWREADY,    // Write ack, slave ready to fetch addr/ctrl.

    // Write Data Channel Signals.
    output wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_WDATA,  // Write data.
    output wire [C_M_AXI_DATA_WIDTH / 8 - 1 : 0] M_AXI_WSTRB, // Byte-enable.
    output wire M_AXI_WVALID,   // Write data (and byte-enable strobe) is valid.
    input wire M_AXI_WREADY,    // Write ready. Salve is ready to accept data.

    // Write Response Channel Signals.
    input wire [1 : 0] M_AXI_BRESP, // Write response.
    input wire M_AXI_BVALID,        // Slave has the write response valid.
    output wire M_AXI_BREADY,       // Master is ready to accept the response.

    // Read Address Channel Signals.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_ARADDR, // Read Address.
    output wire [2 : 0] M_AXI_ARPROT, // Protection type. The privilege level.
    output wire M_AXI_ARVALID, // Read request, addr/ctrl signals are valid.
    input wire M_AXI_ARREADY,  // Read ack, slave ready to fetch addr/ctrl.

    // Read Data Channel Signals.
    input wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_RDATA, // Read data.
    input wire [1 : 0] M_AXI_RRESP,                      // Read response.
    input wire M_AXI_RVALID,   // The read data from the slave is valid.
    output wire M_AXI_RREADY   // Master is ready to accept the read data.
);

// Note that we usually assume that this BSM M_BOOT_PORT master port connects to
// the Aquila slave port directly, without going through any AXI Interconnect.
// You can change C_TARGET_SLAVE_ADDR to make it go thru an AXI Interconnect.
localparam C_TARGET_SLAVE_ADDR = 32'hC001_0000;

localparam [1: 0]   // The main controller states of the trigger logic
    S_IDLE = 2'b00, // This state put the processor core on hold at
                    //   the first entry, and do nothing afterwards.
    S_READ_REGS = 2'b01,  // This state reads the elf file PC information.
    S_WRITE_REGS = 2'b10, // This state writes the processor PC registers.
    S_RESET = 2'b11;      // This state resets the processor for execution.

// AXI4Lite internal temp signals.
reg axi_awvalid;
reg axi_wvalid;
reg axi_rready;
reg axi_bready;
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] axi_awaddr;
reg [C_M_AXI_DATA_WIDTH - 1 : 0] axi_wdata;

// Interface response error flags.
wire write_resp_error;
wire read_resp_error;

// user-defined signals
reg  [1: 0] trig_state;
reg  [2: 0] dest_reg_id;
reg  [C_M_AXI_DATA_WIDTH - 1 : 0] dest_reg[0: 4];
wire hw_trig;      // Trigger signal of this logic.
reg  hw_trig_ff0;
reg  hw_trig_ff1;

reg write_trigger; // one-cycle write trigger signal for each write request.
reg write_issued;  // Asserted when a write is issued, desserted when it's done.
reg last_write;    // Asserted when the last write transaction is complete.

reg writes_done;   // Flags the completion of all the write transactions.
reg reset_done;    // Flags the completion of reseting the processor core.

// Initialize the boot sequence signals for the riscv core. One signal
// will be send to the riscv core per clock cycle.
initial
begin
    dest_reg[0] = 32'h1;            // set for the riscv core
    dest_reg[1] = C_BOOT_CODE_ADDR; // staring address
    dest_reg[2] = 32'h0;            // unused register
    dest_reg[3] = 32'h0;            // unused register
    dest_reg[4] = 32'h0;            // reset for the riscv core
end

// I/O Connections assignments

// Write Address (AW)
assign M_AXI_AWADDR  = axi_awaddr;
assign M_AXI_AWPROT  = 3'b000;
assign M_AXI_AWVALID = axi_awvalid;

// Write Data(W)
assign M_AXI_WVALID = axi_wvalid;
assign M_AXI_WDATA = axi_wdata;
assign M_AXI_WSTRB = 4'b1111;

// Write Response (B)
assign M_AXI_BREADY = axi_bready;

// Read Address (AR)
assign M_AXI_ARADDR = 0;
assign M_AXI_ARVALID = 0;
assign M_AXI_ARPROT = 3'b000;

//Read and Read Response (R)
assign M_AXI_RREADY = axi_rready;

// Flag any write errors.
assign write_resp_error = (axi_bready & M_AXI_BVALID & M_AXI_BRESP[1]);

// Flag any read errors.
assign read_resp_error = (axi_rready & M_AXI_RVALID & M_AXI_RRESP[1]);

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
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        axi_awvalid <= 0;
    else if (write_trigger) // Signal a new request by the user logic.
        axi_awvalid <= 1;
    else if (M_AXI_AWREADY && axi_awvalid) // Address accepted by the slave
        axi_awvalid <= 0;                  //  (slave issued M_AXI_AWREADY).
end

// --------------------
//  Write Data Channel
// --------------------
// The write data channel is for transfering the actual data.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        axi_wvalid <= 0;
    else if (write_trigger) // Signal a new request by the user logic.
        axi_wvalid <= 1;
    else if (M_AXI_WREADY && axi_wvalid) // Data accepted by the slave
        axi_wvalid <= 0;                 //  (slave issued M_AXI_WREADY).
end

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
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
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
// No need to read data, so axi_arvalid is always 0.

// ----------------------------------
//  Read Data (and Response) Channel
// ----------------------------------
// The Read Data channel returns the results of the read request. The master
// will accept the read data by asserting axi_rready when a valid read data
// is available. While not necessary per spec, it is advisable to reset
// READY signals in case of differing reset latencies between master/slave.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        axi_rready <= 0;
    else if (M_AXI_RVALID && ~axi_rready) // Accept/ack. rdata/rresp with
        axi_rready <= 1;                  // axi_rready by the master when
    else if (axi_rready)                  // M_AXI_RVALID is asserted by slave.
        axi_rready <= 0;                  // Deassert after one clock cycle.
end

// ----------------------------------
//  User Logics
// ----------------------------------

// A single cycle pluse for enabling AXI transactions.
assign hw_trig = hw_trig_ff0 && !hw_trig_ff1;

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
    begin
        hw_trig_ff0 <= 0;
        hw_trig_ff1 <= 0;
    end
    else
    begin
        hw_trig_ff0 <= boot_code_ready;
        hw_trig_ff1 <= hw_trig_ff0 ;
    end
end

// Write Addresses

// Note that we assume that this BSM M_BOOT_PORT master port connects to
// the Aquila slave port directly, without going through any AXI Interconnect.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || last_write == 1 || hw_trig == 1)
        axi_awaddr <= C_TARGET_SLAVE_ADDR;
    else if (M_AXI_AWREADY && axi_awvalid)
        axi_awaddr <= axi_awaddr + 32'h00000004;
end

// write_trigger triggers a new write transaction. dest_reg_id is a counter
// to keep track with number of write transaction was issued/initiated
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        dest_reg_id <= 0;
    else if (write_trigger) // perform a single write transaction
        dest_reg_id <= dest_reg_id + 1;
end

// Write data generation
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1 )
        axi_wdata <= dest_reg[0];
    else if (M_AXI_WREADY && axi_wvalid)
        axi_wdata <= dest_reg[dest_reg_id];
end

// Check for last write completion.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        last_write <= 0;
    else if ((dest_reg_id == 4) && M_AXI_AWREADY) // The last write should be
        last_write <= 1;                          //  associated with a write
    else                                          //  address ready response.
        last_write <= last_write;
end

// Check for writes_done completion.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        writes_done <= 0;
    else if (last_write /*&& M_AXI_BVALID */ && axi_bready) // The writes_done should
        writes_done <= 1;                //  be associated with a bready response.
    else
        writes_done <= writes_done;
end

// Check for processor reset completion.
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || hw_trig == 1)
        reset_done <= 0;
    else if (trig_state == S_RESET && axi_bready)
        reset_done <= 1;
    else
        reset_done <= reset_done;
end

// -----------------------------------------------------
//  The main controller of the processor trigger logic.
// -----------------------------------------------------
always @ ( posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
    begin
        // All the signals are assigned default values under reset condition
        trig_state <= S_IDLE;
        write_trigger <= 0;
        write_issued <= 0;
    end
    else
    begin
        // state transition
        case (trig_state)
            S_IDLE:
            begin
                // This state is responsible to initiate AXI transaction
                // when the single-cycle hw_trig is asserted.
                if (hw_trig == 1)
                    trig_state <= S_READ_REGS;
                else
                    trig_state <= S_IDLE;
            end

            S_READ_REGS:
            begin
                // This is an empty state reserved for future use.
                trig_state <= S_WRITE_REGS;
            end

            S_WRITE_REGS:
            begin
                // Issues a write_trigger pulse to begin a write transaction.
                // Transactions continues until last_write signal asserted.
                if (writes_done)
                    trig_state <= S_RESET;
                else
                begin
                    trig_state <= S_WRITE_REGS;

                    if (~axi_awvalid && ~axi_wvalid && ~M_AXI_BVALID &&
                        ~last_write && ~write_trigger && ~write_issued)
                    begin
                        write_trigger <= 1;
                        write_issued <= 1;
                    end
                    else if (axi_bready)
                        write_issued <= 0;
                    else
                        write_trigger <= 0; // Negate to generate a pulse
                end
            end

            S_RESET:
            begin
                // Kick off the processor by writing a '0' to the reset reg.
                if (reset_done)
                    trig_state <= S_IDLE;
                else
                begin
                    trig_state <= S_RESET;

                    if (~axi_awvalid && ~axi_wvalid && ~M_AXI_BVALID &&
                        ~write_trigger && ~write_issued)
                    begin
                        write_trigger <= 1;
                        write_issued <= 1;
                    end
                    else if (axi_bready)
                        write_issued <= 0;
                    else
                        write_trigger <= 0; // Negate to generate a pulse
                end
            end
        endcase
    end
end

endmodule
