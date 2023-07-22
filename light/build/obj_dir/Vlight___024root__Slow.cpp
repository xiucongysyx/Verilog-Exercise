// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlight.h for the primary calling header

#include "verilated.h"

#include "Vlight__Syms.h"
#include "Vlight__Syms.h"
#include "Vlight___024root.h"

void Vlight___024root___ctor_var_reset(Vlight___024root* vlSelf);

Vlight___024root::Vlight___024root(Vlight__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlight___024root___ctor_var_reset(this);
}

void Vlight___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlight___024root::~Vlight___024root() {
}
