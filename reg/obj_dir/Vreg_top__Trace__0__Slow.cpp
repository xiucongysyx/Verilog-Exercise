// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg_top__Syms.h"


VL_ATTR_COLD void Vreg_top___024root__trace_init_sub__TOP__0(Vreg_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"i_sed", false,-1, 7,0);
    tracep->declBit(c+13,"i_rand_flag", false,-1);
    tracep->declBus(c+14,"o_seg_1", false,-1, 7,0);
    tracep->declBus(c+15,"o_seg_0", false,-1, 7,0);
    tracep->declBus(c+16,"o_led", false,-1, 7,0);
    tracep->declBit(c+17,"o_rand_flag", false,-1);
    tracep->pushNamePrefix("reg_top ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"i_sed", false,-1, 7,0);
    tracep->declBit(c+13,"i_rand_flag", false,-1);
    tracep->declBus(c+14,"o_seg_1", false,-1, 7,0);
    tracep->declBus(c+15,"o_seg_0", false,-1, 7,0);
    tracep->declBus(c+16,"o_led", false,-1, 7,0);
    tracep->declBit(c+17,"o_rand_flag", false,-1);
    tracep->pushNamePrefix("u0_lfsr ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"i_sed", false,-1, 7,0);
    tracep->declBit(c+13,"i_rand_flag", false,-1);
    tracep->declBus(c+16,"o_rand", false,-1, 7,0);
    tracep->declBus(c+18,"count", false,-1, 3,0);
    tracep->declBus(c+1,"o_q", false,-1, 7,0);
    tracep->declBit(c+19,"o_q_0", false,-1);
    tracep->declBit(c+20,"o_q_1", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+19,"i_d", false,-1);
    tracep->declBit(c+2,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+2,"i_d", false,-1);
    tracep->declBit(c+3,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+3,"i_d", false,-1);
    tracep->declBit(c+4,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+4,"i_d", false,-1);
    tracep->declBit(c+5,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+5,"i_d", false,-1);
    tracep->declBit(c+6,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+6,"i_d", false,-1);
    tracep->declBit(c+7,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+7,"i_d", false,-1);
    tracep->declBit(c+8,"o_q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+8,"i_d", false,-1);
    tracep->declBit(c+9,"o_q", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_seg_hex ");
    tracep->declBus(c+16,"i_seg", false,-1, 7,0);
    tracep->declBus(c+15,"o_seg_0", false,-1, 7,0);
    tracep->declBus(c+14,"o_seg_1", false,-1, 7,0);
    tracep->pushNamePrefix("u0_seg ");
    tracep->declBus(c+21,"i_seg", false,-1, 3,0);
    tracep->declBus(c+15,"o_seg", false,-1, 7,0);
    tracep->declBus(c+23,"num0", false,-1, 7,0);
    tracep->declBus(c+24,"num1", false,-1, 7,0);
    tracep->declBus(c+25,"num2", false,-1, 7,0);
    tracep->declBus(c+26,"num3", false,-1, 7,0);
    tracep->declBus(c+27,"num4", false,-1, 7,0);
    tracep->declBus(c+28,"num5", false,-1, 7,0);
    tracep->declBus(c+29,"num6", false,-1, 7,0);
    tracep->declBus(c+30,"num7", false,-1, 7,0);
    tracep->declBus(c+31,"num8", false,-1, 7,0);
    tracep->declBus(c+32,"num9", false,-1, 7,0);
    tracep->declBus(c+33,"numa", false,-1, 7,0);
    tracep->declBus(c+34,"numb", false,-1, 7,0);
    tracep->declBus(c+35,"numc", false,-1, 7,0);
    tracep->declBus(c+36,"numd", false,-1, 7,0);
    tracep->declBus(c+37,"nume", false,-1, 7,0);
    tracep->declBus(c+38,"numf", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_seg ");
    tracep->declBus(c+22,"i_seg", false,-1, 3,0);
    tracep->declBus(c+14,"o_seg", false,-1, 7,0);
    tracep->declBus(c+23,"num0", false,-1, 7,0);
    tracep->declBus(c+24,"num1", false,-1, 7,0);
    tracep->declBus(c+25,"num2", false,-1, 7,0);
    tracep->declBus(c+26,"num3", false,-1, 7,0);
    tracep->declBus(c+27,"num4", false,-1, 7,0);
    tracep->declBus(c+28,"num5", false,-1, 7,0);
    tracep->declBus(c+29,"num6", false,-1, 7,0);
    tracep->declBus(c+30,"num7", false,-1, 7,0);
    tracep->declBus(c+31,"num8", false,-1, 7,0);
    tracep->declBus(c+32,"num9", false,-1, 7,0);
    tracep->declBus(c+33,"numa", false,-1, 7,0);
    tracep->declBus(c+34,"numb", false,-1, 7,0);
    tracep->declBus(c+35,"numc", false,-1, 7,0);
    tracep->declBus(c+36,"numd", false,-1, 7,0);
    tracep->declBus(c+37,"nume", false,-1, 7,0);
    tracep->declBus(c+38,"numf", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vreg_top___024root__trace_init_top(Vreg_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_init_top\n"); );
    // Body
    Vreg_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreg_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreg_top___024root__trace_register(Vreg_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vreg_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vreg_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vreg_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreg_top___024root__trace_full_sub_0(Vreg_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreg_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_full_top_0\n"); );
    // Init
    Vreg_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_top___024root*>(voidSelf);
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreg_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreg_top___024root__trace_full_sub_0(Vreg_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q) 
                              << 7U) | (((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q) 
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
    bufp->fullBit(oldp+2,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u0__o_q));
    bufp->fullBit(oldp+3,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u1__o_q));
    bufp->fullBit(oldp+4,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u2__o_q));
    bufp->fullBit(oldp+5,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q));
    bufp->fullBit(oldp+6,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q));
    bufp->fullBit(oldp+7,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q));
    bufp->fullBit(oldp+8,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u6__o_q));
    bufp->fullBit(oldp+9,(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q));
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullCData(oldp+12,(vlSelf->i_sed),8);
    bufp->fullBit(oldp+13,(vlSelf->i_rand_flag));
    bufp->fullCData(oldp+14,(vlSelf->o_seg_1),8);
    bufp->fullCData(oldp+15,(vlSelf->o_seg_0),8);
    bufp->fullCData(oldp+16,(vlSelf->o_led),8);
    bufp->fullBit(oldp+17,(vlSelf->o_rand_flag));
    bufp->fullCData(oldp+18,(vlSelf->reg_top__DOT__u0_lfsr__DOT__count),4);
    bufp->fullBit(oldp+19,(((8U == (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT__count))
                             ? ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u7__o_q) 
                                ^ ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u5__o_q) 
                                   ^ ((IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u3__o_q) 
                                      ^ (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT____Vcellout__u4__o_q))))
                             : (IData)(vlSelf->reg_top__DOT__u0_lfsr__DOT__o_q_1))));
    bufp->fullBit(oldp+20,(vlSelf->reg_top__DOT__u0_lfsr__DOT__o_q_1));
    bufp->fullCData(oldp+21,((0xfU & (IData)(vlSelf->o_led))),4);
    bufp->fullCData(oldp+22,((0xfU & ((IData)(vlSelf->o_led) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+23,(0xfcU),8);
    bufp->fullCData(oldp+24,(0x60U),8);
    bufp->fullCData(oldp+25,(0xdaU),8);
    bufp->fullCData(oldp+26,(0xf2U),8);
    bufp->fullCData(oldp+27,(0x66U),8);
    bufp->fullCData(oldp+28,(0xb6U),8);
    bufp->fullCData(oldp+29,(0xbeU),8);
    bufp->fullCData(oldp+30,(0xe0U),8);
    bufp->fullCData(oldp+31,(0xfeU),8);
    bufp->fullCData(oldp+32,(0xe6U),8);
    bufp->fullCData(oldp+33,(0xeeU),8);
    bufp->fullCData(oldp+34,(0x3eU),8);
    bufp->fullCData(oldp+35,(0x9cU),8);
    bufp->fullCData(oldp+36,(0x7aU),8);
    bufp->fullCData(oldp+37,(0x9eU),8);
    bufp->fullCData(oldp+38,(0x8eU),8);
}
