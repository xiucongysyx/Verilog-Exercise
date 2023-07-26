// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux241.h"
#include "Vmux241__Syms.h"

//============================================================
// Constructors

Vmux241::Vmux241(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux241__Syms(contextp(), _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux241::Vmux241(const char* _vcname__)
    : Vmux241(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux241::~Vmux241() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux241___024root___eval_debug_assertions(Vmux241___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux241___024root___eval_static(Vmux241___024root* vlSelf);
void Vmux241___024root___eval_initial(Vmux241___024root* vlSelf);
void Vmux241___024root___eval_settle(Vmux241___024root* vlSelf);
void Vmux241___024root___eval(Vmux241___024root* vlSelf);

void Vmux241::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux241::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux241___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux241___024root___eval_static(&(vlSymsp->TOP));
        Vmux241___024root___eval_initial(&(vlSymsp->TOP));
        Vmux241___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux241___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux241::eventsPending() { return false; }

uint64_t Vmux241::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux241::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux241___024root___eval_final(Vmux241___024root* vlSelf);

VL_ATTR_COLD void Vmux241::final() {
    Vmux241___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux241::hierName() const { return vlSymsp->name(); }
const char* Vmux241::modelName() const { return "Vmux241"; }
unsigned Vmux241::threads() const { return 1; }
