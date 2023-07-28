// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "verilated.h"

#include "Valu_top__Syms.h"
#include "Valu_top__Syms.h"
#include "Valu_top___024root.h"

void Valu_top___024root___ctor_var_reset(Valu_top___024root* vlSelf);

Valu_top___024root::Valu_top___024root(Valu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_top___024root___ctor_var_reset(this);
}

void Valu_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu_top___024root::~Valu_top___024root() {
}
