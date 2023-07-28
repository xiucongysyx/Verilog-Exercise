// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "verilated.h"

#include "Valu_top__Syms.h"
#include "Valu_top___024root.h"

VL_ATTR_COLD void Valu_top___024root___eval_static(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu_top___024root___eval_initial__TOP(Valu_top___024root* vlSelf);

VL_ATTR_COLD void Valu_top___024root___eval_initial(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_initial\n"); );
    // Body
    Valu_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__alu_top__DOT____Vcellinp__u0_seg__i_seg__0 
        = vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg;
}

VL_ATTR_COLD void Valu_top___024root___eval_initial__TOP(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Valu_top___024root___eval_final(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Valu_top___024root___eval_triggers__stl(Valu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__stl(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___eval_stl(Valu_top___024root* vlSelf);

VL_ATTR_COLD void Valu_top___024root___eval_settle(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Valu_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Valu_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Valu_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__stl(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_top___024root___stl_sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->i_op) 
                                                   == 
                                                   vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [5U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [6U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                      [7U]));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->i_op) 
                                                   == 
                                                   vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->i_op) 
                                                   == 
                                                   vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_op) 
                                                      == 
                                                      vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->o_equ = ((7U == (IData)(vlSelf->i_op)) 
                     & ((IData)(vlSelf->i_a) == (IData)(vlSelf->i_b)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x70U | (IData)(vlSelf->i_a));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x20U | (0xfU & (~ (IData)(vlSelf->i_a))));
    vlSelf->alu_top__DOT__led_3 = ((IData)(vlSelf->i_a) 
                                   & (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__led_4 = ((IData)(vlSelf->i_a) 
                                   | (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__led_5 = ((IData)(vlSelf->i_a) 
                                   ^ (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->i_a;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & (~ (IData)(vlSelf->i_a)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->i_a) ^ (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = ((IData)(vlSelf->i_a) | (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = ((IData)(vlSelf->i_a) & (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__max_0 = ((IData)(vlSelf->i_a) 
                                   > (IData)(vlSelf->i_b));
    if ((8U & (IData)(vlSelf->i_b))) {
        vlSelf->alu_top__DOT__i_b_2 = (0xfU & ((IData)(1U) 
                                               + ((8U 
                                                   & (IData)(vlSelf->i_b)) 
                                                  | (7U 
                                                     & (~ (IData)(vlSelf->i_b))))));
        vlSelf->alu_top__DOT__sub_i_b_2 = (0xfU & (
                                                   (8U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->i_b) 
                                                         >> 3U)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->i_b))));
    } else {
        vlSelf->alu_top__DOT__i_b_2 = (0xfU & (IData)(vlSelf->i_b));
        vlSelf->alu_top__DOT__sub_i_b_2 = (0xfU & ((IData)(1U) 
                                                   + 
                                                   ((8U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->i_b) 
                                                          >> 3U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (~ (IData)(vlSelf->i_b))))));
    }
    vlSelf->alu_top__DOT__i_a_2 = (0xfU & ((8U & (IData)(vlSelf->i_a))
                                            ? ((IData)(1U) 
                                               + ((8U 
                                                   & (IData)(vlSelf->i_a)) 
                                                  | (7U 
                                                     & (~ (IData)(vlSelf->i_a)))))
                                            : (IData)(vlSelf->i_a)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x30U | (IData)(vlSelf->alu_top__DOT__led_3));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x40U | (IData)(vlSelf->alu_top__DOT__led_4));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | (IData)(vlSelf->alu_top__DOT__led_5));
    if (vlSelf->alu_top__DOT__max_0) {
        vlSelf->o_max = (6U == (IData)(vlSelf->i_op));
        vlSelf->alu_top__DOT__led_6 = vlSelf->i_a;
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->i_a;
    } else {
        vlSelf->o_max = 0U;
        vlSelf->alu_top__DOT__led_6 = vlSelf->i_b;
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->i_b;
    }
    vlSelf->alu_top__DOT__carry_0 = (1U & (((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                            + (IData)(vlSelf->alu_top__DOT__i_b_2)) 
                                           >> 4U));
    vlSelf->alu_top__DOT__carry_1 = (1U & (((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                            + (IData)(vlSelf->alu_top__DOT__sub_i_b_2)) 
                                           >> 4U));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = (1U & (((IData)(vlSelf->alu_top__DOT__i_a_2) 
                  + (IData)(vlSelf->alu_top__DOT__sub_i_b_2)) 
                 >> 4U));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = (1U & (((IData)(vlSelf->alu_top__DOT__i_a_2) 
                  + (IData)(vlSelf->alu_top__DOT__i_b_2)) 
                 >> 4U));
    vlSelf->alu_top__DOT__u0_adder__DOT__led = (0xfU 
                                                & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                   + (IData)(vlSelf->alu_top__DOT__i_b_2)));
    vlSelf->alu_top__DOT__u1_adder__DOT__led = (0xfU 
                                                & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                   + (IData)(vlSelf->alu_top__DOT__sub_i_b_2)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x60U | (IData)(vlSelf->alu_top__DOT__led_6));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = vlSelf->alu_top__DOT__carry_0;
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (2U | (IData)(vlSelf->alu_top__DOT__carry_1));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->i_op) == vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->i_op) == vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->o_carry = vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out;
    vlSelf->alu_top__DOT__overflow_0 = (((1U & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                >> 3U)) 
                                         == (1U & ((IData)(vlSelf->alu_top__DOT__i_b_2) 
                                                   >> 3U))) 
                                        & ((1U & ((IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led) 
                                                  >> 3U)) 
                                           != (1U & 
                                               ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                >> 3U))));
    if ((8U & (IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led))) {
        vlSelf->alu_top__DOT__led_0 = ((8U & (IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led)) 
                                       | (7U & (~ (IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led))));
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7U] 
            = ((8U & (IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led)) 
               | (7U & (~ (IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led))));
    } else {
        vlSelf->alu_top__DOT__led_0 = vlSelf->alu_top__DOT__u0_adder__DOT__led;
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7U] 
            = vlSelf->alu_top__DOT__u0_adder__DOT__led;
    }
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = (((1U & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                   >> 3U)) == (1U & ((IData)(vlSelf->alu_top__DOT__i_b_2) 
                                     >> 3U))) & ((1U 
                                                  & ((IData)(vlSelf->alu_top__DOT__u0_adder__DOT__led) 
                                                     >> 3U)) 
                                                 != 
                                                 (1U 
                                                  & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                     >> 3U))));
    vlSelf->alu_top__DOT__overflow_1 = (((1U & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                >> 3U)) 
                                         == (1U & ((IData)(vlSelf->alu_top__DOT__sub_i_b_2) 
                                                   >> 3U))) 
                                        & ((1U & ((IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led) 
                                                  >> 3U)) 
                                           != (1U & 
                                               ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                >> 3U))));
    if ((8U & (IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led))) {
        vlSelf->alu_top__DOT__led_1 = ((8U & (IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led)) 
                                       | (7U & (~ (IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led))));
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6U] 
            = ((8U & (IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led)) 
               | (7U & (~ (IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led))));
    } else {
        vlSelf->alu_top__DOT__led_1 = vlSelf->alu_top__DOT__u1_adder__DOT__led;
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6U] 
            = vlSelf->alu_top__DOT__u1_adder__DOT__led;
    }
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = (((1U & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                   >> 3U)) == (1U & ((IData)(vlSelf->alu_top__DOT__sub_i_b_2) 
                                     >> 3U))) & ((1U 
                                                  & ((IData)(vlSelf->alu_top__DOT__u1_adder__DOT__led) 
                                                     >> 3U)) 
                                                 != 
                                                 (1U 
                                                  & ((IData)(vlSelf->alu_top__DOT__i_a_2) 
                                                     >> 3U))));
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = vlSelf->alu_top__DOT__overflow_0;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = vlSelf->alu_top__DOT__led_0;
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (2U | (IData)(vlSelf->alu_top__DOT__overflow_1));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x10U | (IData)(vlSelf->alu_top__DOT__led_1));
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->i_op) == vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
            [0U]) & vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->i_op) == vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
               [1U]) & vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->o_overflow = vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->i_op) == vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_op) == 
                          vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->alu_top__DOT__o_led_0 = vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out;
    if (vlSelf->o_overflow) {
        vlSelf->o_led = 0U;
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg = 0U;
    } else {
        vlSelf->o_led = vlSelf->alu_top__DOT__o_led_0;
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg 
            = (7U & (IData)(vlSelf->alu_top__DOT__o_led_0));
    }
    vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus 
        = ((~ (IData)(vlSelf->o_overflow)) & ((IData)(vlSelf->alu_top__DOT__o_led_0) 
                                              >> 3U));
    vlSelf->o_minus = ((IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus)
                        ? 0xfdU : 0xffU);
}

