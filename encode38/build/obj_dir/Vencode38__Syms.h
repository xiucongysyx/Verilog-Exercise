// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODE38__SYMS_H_
#define VERILATED_VENCODE38__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vencode38.h"

// INCLUDE MODULE CLASSES
#include "Vencode38___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vencode38__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vencode38* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vencode38___024root            TOP;

    // CONSTRUCTORS
    Vencode38__Syms(VerilatedContext* contextp, const char* namep, Vencode38* modelp);
    ~Vencode38__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
