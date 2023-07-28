// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


VL_ATTR_COLD void Valu_top___024root__trace_init_sub__TOP__0(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBus(c+66,"i_op", false,-1, 2,0);
    tracep->declBus(c+67,"o_led", false,-1, 3,0);
    tracep->declBit(c+68,"o_carry", false,-1);
    tracep->declBus(c+69,"o_seg", false,-1, 7,0);
    tracep->declBus(c+70,"o_minus", false,-1, 7,0);
    tracep->declBit(c+71,"o_overflow", false,-1);
    tracep->declBit(c+72,"o_max", false,-1);
    tracep->declBit(c+73,"o_equ", false,-1);
    tracep->pushNamePrefix("alu_top ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBus(c+66,"i_op", false,-1, 2,0);
    tracep->declBus(c+67,"o_led", false,-1, 3,0);
    tracep->declBit(c+68,"o_carry", false,-1);
    tracep->declBus(c+69,"o_seg", false,-1, 7,0);
    tracep->declBus(c+70,"o_minus", false,-1, 7,0);
    tracep->declBit(c+71,"o_overflow", false,-1);
    tracep->declBit(c+72,"o_max", false,-1);
    tracep->declBit(c+73,"o_equ", false,-1);
    tracep->declBus(c+13,"i_a_2", false,-1, 3,0);
    tracep->declBus(c+14,"i_b_2", false,-1, 3,0);
    tracep->declBus(c+74,"sub_i_b", false,-1, 3,0);
    tracep->declBus(c+15,"sub_i_b_2", false,-1, 3,0);
    tracep->declBus(c+16,"led_0", false,-1, 3,0);
    tracep->declBus(c+17,"led_1", false,-1, 3,0);
    tracep->declBus(c+75,"led_2", false,-1, 3,0);
    tracep->declBus(c+18,"led_3", false,-1, 3,0);
    tracep->declBus(c+19,"led_4", false,-1, 3,0);
    tracep->declBus(c+20,"led_5", false,-1, 3,0);
    tracep->declBus(c+21,"led_6", false,-1, 3,0);
    tracep->declBus(c+64,"led_7", false,-1, 3,0);
    tracep->declBus(c+22,"o_led_0", false,-1, 3,0);
    tracep->declBit(c+23,"carry_0", false,-1);
    tracep->declBit(c+24,"carry_1", false,-1);
    tracep->declBit(c+25,"overflow_0", false,-1);
    tracep->declBit(c+26,"overflow_1", false,-1);
    tracep->declBit(c+27,"max_0", false,-1);
    tracep->declBit(c+76,"equ_0", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+79,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 3,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declQuad(c+77,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+79,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 3,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declBus(c+83,"default_out", false,-1, 3,0);
    tracep->declQuad(c+77,"lut", false,-1, 55,0);
    tracep->declBus(c+84,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+28+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+44,"lut_out", false,-1, 3,0);
    tracep->declBit(c+45,"hit", false,-1);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+86,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+87,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 0,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declBus(c+46,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+86,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+87,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 0,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declBus(c+88,"default_out", false,-1, 0,0);
    tracep->declBus(c+46,"lut", false,-1, 7,0);
    tracep->declBus(c+81,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+47+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+51,"lut_out", false,-1, 0,0);
    tracep->declBit(c+52,"hit", false,-1);
    tracep->declBus(c+89,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+86,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+87,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 0,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declBus(c+53,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+86,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+80,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+87,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 0,0);
    tracep->declBus(c+66,"key", false,-1, 2,0);
    tracep->declBus(c+88,"default_out", false,-1, 0,0);
    tracep->declBus(c+53,"lut", false,-1, 7,0);
    tracep->declBus(c+81,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+58,"lut_out", false,-1, 0,0);
    tracep->declBit(c+59,"hit", false,-1);
    tracep->declBus(c+89,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_adder ");
    tracep->declBus(c+13,"i_a", false,-1, 3,0);
    tracep->declBus(c+14,"i_b", false,-1, 3,0);
    tracep->declBus(c+16,"o_led", false,-1, 3,0);
    tracep->declBit(c+23,"o_carry", false,-1);
    tracep->declBit(c+25,"o_overflow", false,-1);
    tracep->declBus(c+60,"led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_and ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBus(c+18,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_equ ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBit(c+76,"o_equ", false,-1);
    tracep->declBus(c+64,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_max ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBit(c+27,"o_max", false,-1);
    tracep->declBus(c+21,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_nor ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+75,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_or ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBus(c+19,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_log_xor ");
    tracep->declBus(c+64,"i_a", false,-1, 3,0);
    tracep->declBus(c+65,"i_b", false,-1, 3,0);
    tracep->declBus(c+20,"o_led", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_seg ");
    tracep->declBit(c+61,"i_minus", false,-1);
    tracep->declBus(c+62,"i_seg", false,-1, 2,0);
    tracep->declBus(c+69,"o_seg", false,-1, 7,0);
    tracep->declBus(c+90,"num0", false,-1, 7,0);
    tracep->declBus(c+91,"num1", false,-1, 7,0);
    tracep->declBus(c+92,"num2", false,-1, 7,0);
    tracep->declBus(c+93,"num3", false,-1, 7,0);
    tracep->declBus(c+94,"num4", false,-1, 7,0);
    tracep->declBus(c+95,"num5", false,-1, 7,0);
    tracep->declBus(c+96,"num6", false,-1, 7,0);
    tracep->declBus(c+97,"num7", false,-1, 7,0);
    tracep->declBus(c+98,"num8", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_adder ");
    tracep->declBus(c+13,"i_a", false,-1, 3,0);
    tracep->declBus(c+15,"i_b", false,-1, 3,0);
    tracep->declBus(c+17,"o_led", false,-1, 3,0);
    tracep->declBit(c+24,"o_carry", false,-1);
    tracep->declBit(c+26,"o_overflow", false,-1);
    tracep->declBus(c+63,"led", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu_top___024root__trace_init_top(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_top\n"); );
    // Body
    Valu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_top___024root__trace_register(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+12,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+13,(vlSelf->alu_top__DOT__i_a_2),4);
    bufp->fullCData(oldp+14,(vlSelf->alu_top__DOT__i_b_2),4);
    bufp->fullCData(oldp+15,(vlSelf->alu_top__DOT__sub_i_b_2),4);
    bufp->fullCData(oldp+16,(vlSelf->alu_top__DOT__led_0),4);
    bufp->fullCData(oldp+17,(vlSelf->alu_top__DOT__led_1),4);
    bufp->fullCData(oldp+18,(vlSelf->alu_top__DOT__led_3),4);
    bufp->fullCData(oldp+19,(vlSelf->alu_top__DOT__led_4),4);
    bufp->fullCData(oldp+20,(vlSelf->alu_top__DOT__led_5),4);
    bufp->fullCData(oldp+21,(vlSelf->alu_top__DOT__led_6),4);
    bufp->fullCData(oldp+22,(vlSelf->alu_top__DOT__o_led_0),4);
    bufp->fullBit(oldp+23,(vlSelf->alu_top__DOT__carry_0));
    bufp->fullBit(oldp+24,(vlSelf->alu_top__DOT__carry_1));
    bufp->fullBit(oldp+25,(vlSelf->alu_top__DOT__overflow_0));
    bufp->fullBit(oldp+26,(vlSelf->alu_top__DOT__overflow_1));
    bufp->fullBit(oldp+27,(vlSelf->alu_top__DOT__max_0));
    bufp->fullCData(oldp+28,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+29,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+30,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+31,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+32,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+33,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+34,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+35,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+36,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+37,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+38,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+39,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+40,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+41,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+42,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+43,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+44,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+45,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+46,((2U | (((IData)(vlSelf->alu_top__DOT__carry_0) 
                                     << 4U) | (IData)(vlSelf->alu_top__DOT__carry_1)))),8);
    bufp->fullCData(oldp+47,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+48,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+49,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+50,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+51,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+52,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+53,((2U | (((IData)(vlSelf->alu_top__DOT__overflow_0) 
                                     << 4U) | (IData)(vlSelf->alu_top__DOT__overflow_1)))),8);
    bufp->fullCData(oldp+54,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+55,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+56,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+57,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+58,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+59,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+60,(vlSelf->alu_top__DOT__u0_adder__DOT__led),4);
    bufp->fullBit(oldp+61,(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus));
    bufp->fullCData(oldp+62,(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg),3);
    bufp->fullCData(oldp+63,(vlSelf->alu_top__DOT__u1_adder__DOT__led),4);
    bufp->fullCData(oldp+64,(vlSelf->i_a),4);
    bufp->fullCData(oldp+65,(vlSelf->i_b),4);
    bufp->fullCData(oldp+66,(vlSelf->i_op),3);
    bufp->fullCData(oldp+67,(vlSelf->o_led),4);
    bufp->fullBit(oldp+68,(vlSelf->o_carry));
    bufp->fullCData(oldp+69,(vlSelf->o_seg),8);
    bufp->fullCData(oldp+70,(vlSelf->o_minus),8);
    bufp->fullBit(oldp+71,(vlSelf->o_overflow));
    bufp->fullBit(oldp+72,(vlSelf->o_max));
    bufp->fullBit(oldp+73,(vlSelf->o_equ));
    bufp->fullCData(oldp+74,(((8U & ((~ ((IData)(vlSelf->i_b) 
                                         >> 3U)) << 3U)) 
                              | (7U & (IData)(vlSelf->i_b)))),4);
    bufp->fullCData(oldp+75,((0xfU & (~ (IData)(vlSelf->i_a)))),4);
    bufp->fullBit(oldp+76,(((IData)(vlSelf->i_a) == (IData)(vlSelf->i_b))));
    bufp->fullQData(oldp+77,((0x410300000000ULL | (
                                                   ((QData)((IData)(vlSelf->alu_top__DOT__led_0)) 
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
    bufp->fullIData(oldp+79,(8U),32);
    bufp->fullIData(oldp+80,(3U),32);
    bufp->fullIData(oldp+81,(4U),32);
    bufp->fullIData(oldp+82,(0U),32);
    bufp->fullCData(oldp+83,(0U),4);
    bufp->fullIData(oldp+84,(7U),32);
    bufp->fullIData(oldp+85,(8U),32);
    bufp->fullIData(oldp+86,(2U),32);
    bufp->fullIData(oldp+87,(1U),32);
    bufp->fullBit(oldp+88,(0U));
    bufp->fullIData(oldp+89,(2U),32);
    bufp->fullCData(oldp+90,(0xfdU),8);
    bufp->fullCData(oldp+91,(0x60U),8);
    bufp->fullCData(oldp+92,(0xdaU),8);
    bufp->fullCData(oldp+93,(0xf2U),8);
    bufp->fullCData(oldp+94,(0x66U),8);
    bufp->fullCData(oldp+95,(0xb6U),8);
    bufp->fullCData(oldp+96,(0xbeU),8);
    bufp->fullCData(oldp+97,(0xe0U),8);
    bufp->fullCData(oldp+98,(0xffU),8);
}
