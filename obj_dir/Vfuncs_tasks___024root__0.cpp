// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfuncs_tasks.h for the primary calling header

#include "Vfuncs_tasks__pch.h"

VlCoroutine Vfuncs_tasks___024root___eval_initial__TOP__Vtiming__0(Vfuncs_tasks___024root* vlSelf);

void Vfuncs_tasks___024root___eval_initial(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_initial\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfuncs_tasks___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vfuncs_tasks___024root___eval_initial__TOP__Vtiming__0(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Hello\n",0);
    vlSelfRef.funcs_and_tasks__DOT__t_display__Vstatic__txt = "world"s;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "basics/syntax/funcs_tasks.sv", 
                                         8);
    VL_WRITEF_NX("%s\n",1, 'S',&(vlSelfRef.funcs_and_tasks__DOT__t_display__Vstatic__txt));
    co_return;
}

void Vfuncs_tasks___024root___eval_triggers_vec__act(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_triggers_vec__act\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vfuncs_tasks___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfuncs_tasks___024root___timing_resume(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___timing_resume\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfuncs_tasks___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfuncs_tasks___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfuncs_tasks___024root___eval_phase__act(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_phase__act\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfuncs_tasks___024root___eval_triggers_vec__act(vlSelf);
    Vfuncs_tasks___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfuncs_tasks___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfuncs_tasks___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfuncs_tasks___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vfuncs_tasks___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vfuncs_tasks___024root___eval_phase__inact(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_phase__inact\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("basics/syntax/funcs_tasks.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vfuncs_tasks___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfuncs_tasks___024root___eval_phase__nba(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_phase__nba\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfuncs_tasks___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfuncs_tasks___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfuncs_tasks___024root___eval(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfuncs_tasks___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("basics/syntax/funcs_tasks.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("basics/syntax/funcs_tasks.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfuncs_tasks___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("basics/syntax/funcs_tasks.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vfuncs_tasks___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vfuncs_tasks___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfuncs_tasks___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vfuncs_tasks___024root___eval_debug_assertions(Vfuncs_tasks___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfuncs_tasks___024root___eval_debug_assertions\n"); );
    Vfuncs_tasks__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
