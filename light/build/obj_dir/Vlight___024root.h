// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlight.h for the primary calling header

#ifndef VERILATED_VLIGHT___024ROOT_H_
#define VERILATED_VLIGHT___024ROOT_H_  // guard

#include "verilated.h"


class Vlight__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlight___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(led,15,0);
    IData/*31:0*/ light__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlight__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlight___024root(Vlight__Syms* symsp, const char* v__name);
    ~Vlight___024root();
    VL_UNCOPYABLE(Vlight___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
