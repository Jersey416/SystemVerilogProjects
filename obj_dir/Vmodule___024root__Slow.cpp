// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmodule.h for the primary calling header

#include "Vmodule__pch.h"


Vmodule___024root::Vmodule___024root(Vmodule__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
}

void Vmodule___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmodule___024root::~Vmodule___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
