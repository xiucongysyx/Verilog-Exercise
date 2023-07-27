// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode38.h for the primary calling header

#include "verilated.h"

#include "Vencode38__Syms.h"
#include "Vencode38__Syms.h"
#include "Vencode38___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode38___024root___dump_triggers__stl(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencode38___024root___eval_triggers__stl(Vencode38___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode38___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode38___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
