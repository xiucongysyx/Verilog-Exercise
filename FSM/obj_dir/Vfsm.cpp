// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsm.h"
#include "Vfsm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfsm::Vfsm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfsm__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfsm::Vfsm(const char* _vcname__)
    : Vfsm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfsm::~Vfsm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfsm___024root___eval_debug_assertions(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsm___024root___eval_static(Vfsm___024root* vlSelf);
void Vfsm___024root___eval_initial(Vfsm___024root* vlSelf);
void Vfsm___024root___eval_settle(Vfsm___024root* vlSelf);
void Vfsm___024root___eval(Vfsm___024root* vlSelf);

void Vfsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfsm___024root___eval_static(&(vlSymsp->TOP));
        Vfsm___024root___eval_initial(&(vlSymsp->TOP));
        Vfsm___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfsm___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfsm::eventsPending() { return false; }

uint64_t Vfsm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfsm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfsm___024root___eval_final(Vfsm___024root* vlSelf);

VL_ATTR_COLD void Vfsm::final() {
    Vfsm___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfsm::hierName() const { return vlSymsp->name(); }
const char* Vfsm::modelName() const { return "Vfsm"; }
unsigned Vfsm::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfsm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfsm___024root__trace_init_top(Vfsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfsm___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfsm___024root__trace_register(Vfsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfsm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfsm::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfsm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
