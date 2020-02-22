
#ifndef _SIM_MEM_H_
#define _SIM_MEM_H_

#include <cstdint>
#include "verilated_vcd_c.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"
#include "verilated.h"
#include <string>
#include <map>
// riscv32
std::map<std::string, uint64_t> sim_mem_load_program(Vaquila_testharness_dp_ram* ram, const std::string fn, uint32_t* entry);
int sim_mem_dump_memory(Vaquila_testharness_dp_ram* ram, const std::string fn);
uint32_t sim_mem_tohost_monitor(Vaquila_testharness_dp_ram* ram, uint64_t tohost_addr);
#endif /* _SIM_MEM_H_ */
