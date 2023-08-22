// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsm__Syms.h"


VL_ATTR_COLD void Vfsm___024root__trace_init_sub__TOP__0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"in", false,-1);
    tracep->declBit(c+3,"reset", false,-1);
    tracep->declBit(c+4,"out", false,-1);
    tracep->pushNamePrefix("fsm ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"in", false,-1);
    tracep->declBit(c+3,"reset", false,-1);
    tracep->declBit(c+4,"out", false,-1);
    tracep->declBus(c+12,"S0", false,-1, 2,0);
    tracep->declBus(c+13,"S1", false,-1, 2,0);
    tracep->declBus(c+14,"S2", false,-1, 2,0);
    tracep->declBus(c+15,"S3", false,-1, 2,0);
    tracep->declBus(c+16,"S4", false,-1, 2,0);
    tracep->declBus(c+5,"state_din", false,-1, 2,0);
    tracep->declBus(c+6,"state_dout", false,-1, 2,0);
    tracep->declBit(c+7,"in_d1", false,-1);
    tracep->declBit(c+8,"in_d2", false,-1);
    tracep->declBit(c+9,"in_flag_p", false,-1);
    tracep->declBit(c+10,"in_flag_n", false,-1);
    tracep->declBit(c+11,"in_flag", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vfsm___024root__trace_init_top(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_init_top\n"); );
    // Body
    Vfsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfsm___024root__trace_register(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfsm___024root__trace_full_sub_0(Vfsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_full_top_0\n"); );
    // Init
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfsm___024root__trace_full_sub_0(Vfsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->in));
    bufp->fullBit(oldp+3,(vlSelf->reset));
    bufp->fullBit(oldp+4,(vlSelf->out));
    bufp->fullCData(oldp+5,(vlSelf->fsm__DOT__state_din),3);
    bufp->fullCData(oldp+6,(vlSelf->fsm__DOT__state_dout),3);
    bufp->fullBit(oldp+7,(vlSelf->fsm__DOT__in_d1));
    bufp->fullBit(oldp+8,(vlSelf->fsm__DOT__in_d2));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->fsm__DOT__in_d1) 
                           == (IData)(vlSelf->in))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->fsm__DOT__in_d2) 
                            == (IData)(vlSelf->in))));
    bufp->fullBit(oldp+11,((((IData)(vlSelf->fsm__DOT__in_d1) 
                             == (IData)(vlSelf->in)) 
                            & ((IData)(vlSelf->fsm__DOT__in_d2) 
                               == (IData)(vlSelf->in)))));
    bufp->fullCData(oldp+12,(0U),3);
    bufp->fullCData(oldp+13,(1U),3);
    bufp->fullCData(oldp+14,(2U),3);
    bufp->fullCData(oldp+15,(3U),3);
    bufp->fullCData(oldp+16,(4U),3);
}
