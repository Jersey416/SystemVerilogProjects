// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Venum.h for the primary calling header

#ifndef VERILATED_VENUM___024ROOT_H_
#define VERILATED_VENUM___024ROOT_H_  // guard

#include "verilated.h"


class Venum__Syms;

class alignas(VL_CACHE_LINE_BYTES) Venum___024root final {
  public:

    // INTERNAL VARIABLES
    Venum__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Venum___024root(Venum__Syms* symsp, const char* namep);
    ~Venum___024root();
    VL_UNCOPYABLE(Venum___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
