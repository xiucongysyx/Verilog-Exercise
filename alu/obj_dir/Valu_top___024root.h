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
    CData/*3:0*/ alu_top__DOT__i_a_2;
    CData/*3:0*/ alu_top__DOT__i_b_2;
    CData/*3:0*/ alu_top__DOT__sub_i_b_2;
    CData/*3:0*/ alu_top__DOT__led_0;
    CData/*3:0*/ alu_top__DOT__led_1;
    CData/*3:0*/ alu_top__DOT__led_3;
    CData/*3:0*/ alu_top__DOT__led_4;
    CData/*3:0*/ alu_top__DOT__led_5;
    CData/*3:0*/ alu_top__DOT__led_6;
    CData/*3:0*/ alu_top__DOT__o_led_0;
    CData/*0:0*/ alu_top__DOT__carry_0;
    CData/*0:0*/ alu_top__DOT__carry_1;
    CData/*0:0*/ alu_top__DOT__overflow_0;
    CData/*0:0*/ alu_top__DOT__overflow_1;
    CData/*0:0*/ alu_top__DOT__max_0;
    CData/*2:0*/ alu_top__DOT____Vcellinp__u0_seg__i_seg;
    CData/*0:0*/ alu_top__DOT____Vcellinp__u0_seg__i_minus;
    CData/*3:0*/ alu_top__DOT__u0_adder__DOT__led;
    CData/*3:0*/ alu_top__DOT__u1_adder__DOT__led;
    CData/*3:0*/ alu_top__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ alu_top__DOT__i0__DOT__i0__DOT__hit;
    CData/*0:0*/ alu_top__DOT__i2__DOT__i0__DOT__lut_out;
    CData/*0:0*/ alu_top__DOT__i2__DOT__i0__DOT__hit;
    CData/*0:0*/ alu_top__DOT__i3__DOT__i0__DOT__lut_out;
    CData/*0:0*/ alu_top__DOT__i3__DOT__i0__DOT__hit;
    CData/*2:0*/ __Vtrigprevexpr___TOP__alu_top__DOT____Vcellinp__u0_seg__i_seg__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*6:0*/, 8> alu_top__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> alu_top__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 8> alu_top__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*3:0*/, 2> alu_top__DOT__i2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 2> alu_top__DOT__i2__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu_top__DOT__i2__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*3:0*/, 2> alu_top__DOT__i3__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 2> alu_top__DOT__i3__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> alu_top__DOT__i3__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
