// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfuncs_tasks.h for the primary calling header

#include "Vfuncs_tasks__pch.h"

void Vfuncs_tasks___024root___ctor_var_reset(Vfuncs_tasks___024root* vlSelf);

Vfuncs_tasks___024root::Vfuncs_tasks___024root(Vfuncs_tasks__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfuncs_tasks___024root___ctor_var_reset(this);
}

void Vfuncs_tasks___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfuncs_tasks___024root::~Vfuncs_tasks___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
