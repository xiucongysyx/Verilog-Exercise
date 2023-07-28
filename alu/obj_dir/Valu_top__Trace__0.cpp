// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+8,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+9,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+10,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+11,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[1]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+12,(vlSelf->alu_top__DOT__i_a_2),4);
        bufp->chgCData(oldp+13,(vlSelf->alu_top__DOT__i_b_2),4);
        bufp->chgCData(oldp+14,(vlSelf->alu_top__DOT__sub_i_b_2),4);
        bufp->chgCData(oldp+15,(vlSelf->alu_top__DOT__led_0),4);
        bufp->chgCData(oldp+16,(vlSelf->alu_top__DOT__led_1),4);
        bufp->chgCData(oldp+17,(vlSelf->alu_top__DOT__led_3),4);
        bufp->chgCData(oldp+18,(vlSelf->alu_top__DOT__led_4),4);
        bufp->chgCData(oldp+19,(vlSelf->alu_top__DOT__led_5),4);
        bufp->chgCData(oldp+20,(vlSelf->alu_top__DOT__led_6),4);
        bufp->chgCData(oldp+21,(vlSelf->alu_top__DOT__o_led_0),4);
        bufp->chgBit(oldp+22,(vlSelf->alu_top__DOT__carry_0));
        bufp->chgBit(oldp+23,(vlSelf->alu_top__DOT__carry_1));
        bufp->chgBit(oldp+24,(vlSelf->alu_top__DOT__overflow_0));
        bufp->chgBit(oldp+25,(vlSelf->alu_top__DOT__overflow_1));
        bufp->chgBit(oldp+26,(vlSelf->alu_top__DOT__max_0));
        bufp->chgCData(oldp+27,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+28,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+29,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+30,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+31,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+32,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+33,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+34,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+35,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+36,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+37,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+38,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+39,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+40,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+41,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+42,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+43,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+44,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+45,((2U | (((IData)(vlSelf->alu_top__DOT__carry_0) 
                                        << 4U) | (IData)(vlSelf->alu_top__DOT__carry_1)))),8);
        bufp->chgCData(oldp+46,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+47,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgBit(oldp+48,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+49,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+50,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+51,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+52,((2U | (((IData)(vlSelf->alu_top__DOT__overflow_0) 
                                        << 4U) | (IData)(vlSelf->alu_top__DOT__overflow_1)))),8);
        bufp->chgCData(oldp+53,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+54,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgBit(oldp+55,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+56,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+57,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+58,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+59,(vlSelf->alu_top__DOT__u0_adder__DOT__led),4);
        bufp->chgBit(oldp+60,(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus));
        bufp->chgCData(oldp+61,(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg),3);
        bufp->chgCData(oldp+62,(vlSelf->alu_top__DOT__u1_adder__DOT__led),4);
    }
    bufp->chgCData(oldp+63,(vlSelf->i_a),4);
    bufp->chgCData(oldp+64,(vlSelf->i_b),4);
    bufp->chgCData(oldp+65,(vlSelf->i_op),3);
    bufp->chgCData(oldp+66,(vlSelf->o_led),4);
    bufp->chgBit(oldp+67,(vlSelf->o_carry));
    bufp->chgCData(oldp+68,(vlSelf->o_seg),8);
    bufp->chgCData(oldp+69,(vlSelf->o_minus),8);
    bufp->chgBit(oldp+70,(vlSelf->o_overflow));
    bufp->chgBit(oldp+71,(vlSelf->o_max));
    bufp->chgBit(oldp+72,(vlSelf->o_equ));
    bufp->chgCData(oldp+73,(((8U & ((~ ((IData)(vlSelf->i_b) 
                                        >> 3U)) << 3U)) 
                             | (7U & (IData)(vlSelf->i_b)))),4);
    bufp->chgCData(oldp+74,((0xfU & (~ (IData)(vlSelf->i_a)))),4);
    bufp->chgBit(oldp+75,(((IData)(vlSelf->i_a) == (IData)(vlSelf->i_b))));
    bufp->chgQData(oldp+76,((0x410300000000ULL | (((QData)((IData)(vlSelf->alu_top__DOT__led_0)) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(vlSelf->alu_top__DOT__led_1)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (~ (IData)(vlSelf->i_a))))) 
                                                         << 0x23U) 
                                                        | (QData)((IData)(
                                                                          (0x8143070U 
                                                                           | (((IData)(vlSelf->alu_top__DOT__led_3) 
                                                                               << 0x1cU) 
                                                                              | (((IData)(vlSelf->alu_top__DOT__led_4) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->alu_top__DOT__led_5) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->alu_top__DOT__led_6) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->i_a))))))))))))),56);
}

void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_cleanup\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
