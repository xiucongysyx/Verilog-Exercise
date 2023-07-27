// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode38.h for the primary calling header

#include "verilated.h"

#include "Vencode38__Syms.h"
#include "Vencode38___024root.h"

extern const VlUnpacked<CData/*2:0*/, 512> Vencode38__ConstPool__TABLE_h3fa38edd_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vencode38__ConstPool__TABLE_h3133b662_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vencode38__ConstPool__TABLE_h43c6de1e_0;

VL_INLINE_OPT void Vencode38___024root___ico_sequent__TOP__0(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->i_code) << 1U) 
                    | (IData)(vlSelf->i_en));
    vlSelf->o_code = Vencode38__ConstPool__TABLE_h3fa38edd_0
        [__Vtableidx1];
    vlSelf->o_en_flag = Vencode38__ConstPool__TABLE_h3133b662_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->o_code;
    vlSelf->o_seg = Vencode38__ConstPool__TABLE_h43c6de1e_0
        [__Vtableidx2];
}

void Vencode38___024root___eval_ico(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vencode38___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vencode38___024root___eval_act(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_act\n"); );
}

void Vencode38___024root___eval_nba(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_nba\n"); );
}

void Vencode38___024root___eval_triggers__ico(Vencode38___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__ico(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode38___024root___eval_triggers__act(Vencode38___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__act(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__nba(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode38___024root___eval(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vencode38___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vencode38___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/xiucong/Verilog-Exercise/encode38/vsrc/encode38.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vencode38___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vencode38___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencode38___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/xiucong/Verilog-Exercise/encode38/vsrc/encode38.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vencode38___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencode38___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/xiucong/Verilog-Exercise/encode38/vsrc/encode38.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencode38___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencode38___024root___eval_debug_assertions(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_en & 0xfeU))) {
        Verilated::overWidthError("i_en");}
}
#endif  // VL_DEBUG
