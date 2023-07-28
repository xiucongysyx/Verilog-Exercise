// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_TOP__SYMS_H_
#define VERILATED_VALU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Valu_top.h"

// INCLUDE MODULE CLASSES
#include "Valu_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Valu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Valu_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Valu_top___024root             TOP;

    // CONSTRUCTORS
    Valu_top__Syms(VerilatedContext* contextp, const char* namep, Valu_top* modelp);
    ~Valu_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
