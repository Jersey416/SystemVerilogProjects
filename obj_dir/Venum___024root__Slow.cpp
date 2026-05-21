// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Venum.h for the primary calling header

#include "Venum__pch.h"


Venum___024root::Venum___024root(Venum__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
}

void Venum___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Venum___024root::~Venum___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
