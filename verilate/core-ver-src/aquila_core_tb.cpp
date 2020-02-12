
#include <cstdlib>
#include <iostream>
#include <fstream>

#include "verilated_vcd_c.h"
#include "Vaquila_testharness.h"
#include "verilated.h"

using namespace std;
static vluint64_t cpuTime = 0;
double sc_time_stamp() { return cpuTime; }

int main(int argc, char **argv)
{
  Verilated::commandArgs(argc,argv);
	//sc_clock clk ("clk", 10, 0.5, 3, true);
	Vaquila_testharness* top;
	top = new Vaquila_testharness("top");
  Verilated::traceEverOn(true);
  VerilatedVcdC* Vcdfp = new VerilatedVcdC;
  top->trace(Vcdfp, 99);
  Vcdfp->open("aquila_core.vcd");
  top->rst_n = 0;
  top->main_memory_addr = 0x00000000;
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
	
  for (int i = 0 ; i < 100 ; i ++){
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
