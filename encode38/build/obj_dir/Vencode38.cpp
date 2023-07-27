// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencode38.h"
#include "Vencode38__Syms.h"

//============================================================
// Constructors

Vencode38::Vencode38(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencode38__Syms(contextp(), _vcname__, this)}
    , i_en{vlSymsp->TOP.i_en}
    , i_code{vlSymsp->TOP.i_code}
    , o_code{vlSymsp->TOP.o_code}
    , o_seg{vlSymsp->TOP.o_seg}
    , o_en_flag{vlSymsp->TOP.o_en_flag}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencode38::Vencode38(const char* _vcname__)
    : Vencode38(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencode38::~Vencode38() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencode38___024root___eval_debug_assertions(Vencode38___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode38___024root___eval_static(Vencode38___024root* vlSelf);
void Vencode38___024root___eval_initial(Vencode38___024root* vlSelf);
void Vencode38___024root___eval_settle(Vencode38___024root* vlSelf);
void Vencode38___024root___eval(Vencode38___024root* vlSelf);

void Vencode38::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencode38::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencode38___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencode38___024root___eval_static(&(vlSymsp->TOP));
        Vencode38___024root___eval_initial(&(vlSymsp->TOP));
        Vencode38___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencode38___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencode38::eventsPending() { return false; }

uint64_t Vencode38::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencode38::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencode38___024root___eval_final(Vencode38___024root* vlSelf);

VL_ATTR_COLD void Vencode38::final() {
    Vencode38___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencode38::hierName() const { return vlSymsp->name(); }
const char* Vencode38::modelName() const { return "Vencode38"; }
unsigned Vencode38::threads() const { return 1; }
