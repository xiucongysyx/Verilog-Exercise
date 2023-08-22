// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg_top__Syms.h"


void Vreg_top___024root__trace_chg_sub_0(Vreg_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreg_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_chg_top_0\n"); );
    // Init
    Vreg_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_top___024root*>(voidSelf);
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreg_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vreg_top___024root__trace_chg_sub_0(Vreg_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q) 
                                 << 7U) | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q) 
                                            << 6U) 
                                           | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q) 
                                               << 5U) 
                                              | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u2__o_q) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u1__o_q) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q))))))))),8);
        bufp->chgBit(oldp+1,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q));
        bufp->chgBit(oldp+2,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u1__o_q));
        bufp->chgBit(oldp+3,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u2__o_q));
        bufp->chgBit(oldp+4,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q));
        bufp->chgBit(oldp+5,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q));
        bufp->chgBit(oldp+6,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q));
        bufp->chgBit(oldp+7,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q));
        bufp->chgBit(oldp+8,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q));
    }
    bufp->chgBit(oldp+9,(vlSelf->clk));
    bufp->chgBit(oldp+10,(vlSelf->rst));
    bufp->chgCData(oldp+11,(vlSelf->i_sed),8);
    bufp->chgBit(oldp+12,(vlSelf->i_rand_flag));
    bufp->chgCData(oldp+13,(vlSelf->o_seg_1),8);
    bufp->chgCData(oldp+14,(vlSelf->o_seg_0),8);
    bufp->chgCData(oldp+15,(vlSelf->o_led),8);
    bufp->chgBit(oldp+16,(vlSelf->o_rand_flag));
    bufp->chgCData(oldp+17,(vlSelf->reg_top__DOT__u0_lfsr__DOT__count),4);
    bufp->chgBit(oldp+18,(((8U == (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT__count))
                            ? ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q) 
                               ^ ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q) 
                                  ^ ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q) 
                                     ^ (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q))))
                            : (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT__o_q_1))));
    bufp->chgBit(oldp+19,(vlSelf->reg_top__DOT__u0_lfsr__DOT__o_q_1));
    bufp->chgCData(oldp+20,((0xfU & (IData)(vlSelf->o_led))),4);
    bufp->chgCData(oldp+21,((0xfU & ((IData)(vlSelf->o_led) 
                                     >> 4U))),4);
}

void Vreg_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_cleanup\n"); );
    // Init
    Vreg_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_top___024root*>(voidSelf);
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
