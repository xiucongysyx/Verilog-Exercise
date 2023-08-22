// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREG_TOP__SYMS_H_
#define VERILATED_VREG_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vreg_top.h"

// INCLUDE MODULE CLASSES
#include "Vreg_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vreg_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vreg_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vreg_top___024root             TOP;

    // CONSTRUCTORS
    Vreg_top__Syms(VerilatedContext* contextp, const char* namep, Vreg_top* modelp);
    ~Vreg_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
