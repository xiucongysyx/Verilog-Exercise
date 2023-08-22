// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfsm__Syms.h"
#include "Vfsm.h"
#include "Vfsm___024root.h"

// FUNCTIONS
Vfsm__Syms::~Vfsm__Syms()
{
}

Vfsm__Syms::Vfsm__Syms(VerilatedContext* contextp, const char* namep, Vfsm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
