
#include <cstdlib>
#include <iostream>
#include <fstream>

#include "Vaquila_soc.h"
#include "verilated.h"

using namespace std;
vluint64_t main_time = 0;   // See comments in first example
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv)
{
  Verilated::commandArgs(argc,argv);
	//sc_clock clk ("clk", 10, 0.5, 3, true);
	Vaquila_soc* top;
	top = new Vaquila_soc("top");
	//top->clk(clk);
	while (!Verilated::gotFinish()) { 
    top->eval();
    //sc_start(1, SC_NS); 
  }
	delete top;
	exit(0);
}
