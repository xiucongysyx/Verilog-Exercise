// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_top.h"
#include "Valu_top__Syms.h"

//============================================================
// Constructors

Valu_top::Valu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_top__Syms(contextp(), _vcname__, this)}
    , i_a{vlSymsp->TOP.i_a}
    , i_b{vlSymsp->TOP.i_b}
    , i_op{vlSymsp->TOP.i_op}
    , o_led{vlSymsp->TOP.o_led}
    , o_carry{vlSymsp->TOP.o_carry}
    , o_seg{vlSymsp->TOP.o_seg}
    , o_minus{vlSymsp->TOP.o_minus}
    , o_overflow{vlSymsp->TOP.o_overflow}
    , o_max{vlSymsp->TOP.o_max}
    , o_equ{vlSymsp->TOP.o_equ}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_top::Valu_top(const char* _vcname__)
    : Valu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_top::~Valu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_top___024root___eval_debug_assertions(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_top___024root___eval_static(Valu_top___024root* vlSelf);
void Valu_top___024root___eval_initial(Valu_top___024root* vlSelf);
void Valu_top___024root___eval_settle(Valu_top___024root* vlSelf);
void Valu_top___024root___eval(Valu_top___024root* vlSelf);

void Valu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_top___024root___eval_static(&(vlSymsp->TOP));
        Valu_top___024root___eval_initial(&(vlSymsp->TOP));
        Valu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_top::eventsPending() { return false; }

uint64_t Valu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_top___024root___eval_final(Valu_top___024root* vlSelf);

VL_ATTR_COLD void Valu_top::final() {
    Valu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_top::hierName() const { return vlSymsp->name(); }
const char* Valu_top::modelName() const { return "Valu_top"; }
unsigned Valu_top::threads() const { return 1; }
