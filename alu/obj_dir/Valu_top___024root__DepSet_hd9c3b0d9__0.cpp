// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "verilated.h"

#include "Valu_top__Syms.h"
#include "Valu_top___024root.h"

VL_INLINE_OPT void Valu_top___024root___ico_sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___ico_sequent__TOP__0\n"); );
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
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg = 0U;
        vlSelf->o_led = 0U;
    } else {
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg 
            = (7U & (IData)(vlSelf->alu_top__DOT__o_led_0));
        vlSelf->o_led = vlSelf->alu_top__DOT__o_led_0;
    }
    vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus 
        = ((~ (IData)(vlSelf->o_overflow)) & ((IData)(vlSelf->alu_top__DOT__o_led_0) 
                                              >> 3U));
    vlSelf->o_minus = ((IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus)
                        ? 0xfdU : 0xffU);
}

void Valu_top___024root___eval_ico(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Valu_top___024root___eval_act(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Valu_top__ConstPool__TABLE_hc6d8140b_0;

VL_INLINE_OPT void Valu_top___024root___nba_sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg) 
                     << 1U) | (IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus));
    vlSelf->o_seg = Valu_top__ConstPool__TABLE_hc6d8140b_0
        [__Vtableidx1];
}

void Valu_top___024root___eval_nba(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu_top___024root___eval_triggers__ico(Valu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__ico(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_top___024root___eval_triggers__act(Valu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__act(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__nba(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_top___024root___eval(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu_top___024root___eval_ico(vlSelf);
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
            Valu_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/alu_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Valu_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu_top___024root___eval_debug_assertions(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_a & 0xf0U))) {
        Verilated::overWidthError("i_a");}
    if (VL_UNLIKELY((vlSelf->i_b & 0xf0U))) {
        Verilated::overWidthError("i_b");}
    if (VL_UNLIKELY((vlSelf->i_op & 0xf8U))) {
        Verilated::overWidthError("i_op");}
}
#endif  // VL_DEBUG
