// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsm__Syms.h"


void Vfsm___024root__trace_chg_sub_0(Vfsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_chg_top_0\n"); );
    // Init
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfsm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfsm___024root__trace_chg_sub_0(Vfsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->in));
    bufp->chgBit(oldp+2,(vlSelf->reset));
    bufp->chgBit(oldp+3,(vlSelf->out));
    bufp->chgCData(oldp+4,(vlSelf->fsm__DOT__state_din),3);
    bufp->chgCData(oldp+5,(vlSelf->fsm__DOT__state_dout),3);
    bufp->chgBit(oldp+6,(vlSelf->fsm__DOT__in_d1));
    bufp->chgBit(oldp+7,(vlSelf->fsm__DOT__in_d2));
    bufp->chgBit(oldp+8,(((IData)(vlSelf->fsm__DOT__in_d1) 
                          == (IData)(vlSelf->in))));
    bufp->chgBit(oldp+9,(((IData)(vlSelf->fsm__DOT__in_d2) 
                          == (IData)(vlSelf->in))));
    bufp->chgBit(oldp+10,((((IData)(vlSelf->fsm__DOT__in_d1) 
                            == (IData)(vlSelf->in)) 
                           & ((IData)(vlSelf->fsm__DOT__in_d2) 
                              == (IData)(vlSelf->in)))));
}

void Vfsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_cleanup\n"); );
    // Init
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
