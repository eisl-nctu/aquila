
#include <cstdlib>
#include <iostream>
#include <fstream>

#include "verilated_vcd_c.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"
#include "verilated.h"

using namespace std;
static vluint64_t cpuTime = 0;
double sc_time_stamp() { return cpuTime; }
Vaquila_testharness* top;
VerilatedVcdC* Vcdfp;

void load_simple_asm();

int main(int argc, char **argv)
{
  Verilated::commandArgs(argc,argv);
	//sc_clock clk ("clk", 10, 0.5, 3, true);
	top = new Vaquila_testharness("top");
  Verilated::traceEverOn(true);
  Vcdfp = new VerilatedVcdC;
  top->trace(Vcdfp, 99);
  Vcdfp->open("aquila_core.vcd");
  top->rst_n = 0;
  top->main_memory_addr = 0x00000000;
  load_simple_asm();
  for (int i = 0 ; i < 5 ; i ++){
    top->clk = 0;
    top->eval ();
    cpuTime += 5;
    Vcdfp->dump(cpuTime);
    top->clk = 1;
    top->eval ();
    cpuTime += 5;
    Vcdfp->dump(cpuTime);
  }
  top->rst_n = 1;
  //top->clk(clk);
	
  for (int i = 0 ; i < 1000 ; i ++){
    top->clk = 0;
    top->eval ();
    cpuTime += 5;
    Vcdfp->dump(cpuTime);
    top->clk = 1;
    top->eval ();
    cpuTime += 5;
    Vcdfp->dump(cpuTime);
  }
  /*while (!Verilated::gotFinish()) { 
    top->eval();
    //sc_start(1, SC_NS); 
  }*/
	Vcdfp->close();
  delete Vcdfp;
  delete top;
	exit(0);
}

void load_simple_asm()
{
//_start
  top->aquila_testharness->mock_ram->writeWord(0x00000000,0x04c0006f);
// trap_vector
  top->aquila_testharness->mock_ram->writeWord(0x00000004,0x34202f73);
  top->aquila_testharness->mock_ram->writeWord(0x00000008,0x00800f93);
  top->aquila_testharness->mock_ram->writeWord(0x0000000c,0x03ff0a63);
  top->aquila_testharness->mock_ram->writeWord(0x00000010,0x00900f93);
  top->aquila_testharness->mock_ram->writeWord(0x00000014,0x03ff0663);
  top->aquila_testharness->mock_ram->writeWord(0x00000018,0x00b00f93);
  top->aquila_testharness->mock_ram->writeWord(0x0000001c,0x03ff0263);
  top->aquila_testharness->mock_ram->writeWord(0x00000020,0x00000f17);
  top->aquila_testharness->mock_ram->writeWord(0x00000024,0xfe0f0f13);
  top->aquila_testharness->mock_ram->writeWord(0x00000028,0x000f0463);
  top->aquila_testharness->mock_ram->writeWord(0x0000002c,0x000f0067);
  top->aquila_testharness->mock_ram->writeWord(0x00000030,0x34202f73);
  top->aquila_testharness->mock_ram->writeWord(0x00000034,0x000f5463);
  top->aquila_testharness->mock_ram->writeWord(0x00000038,0x0040006f);
// handle exception
  top->aquila_testharness->mock_ram->writeWord(0x0000003c,0x5391e193);
  top->aquila_testharness->mock_ram->writeWord(0x00000040,0x00001f17);
  top->aquila_testharness->mock_ram->writeWord(0x00000044,0xfc3f2023);
  top->aquila_testharness->mock_ram->writeWord(0x00000048,0xff9ff06f);
//reset vector
  top->aquila_testharness->mock_ram->writeWord(0x0000004c,0xf1402573);
  top->aquila_testharness->mock_ram->writeWord(0x00000050,0x00051063);
  top->aquila_testharness->mock_ram->writeWord(0x00000054,0x00000297);
  top->aquila_testharness->mock_ram->writeWord(0x00000058,0x01028293);
  top->aquila_testharness->mock_ram->writeWord(0x0000005c,0x30529073);
  top->aquila_testharness->mock_ram->writeWord(0x00000060,0x18005073);
  top->aquila_testharness->mock_ram->writeWord(0x00000064,0x00000297);
  top->aquila_testharness->mock_ram->writeWord(0x00000068,0x02028293);
  top->aquila_testharness->mock_ram->writeWord(0x0000006c,0x30529073);
  top->aquila_testharness->mock_ram->writeWord(0x00000070,0x800002b7);
}


