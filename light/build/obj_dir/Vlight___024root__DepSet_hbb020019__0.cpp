// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlight.h for the primary calling header

#include "verilated.h"

#include "Vlight__Syms.h"
#include "Vlight___024root.h"

void Vlight___024root___eval_act(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vlight___024root___nba_sequent__TOP__0(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__led;
    __Vdly__led = 0;
    IData/*31:0*/ __Vdly__light__DOT__count;
    __Vdly__light__DOT__count = 0;
    // Body
    __Vdly__light__DOT__count = vlSelf->light__DOT__count;
    __Vdly__led = vlSelf->led;
    if (vlSelf->rst) {
        __Vdly__led = 1U;
        __Vdly__light__DOT__count = 0U;
    } else {
        if ((0U == vlSelf->light__DOT__count)) {
            __Vdly__led = ((0xfffeU & ((IData)(vlSelf->led) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->led) 
                                                     >> 0xfU)));
        }
        __Vdly__light__DOT__count = ((0x4c4b40U <= vlSelf->light__DOT__count)
                                      ? 0U : ((IData)(1U) 
                                              + vlSelf->light__DOT__count));
    }
    vlSelf->led = __Vdly__led;
    vlSelf->light__DOT__count = __Vdly__light__DOT__count;
}

void Vlight___024root___eval_nba(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlight___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vlight___024root___eval_triggers__act(Vlight___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlight___024root___dump_triggers__act(Vlight___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlight___024root___dump_triggers__nba(Vlight___024root* vlSelf);
#endif  // VL_DEBUG

void Vlight___024root___eval(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vlight___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlight___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/xiucong/Verilog-Exercise/light/vsrc/light.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vlight___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlight___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/xiucong/Verilog-Exercise/light/vsrc/light.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlight___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vlight___024root___eval_debug_assertions(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
