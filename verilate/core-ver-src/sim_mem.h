
#ifndef _SIM_MEM_H_
#define _SIM_MEM_H_

#include <cstdint>
#include "verilated_vcd_c.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"
#include "verilated.h"
#include <string>
// riscv32
int sim_mem_load_program(Vaquila_testharness_dp_ram* ram, const std::string fn, uint32_t* entry);
int sim_mem_dump_memory(Vaquila_testharness_dp_ram* ram, const std::string fn);

#endif /* _SIM_MEM_H_ */
