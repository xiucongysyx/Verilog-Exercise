// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux241.h for the primary calling header

#ifndef VERILATED_VMUX241___024ROOT_H_
#define VERILATED_VMUX241___024ROOT_H_  // guard

#include "verilated.h"


class Vmux241__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux241___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x0,1,0);
    VL_IN8(x1,1,0);
    VL_IN8(x2,1,0);
    VL_IN8(x3,1,0);
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 4> mux241__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux241__DOT__i0__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux241__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux241___024root(Vmux241__Syms* symsp, const char* v__name);
    ~Vmux241___024root();
    VL_UNCOPYABLE(Vmux241___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
