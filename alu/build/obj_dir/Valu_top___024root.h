// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_top.h for the primary calling header

#ifndef VERILATED_VALU_TOP___024ROOT_H_
#define VERILATED_VALU_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Valu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_a,3,0);
    VL_IN8(i_b,3,0);
    VL_IN8(i_op,2,0);
    VL_OUT8(o_led,3,0);
    VL_OUT8(o_carry,0,0);
    VL_OUT8(o_seg,7,0);
    VL_OUT8(o_minus,7,0);
    VL_OUT8(o_overflow,0,0);
    VL_OUT8(o_max,0,0);
    VL_OUT8(o_equ,0,0);
    CData/*2:0*/ alu_top__DOT____Vcellinp__u0_seg__i_seg;
    CData/*0:0*/ alu_top__DOT____Vcellinp__u0_seg__i_minus;
    CData/*2:0*/ __Vtrigprevexpr___TOP__alu_top__DOT____Vcellinp__u0_seg__i_seg__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*2:0*/, 8> alu_top__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 8> alu_top__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> alu_top__DOT__i2__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu_top__DOT__i2__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> alu_top__DOT__i3__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu_top__DOT__i3__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_top___024root(Valu_top__Syms* symsp, const char* v__name);
    ~Valu_top___024root();
    VL_UNCOPYABLE(Valu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
