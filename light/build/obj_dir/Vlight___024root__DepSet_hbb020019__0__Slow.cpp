// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlight.h for the primary calling header

#include "verilated.h"

#include "Vlight__Syms.h"
#include "Vlight___024root.h"

VL_ATTR_COLD void Vlight___024root___eval_static(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vlight___024root___eval_initial(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vlight___024root___eval_final(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlight___024root___eval_settle(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlight___024root___dump_triggers__act(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlight___024root___dump_triggers__nba(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlight___024root___ctor_var_reset(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->led = 0;
    vlSelf->light__DOT__count = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
}
