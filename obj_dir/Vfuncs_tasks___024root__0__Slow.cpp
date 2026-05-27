// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfuncs_tasks.h for the primary calling header

#include "Vfuncs_tasks__pch.h"

VL_ATTR_COLD void Vfuncs_tasks___024root___eval_static(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_static\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vfuncs_tasks___024root___eval_final(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_final\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfuncs_tasks___024root___eval_settle(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_settle\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vfuncs_tasks___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfuncs_tasks___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfuncs_tasks___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfuncs_tasks___024root___ctor_var_reset(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___ctor_var_reset\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
