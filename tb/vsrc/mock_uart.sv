// temporary only implements tx
module mock_uart # (
  parameter integer C_M_AXI_ADDR_WIDTH = 32, // Width of the AXI addr bus.
  parameter integer C_M_AXI_DATA_WIDTH = 32,  // Width of the AXI data bus.
  parameter integer UART_TX_FIFO_DELAY = 1, // must greater than 0
  parameter integer AXI_LANTENCY = 10,
  parameter integer UART_RXFIFO_ADDR = 32'hC0000000,
  parameter integer UART_TXFIFO_ADDR = 32'hC0000004,
  parameter integer UART_STATUS_ADDR = 32'hC0000008,
  parameter integer TOHOST_VAL_ADDR/*verilator public*/ =  32'hC1000000
)
(
    input logic clk,       // AXI bus clock signal.
    input logic rst_n,    // AXI bus reset singal (Active Low).

    // Interface signals between Aquila and the AXI-Lite device master port.
    input  logic                               M_DEVICE_strobe,
    input  logic [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_addr,
    input  logic                               M_DEVICE_rw,
    input  logic [ C_M_AXI_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable, //don't care
    input  logic [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_core2dev_data,
    output logic                               M_DEVICE_data_ready,
    output logic [ C_M_AXI_DATA_WIDTH - 1 : 0] M_DEVICE_dev2core_data

  );
  /*verilator public_module*/

  typedef enum [1:0] {IDLE=2'b0,READ,WRITE,DONE} axi_state_t;

  axi_state_t cur_state,next_state;

  localparam TX_FIFO_FULL_bit = 3;
  localparam TX_FIFO_EMPTY_bit = 2;
  localparam RX_FIFO_FULL_bit = 1;
  localparam RX_FIFO_VALID_bit = 0;

  logic [31:0] tohost_val/*verilator public_flat*/;

  logic [7:0] uart_tx_fifo;
  logic [7:0] uart_rx_fifo;
  logic [7:0] uart_status;
  logic uart_tx_push;
  logic uart_tx_pop;
  logic uart_rx_push;
  logic uart_rx_pop;

  logic uart_tx_fifo_full;
  logic uart_tx_fifo_empty;
  logic uart_rx_fifo_full;
  logic uart_rx_fifo_valid;

  logic [7:0] transmit_counter;
  logic [7:0] read_counter;
  logic [7:0] write_counter;

  logic reads_done;
  logic writes_done;

  always_comb
    uart_tx_push = (M_DEVICE_addr == UART_TXFIFO_ADDR && M_DEVICE_rw == 1 && M_DEVICE_strobe); //write
  always_comb
    uart_tx_pop = (transmit_counter >= UART_TX_FIFO_DELAY); //write
  always_comb
    uart_rx_push = 0; //write
  always_comb
    uart_rx_pop = (M_DEVICE_addr == UART_RXFIFO_ADDR && M_DEVICE_rw == 0);  //read

  always_ff@(posedge clk) begin
    if (~rst_n) begin
      transmit_counter <= 0;
    end else if (uart_tx_fifo_empty) begin
      transmit_counter <= 0;
    end else if (uart_tx_fifo_full) begin
      transmit_counter <= transmit_counter + 1;
      if (transmit_counter == UART_TX_FIFO_DELAY)begin
        $write("%c",uart_tx_fifo); //put one char to stdout
        //$display("uart_tx: %c",uart_tx_fifo); //put one char to stdout
      end
    end else begin
      transmit_counter <= transmit_counter;
    end
  end

  always_ff@(posedge clk)
    if (~rst_n)
      read_counter <= 0;
    else if (cur_state == IDLE || cur_state == DONE || cur_state == WRITE)
      read_counter <= 0;
    else
      read_counter <= read_counter + 1;

  always_ff @(posedge clk)
    if (~rst_n)
      write_counter <= 0;
    else if (cur_state == IDLE || cur_state == DONE || cur_state == READ)
      write_counter <= 0;
    else
      write_counter <= write_counter + 1;

  always_comb
    writes_done = write_counter >= AXI_LANTENCY;
  always_comb
    reads_done = read_counter >= AXI_LANTENCY;

  always_comb
    uart_status = {uart_rx_fifo_full,uart_tx_fifo_empty,uart_rx_fifo_full,uart_rx_fifo_valid};

  always_ff@(posedge clk)
    if (~rst_n)
      uart_tx_fifo_full <= 0;
    else if (uart_tx_push)
      uart_tx_fifo_full <= 1;
    else if (uart_tx_pop)
      uart_tx_fifo_full <= 0;
    else
      uart_tx_fifo_full <= uart_tx_fifo_full;

  always_ff@(posedge clk)
    if (~rst_n)
      uart_tx_fifo_empty <= 0;
    else if (uart_tx_push)
      uart_tx_fifo_empty <= 0;
    else if (uart_tx_pop)
      uart_tx_fifo_empty <= 1;
    else
      uart_tx_fifo_empty <= uart_tx_fifo_empty;

  always_comb
    uart_status = {uart_rx_fifo_full,uart_tx_fifo_empty,uart_rx_fifo_full,uart_rx_fifo_valid};

  always_ff@(posedge clk)
    if (~rst_n)
      uart_tx_fifo_full <= 0;
    else if (uart_tx_push)
      uart_tx_fifo_full <= 1;
    else if (uart_tx_pop)
      uart_tx_fifo_full <= 0;
    else
      uart_tx_fifo_full <= uart_tx_fifo_full;

  always_ff@(posedge clk)
    if (~rst_n)
      uart_tx_fifo_empty <= 0;
    else if (uart_tx_push)
      uart_tx_fifo_empty <= 0;
    else if (uart_tx_pop)
      uart_tx_fifo_empty <= 1;
    else
      uart_tx_fifo_empty <= uart_tx_fifo_empty;

  always_ff@(posedge clk)
    if (~rst_n)
      uart_rx_fifo_full <= 0;
    else if (uart_rx_push)
      uart_rx_fifo_full <= 1;
    else if (uart_rx_pop)
      uart_rx_fifo_full <= 0;
    else
      uart_rx_fifo_full <= uart_rx_fifo_full;

  always_ff@(posedge clk)
    if (~rst_n)
      uart_rx_fifo_valid <= 0;
    else if (uart_rx_push)
      uart_rx_fifo_valid <= 1;
    else if (uart_rx_pop)
      uart_rx_fifo_valid <= 0;
    else
      uart_rx_fifo_valid <= uart_rx_fifo_valid;


  always_ff @(posedge clk) begin
    if (~rst_n)
      cur_state <= IDLE;
    else
      cur_state <= next_state;
  end

  always_comb begin
    case (cur_state)
      IDLE: if (M_DEVICE_strobe) next_state = (M_DEVICE_rw) ? WRITE : READ;
            else next_state = IDLE;
      READ: if (reads_done) next_state = DONE;
            else next_state = READ;
      WRITE: if (writes_done) next_state = DONE;
            else next_state = WRITE;
      DONE: next_state = IDLE;
      default: next_state = IDLE;
    endcase
  end

  always_ff @(posedge clk)
    if (~rst_n)
      uart_tx_fifo <= 0;
    else if (cur_state == WRITE && M_DEVICE_addr == UART_TXFIFO_ADDR)
      uart_tx_fifo <= M_DEVICE_core2dev_data[7:0];
    else
      uart_rx_fifo <= uart_tx_fifo;

    //not implements rx
  always_ff @(posedge clk)
    if (~rst_n)
      uart_rx_fifo <= 0;
    else if (cur_state == WRITE && M_DEVICE_addr == UART_RXFIFO_ADDR)
      uart_rx_fifo <= M_DEVICE_core2dev_data[7:0];
    else
      uart_rx_fifo <= uart_rx_fifo;

  //riscv-test tohost hacking
  always_ff @(posedge clk)
    if (~rst_n)
      tohost_val <= 0;
    else if (cur_state == WRITE && M_DEVICE_addr == TOHOST_VAL_ADDR)
      tohost_val <= M_DEVICE_core2dev_data;
    else
      tohost_val <= tohost_val;

  always_ff @(posedge clk)
    if (~rst_n)
      M_DEVICE_dev2core_data <= 32'h0;
    else if (cur_state == READ)
      if (M_DEVICE_addr == UART_TXFIFO_ADDR)
        M_DEVICE_dev2core_data <= {24'b0,uart_tx_fifo};
      else if (M_DEVICE_addr == UART_RXFIFO_ADDR)
        M_DEVICE_dev2core_data <= {24'b0,uart_rx_fifo};
      else if (M_DEVICE_addr == UART_STATUS_ADDR)
        M_DEVICE_dev2core_data <= {24'b0,uart_status};
      else
        M_DEVICE_dev2core_data <= 32'hdeadbeef;
    else
      M_DEVICE_dev2core_data <= M_DEVICE_dev2core_data;

  always_ff @(posedge clk)
    if (~rst_n)
      M_DEVICE_data_ready <= 0;
    else if (cur_state == IDLE)
      M_DEVICE_data_ready <= 0;
    else if (cur_state == DONE)
      M_DEVICE_data_ready <= 1;
    else
      M_DEVICE_data_ready <= M_DEVICE_data_ready;

  function [31:0] read_tohost;
    /*verilator public*/
    begin
        read_tohost = tohost_val;
    end
  endfunction

endmodule
