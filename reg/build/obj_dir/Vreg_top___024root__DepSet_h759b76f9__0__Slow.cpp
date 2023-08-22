// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "verilated.h"

#include "Vreg_top__Syms.h"
#include "Vreg_top___024root.h"

VL_ATTR_COLD void Vreg_top___024root___eval_static(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vreg_top___024root___eval_initial(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vreg_top___024root___eval_final(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vreg_top___024root___eval_triggers__stl(Vreg_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__stl(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___eval_stl(Vreg_top___024root* vlSelf);

VL_ATTR_COLD void Vreg_top___024root___eval_settle(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vreg_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vreg_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/xiucong/Verilog-Exercise/reg/vsrc/reg_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vreg_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vreg_top__ConstPool__TABLE_heeb17680_0;

VL_ATTR_COLD void Vreg_top___024root___stl_sequent__TOP__0(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->o_rand_flag = vlSelf->i_rand_flag;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->o_led));
    vlSelf->o_seg_0 = Vreg_top__ConstPool__TABLE_heeb17680_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->o_led) 
                            >> 4U));
    vlSelf->o_seg_1 = Vreg_top__ConstPool__TABLE_heeb17680_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vreg_top___024root___eval_stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vreg_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__ico(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_top___024root___ctor_var_reset(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->i_sed = 0;
    vlSelf->i_rand_flag = 0;
    vlSelf->o_seg_1 = 0;
    vlSelf->o_seg_0 = 0;
    vlSelf->o_led = 0;
    vlSelf->o_rand_flag = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT__count = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT__o_q_1 = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u1__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u2__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q = 0;
    vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q = 0;
    vlSelf->__Vdly__reg_top__DOT__u0_lfsr__DOT__count = 0;
    vlSelf->__Vdly__o_led = 0;
    vlSelf->__Vdly__reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
}
