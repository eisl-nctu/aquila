// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vaquila_testharness__Syms_H_
#define _Vaquila_testharness__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vaquila_testharness.h"
#include "Vaquila_testharness_aquila_testharness.h"
#include "Vaquila_testharness_dp_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vaquila_testharness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vaquila_testharness*           TOPp;
    Vaquila_testharness_aquila_testharness TOP__aquila_testharness;
    Vaquila_testharness_dp_ram     TOP__aquila_testharness__mock_ram;
    
    // CREATORS
    Vaquila_testharness__Syms(Vaquila_testharness* topp, const char* namep);
    ~Vaquila_testharness__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
