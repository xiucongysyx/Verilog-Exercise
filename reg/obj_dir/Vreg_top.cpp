// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg_top.h"
#include "Vreg_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreg_top::Vreg_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreg_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , i_sed{vlSymsp->TOP.i_sed}
    , i_rand_flag{vlSymsp->TOP.i_rand_flag}
    , o_seg_1{vlSymsp->TOP.o_seg_1}
    , o_seg_0{vlSymsp->TOP.o_seg_0}
    , o_led{vlSymsp->TOP.o_led}
    , o_rand_flag{vlSymsp->TOP.o_rand_flag}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreg_top::Vreg_top(const char* _vcname__)
    : Vreg_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreg_top::~Vreg_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreg_top___024root___eval_debug_assertions(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg_top___024root___eval_static(Vreg_top___024root* vlSelf);
void Vreg_top___024root___eval_initial(Vreg_top___024root* vlSelf);
void Vreg_top___024root___eval_settle(Vreg_top___024root* vlSelf);
void Vreg_top___024root___eval(Vreg_top___024root* vlSelf);

void Vreg_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreg_top___024root___eval_static(&(vlSymsp->TOP));
        Vreg_top___024root___eval_initial(&(vlSymsp->TOP));
        Vreg_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreg_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreg_top::eventsPending() { return false; }

uint64_t Vreg_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vreg_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreg_top___024root___eval_final(Vreg_top___024root* vlSelf);

VL_ATTR_COLD void Vreg_top::final() {
    Vreg_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreg_top::hierName() const { return vlSymsp->name(); }
const char* Vreg_top::modelName() const { return "Vreg_top"; }
unsigned Vreg_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vreg_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreg_top___024root__trace_init_top(Vreg_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreg_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_top___024root*>(voidSelf);
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vreg_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vreg_top___024root__trace_register(Vreg_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreg_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreg_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreg_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
