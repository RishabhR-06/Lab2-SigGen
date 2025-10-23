// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSINEGEN__SYMS_H_
#define VERILATED_VSINEGEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsinegen.h"

// INCLUDE MODULE CLASSES
#include "Vsinegen___024root.h"

// SYMS CLASS (contains all model state)
class Vsinegen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsinegen* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsinegen___024root             TOP;

    // CONSTRUCTORS
    Vsinegen__Syms(VerilatedContext* contextp, const char* namep, Vsinegen* modelp);
    ~Vsinegen__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
