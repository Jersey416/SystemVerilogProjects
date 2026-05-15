// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmodule.h for the primary calling header

#ifndef VERILATED_VMODULE___024ROOT_H_
#define VERILATED_VMODULE___024ROOT_H_  // guard

#include "verilated.h"


class Vmodule__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmodule___024root final {
  public:

    // INTERNAL VARIABLES
    Vmodule__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmodule___024root(Vmodule__Syms* symsp, const char* namep);
    ~Vmodule___024root();
    VL_UNCOPYABLE(Vmodule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
