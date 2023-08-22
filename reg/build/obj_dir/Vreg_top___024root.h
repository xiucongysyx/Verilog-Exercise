// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_top.h for the primary calling header

#ifndef VERILATED_VREG_TOP___024ROOT_H_
#define VERILATED_VREG_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vreg_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreg_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_sed,7,0);
    VL_IN8(i_rand_flag,0,0);
    VL_OUT8(o_seg_1,7,0);
    VL_OUT8(o_seg_0,7,0);
    VL_OUT8(o_led,7,0);
    VL_OUT8(o_rand_flag,0,0);
    CData/*3:0*/ reg_top__DOT__u0_lfsr__DOT__count;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT__o_q_1;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u1__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u2__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q;
    CData/*0:0*/ reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q;
    CData/*3:0*/ __Vdly__reg_top__DOT__u0_lfsr__DOT__count;
    CData/*7:0*/ __Vdly__o_led;
    CData/*0:0*/ __Vdly__reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreg_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreg_top___024root(Vreg_top__Syms* symsp, const char* v__name);
    ~Vreg_top___024root();
    VL_UNCOPYABLE(Vreg_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