VL_ATTR_COLD void Valu_top___024root___eval_stl(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valu_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__ico(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Valu_top___024root___dump_triggers__act(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] alu_top.__Vcellinp__u0_seg__i_seg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__nba(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] alu_top.__Vcellinp__u0_seg__i_seg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_top___024root___ctor_var_reset(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_a = VL_RAND_RESET_I(4);
    vlSelf->i_b = VL_RAND_RESET_I(4);
    vlSelf->i_op = VL_RAND_RESET_I(3);
    vlSelf->o_led = VL_RAND_RESET_I(4);
    vlSelf->o_carry = VL_RAND_RESET_I(1);
    vlSelf->o_seg = VL_RAND_RESET_I(8);
    vlSelf->o_minus = VL_RAND_RESET_I(8);
    vlSelf->o_overflow = VL_RAND_RESET_I(1);
    vlSelf->o_max = VL_RAND_RESET_I(1);
    vlSelf->o_equ = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__i_a_2 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__i_b_2 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__sub_i_b_2 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_0 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_1 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_3 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_4 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_5 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__led_6 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__o_led_0 = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__carry_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__carry_1 = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__overflow_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__overflow_1 = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__max_0 = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg = VL_RAND_RESET_I(3);
    vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__u0_adder__DOT__led = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__u1_adder__DOT__led = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__alu_top__DOT____Vcellinp__u0_seg__i_seg__0 = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
