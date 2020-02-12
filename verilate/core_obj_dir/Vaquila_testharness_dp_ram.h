// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef _Vaquila_testharness_dp_ram_H_
#define _Vaquila_testharness_dp_ram_H_

#include "verilated_heavy.h"
#include "Vaquila_testharness__Dpi.h"

class Vaquila_testharness__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vaquila_testharness_dp_ram) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__strobe_icache,0,0);
    VL_OUT8(__PVT__done_icache_o,0,0);
    VL_IN8(__PVT__strobe_dcache,0,0);
    VL_IN8(__PVT__rw_dcache_i,0,0);
    VL_OUT8(__PVT__done_dcache_o,0,0);
    VL_IN(__PVT__addr_icache_i,31,0);
    VL_OUT(__PVT__rdata_icache_o,31,0);
    VL_IN(__PVT__addr_dcache_i,31,0);
    VL_IN(__PVT__wdata_dcache_i,31,0);
    VL_OUT(__PVT__rdata_dcache_o,31,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__icache_cur_state,1,0);
    VL_SIG8(__PVT__icache_next_state,1,0);
    VL_SIG8(__PVT__dcache_cur_state,1,0);
    VL_SIG8(__PVT__dcache_next_state,1,0);
    VL_SIG8(__PVT__icache_delay_counter,7,0);
    VL_SIG8(__PVT__dcache_delay_counter,7,0);
    VL_SIG8(__PVT__mem[2097152],7,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vdlyvval__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__mem__v1,7,0);
    VL_SIG8(__Vdlyvval__mem__v2,7,0);
    VL_SIG8(__Vdlyvval__mem__v3,7,0);
    VL_SIG(__Vdlyvdim0__mem__v0,20,0);
    VL_SIG(__Vdlyvdim0__mem__v1,20,0);
    VL_SIG(__Vdlyvdim0__mem__v2,20,0);
    VL_SIG(__Vdlyvdim0__mem__v3,20,0);
    static VL_ST_SIG8(__Vtable1___PVT__dcache_next_state[64],1,0);
    
    // INTERNAL VARIABLES
  private:
    Vaquila_testharness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaquila_testharness_dp_ram);  ///< Copying not allowed
  public:
    Vaquila_testharness_dp_ram(const char* name="TOP");
    ~Vaquila_testharness_dp_ram();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vaquila_testharness__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__aquila_testharness__mock_ram__2(Vaquila_testharness__Syms* __restrict vlSymsp);
    static void _sequent__TOP__aquila_testharness__mock_ram__3(Vaquila_testharness__Syms* __restrict vlSymsp);
    static void _settle__TOP__aquila_testharness__mock_ram__1(Vaquila_testharness__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    uint32_t readByte(uint32_t byte_addr);
    uint32_t readWord(uint32_t byte_addr);
    void writeByte(uint32_t byte_addr, uint32_t val);
    void writeWord(uint32_t byte_addr, uint32_t val);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
