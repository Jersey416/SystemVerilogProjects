// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstructs.h for the primary calling header

#include "Vstructs__pch.h"


Vstructs___024root::Vstructs___024root(Vstructs__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
}

void Vstructs___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstructs___024root::~Vstructs___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
