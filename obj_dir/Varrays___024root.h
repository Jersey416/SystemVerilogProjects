// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varrays.h for the primary calling header

#ifndef VERILATED_VARRAYS___024ROOT_H_
#define VERILATED_VARRAYS___024ROOT_H_  // guard

#include "verilated.h"


class Varrays__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varrays___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VlUnpacked<IData/*31:0*/, 4> arrs__DOT__iarr0;
    VlUnpacked<IData/*31:0*/, 6> arrs__DOT__iarr1;
    VlUnpacked<IData/*31:0*/, 7> arrs__DOT__iarr2;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> arrs__DOT__imtx;

    // INTERNAL VARIABLES
    Varrays__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varrays___024root(Varrays__Syms* symsp, const char* namep);
    ~Varrays___024root();
    VL_UNCOPYABLE(Varrays___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
