// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varrays.h for the primary calling header

#include "Varrays__pch.h"

void Varrays___024root___ctor_var_reset(Varrays___024root* vlSelf);

Varrays___024root::Varrays___024root(Varrays__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Varrays___024root___ctor_var_reset(this);
}

void Varrays___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varrays___024root::~Varrays___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
