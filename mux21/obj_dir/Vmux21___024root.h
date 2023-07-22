// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux21.h for the primary calling header

#ifndef VERILATED_VMUX21___024ROOT_H_
#define VERILATED_VMUX21___024ROOT_H_  // guard

#include "verilated.h"


class Vmux21__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux21___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(s,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux21__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux21___024root(Vmux21__Syms* symsp, const char* v__name);
    ~Vmux21___024root();
    VL_UNCOPYABLE(Vmux21___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
