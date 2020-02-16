
module dp_ram
  #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 256,
    parameter int MEM_SIZE /*verilator public*/= 32'h200000, //small memory for verilator
    parameter int ACCESS_LANTENCY = 8'h0 // done signal control
  )
  (
    // Clock and Reset
    input  logic                      clk,
    input  logic                      rst_n,

    input  logic                      strobe_icache,
    input  logic [ADDR_WIDTH-1:0]     addr_icache_i,
    output logic [DATA_WIDTH-1:0]     rdata_icache_o,
    output logic                      done_icache_o,

    input  logic                      strobe_dcache,
    input  logic [ADDR_WIDTH-1:0]     addr_dcache_i,
    input  logic [DATA_WIDTH-1:0]     wdata_dcache_i,
    output logic [DATA_WIDTH-1:0]     rdata_dcache_o,
    input  logic                      rw_dcache_i,
    output logic                      done_dcache_o
  );

  typedef enum logic [1:0] {IDLE = 2'b0, READ, WRITE, DONE} state_t;

  function integer clogb2 (input integer bit_depth);
  begin
  for(clogb2=0; bit_depth>0; clogb2=clogb2+1)
    bit_depth = bit_depth >> 1;
  end
  endfunction

  localparam PART_ADDR_WIDTH = clogb2(MEM_SIZE);

  state_t icache_cur_state, icache_next_state;
  state_t dcache_cur_state, dcache_next_state;

  logic [PART_ADDR_WIDTH-1:0] icache_addr;
  logic [PART_ADDR_WIDTH-1:0] dcache_addr;
  logic [7:0] mem [MEM_SIZE-1:0]/*verilator public_flat*/;
  logic [7:0] icache_delay_counter;
  logic [7:0] dcache_delay_counter;
  logic icache_reads_done;
  logic dcache_reads_done;
  logic dcache_writes_done;

  always_comb
    icache_addr = addr_icache_i[PART_ADDR_WIDTH-1:0];
  always_comb
    dcache_addr = addr_dcache_i[PART_ADDR_WIDTH-1:0];

  always_ff @(posedge clk) begin
    if (icache_cur_state == IDLE || icache_cur_state == DONE) icache_delay_counter <= 0;
    else icache_delay_counter <= icache_delay_counter + 1;
  end

  always_ff @(posedge clk) begin
    if (dcache_cur_state == IDLE || dcache_cur_state == DONE) dcache_delay_counter <= 0;
    else dcache_delay_counter <= dcache_delay_counter + 1;
  end

  always_comb
    icache_reads_done = icache_delay_counter >= ACCESS_LANTENCY;

  always_comb
    dcache_reads_done = dcache_delay_counter >= ACCESS_LANTENCY;
  always_comb
    dcache_writes_done = dcache_delay_counter >= ACCESS_LANTENCY;

  always_ff @(posedge clk) begin
    if (~rst_n)
      icache_cur_state <= IDLE;
    else
      icache_cur_state <= icache_next_state;
  end

  always_ff @(posedge clk) begin
    if (~rst_n)
      dcache_cur_state <= IDLE;
    else
      dcache_cur_state <= dcache_next_state;
  end

  always_comb begin
    case (icache_cur_state)
      IDLE: if (strobe_icache) icache_next_state = READ;
            else icache_next_state = IDLE;
      READ: if (icache_reads_done) icache_next_state = DONE;
            else icache_next_state = READ;
      DONE: icache_next_state = IDLE;
      default: icache_next_state = IDLE;
    endcase
  end

  always_comb begin
    case (dcache_cur_state)
      IDLE: if (strobe_dcache) dcache_next_state = (rw_dcache_i ? WRITE : READ);
            else dcache_next_state = IDLE;
      READ: if (dcache_reads_done) dcache_next_state = DONE;
            else dcache_next_state = READ;
      WRITE:if (dcache_writes_done) dcache_next_state = DONE;
            else dcache_next_state = WRITE;
      DONE: dcache_next_state = IDLE;
      default: dcache_next_state = IDLE;
    endcase
  end

  integer geni;

  always_ff @(posedge clk) begin
    if (dcache_cur_state == WRITE) begin
      for (geni = 0 ; geni < DATA_WIDTH/8 ; geni = geni + 1) begin
        mem[dcache_addr+(DATA_WIDTH/8-1-geni)] <= wdata_dcache_i[geni*8+:8];
      end
      //mem[dcache_addr] <=   wdata_dcache_i[7:0];
      //mem[dcache_addr+1] <= wdata_dcache_i[15:8];
      //mem[dcache_addr+2] <= wdata_dcache_i[23:16];
      //mem[dcache_addr+3] <= wdata_dcache_i[31:24];
    end
  end

  always_ff @(posedge clk) begin
    if (dcache_cur_state == READ) begin
      rdata_dcache_o <= {mem[dcache_addr],mem[dcache_addr+1],mem[dcache_addr+2],mem[dcache_addr+3],
                         mem[dcache_addr+4],mem[dcache_addr+5],mem[dcache_addr+6],mem[dcache_addr+7],
                         mem[dcache_addr+8],mem[dcache_addr+9],mem[dcache_addr+10],mem[dcache_addr+11],
                         mem[dcache_addr+12],mem[dcache_addr+13],mem[dcache_addr+14],mem[dcache_addr+15],
                         mem[dcache_addr+16],mem[dcache_addr+17],mem[dcache_addr+18],mem[dcache_addr+19],
                         mem[dcache_addr+20],mem[dcache_addr+21],mem[dcache_addr+22],mem[dcache_addr+23],
                         mem[dcache_addr+24],mem[dcache_addr+25],mem[dcache_addr+26],mem[dcache_addr+27],
                         mem[dcache_addr+28],mem[dcache_addr+29],mem[dcache_addr+30],mem[dcache_addr+31]};
    end else begin
      rdata_dcache_o <= rdata_dcache_o;
    end
  end

  always_ff @(posedge clk) begin
    if (icache_cur_state == READ) begin
      rdata_icache_o <= {mem[icache_addr],mem[icache_addr+1],mem[icache_addr+2],mem[icache_addr+3],
                         mem[icache_addr+4],mem[icache_addr+5],mem[icache_addr+6],mem[icache_addr+7],
                         mem[icache_addr+8],mem[icache_addr+9],mem[icache_addr+10],mem[icache_addr+11],
                         mem[icache_addr+12],mem[icache_addr+13],mem[icache_addr+14],mem[icache_addr+15],
                         mem[icache_addr+16],mem[icache_addr+17],mem[icache_addr+18],mem[icache_addr+19],
                         mem[icache_addr+20],mem[icache_addr+21],mem[icache_addr+22],mem[icache_addr+23],
                         mem[icache_addr+24],mem[icache_addr+25],mem[icache_addr+26],mem[icache_addr+27],
                         mem[icache_addr+28],mem[icache_addr+29],mem[icache_addr+30],mem[icache_addr+31]};
    end else begin
      rdata_icache_o <= rdata_icache_o;
    end
  end

  always_ff @(posedge clk) begin
    if (icache_cur_state == DONE)
      done_icache_o <= 1;
    else
      done_icache_o <= 0;
  end

  always_ff @(posedge clk) begin
    if (dcache_cur_state == DONE)
      done_dcache_o <= 1;
    else
      done_dcache_o <= 0;
  end

  function [31:0] readWord;
    /*verilator public*/
    input integer byte_addr;
    begin
      if (byte_addr < MEM_SIZE)
        readWord = {mem[byte_addr[PART_ADDR_WIDTH-1:0]],
                    mem[byte_addr[PART_ADDR_WIDTH-1:0]+1],
                    mem[byte_addr[PART_ADDR_WIDTH-1:0]+2],
                    mem[byte_addr[PART_ADDR_WIDTH-1:0]+3]};
      else
        readWord = 32'hdeadbeef;
    end
  endfunction

  task writeWord;
    /*verilator public*/
    input integer byte_addr;
    input [31:0] val;
    begin
      if (byte_addr < MEM_SIZE) begin
        mem[byte_addr[PART_ADDR_WIDTH-1:0]] = val[31:24];
        mem[byte_addr[PART_ADDR_WIDTH-1:0]+1] = val[23:16];
        mem[byte_addr[PART_ADDR_WIDTH-1:0]+2] = val[15:8];
        mem[byte_addr[PART_ADDR_WIDTH-1:0]+3] = val[7:0];
      end
    end
  endtask

  task writeByte;
    /*verilator public*/
    input integer byte_addr;
    input [7:0] val;
    begin
      if (byte_addr < MEM_SIZE) begin
        mem[byte_addr[PART_ADDR_WIDTH-1:0]] = val;
      end
    end
  endtask

  function [7:0] readByte;
    /*verilator public*/
    input integer byte_addr;
    begin
      if (byte_addr < MEM_SIZE)
        readByte = mem[byte_addr[PART_ADDR_WIDTH-1:0]];
      else
        readByte = 8'hef; //dummy
    end
  endfunction
endmodule
