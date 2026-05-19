// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfuncs_tasks.h for the primary calling header

#ifndef VERILATED_VFUNCS_TASKS___024ROOT_H_
#define VERILATED_VFUNCS_TASKS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfuncs_tasks__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfuncs_tasks___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string funcs_and_tasks__DOT__t_display__Vstatic__txt;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vfuncs_tasks__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfuncs_tasks___024root(Vfuncs_tasks__Syms* symsp, const char* namep);
    ~Vfuncs_tasks___024root();
    VL_UNCOPYABLE(Vfuncs_tasks___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
