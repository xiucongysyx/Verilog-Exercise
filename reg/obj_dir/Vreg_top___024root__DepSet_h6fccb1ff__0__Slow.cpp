// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "verilated.h"

#include "Vreg_top__Syms.h"
#include "Vreg_top__Syms.h"
#include "Vreg_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__stl(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_top___024root___eval_triggers__stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
