// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "verilated.h"

#include "Vreg_top__Syms.h"
#include "Vreg_top__Syms.h"
#include "Vreg_top___024root.h"

void Vreg_top___024root___ctor_var_reset(Vreg_top___024root* vlSelf);

Vreg_top___024root::Vreg_top___024root(Vreg_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreg_top___024root___ctor_var_reset(this);
}

void Vreg_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vreg_top___024root::~Vreg_top___024root() {
}
