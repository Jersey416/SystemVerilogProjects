// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstructs.h for the primary calling header

#include "Vstructs__pch.h"

VL_ATTR_COLD void Vstructs___024root___eval_static(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_static\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0 __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0;
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    // Body
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    __Vinline__eval_static__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn 
        = Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0{
        .__PVT__cow = (IData)(7U), .__PVT__pig = (IData)(7U), 
        .__PVT__sheep = (IData)(7U), .__PVT__horse = (IData)(7U)};
}

VL_ATTR_COLD void Vstructs___024root___eval_static__TOP(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_static__TOP\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0 StructTest__DOT__unnamedblk1__DOT__store0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    // Body
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn 
        = Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0{
        .__PVT__cow = (IData)(7U), .__PVT__pig = (IData)(7U), 
        .__PVT__sheep = (IData)(7U), .__PVT__horse = (IData)(7U)};
}

VL_ATTR_COLD void Vstructs___024root___eval_initial(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_initial\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0 __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0;
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    // Body
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0 
        = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x00000019U), .__PVT__gpus = (IData)(0x0000000dU), 
        .__PVT__money = 5.32197999999999956e+03};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0 
        = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x0000000eU), .__PVT__gpus = (IData)(4U), 
        .__PVT__money = 1.23200000000000003e+01};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0 
        = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(1U), .__PVT__gpus = (IData)(1U), 
        .__PVT__money = 1.0};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    __Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0 
        = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x0000000aU), .__PVT__gpus = (IData)(0x0000000aU), 
        .__PVT__money = 5.43210000000000036e+02};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\ncows:%d  pigs:%d  sheep:%d  horses:%d\n",7
                 , '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',__Vinline__eval_initial__TOP_StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__cow, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__pig, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__sheep, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__horse);
}

VL_ATTR_COLD void Vstructs___024root___eval_initial__TOP(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_initial__TOP\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0 StructTest__DOT__unnamedblk1__DOT__store0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__cpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__gpus = 0;
    StructTest__DOT__unnamedblk1__DOT__store0.__PVT__money = 0;
    // Body
    StructTest__DOT__unnamedblk1__DOT__store0 = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x00000019U), .__PVT__gpus = (IData)(0x0000000dU), 
        .__PVT__money = 5.32197999999999956e+03};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    StructTest__DOT__unnamedblk1__DOT__store0 = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x0000000eU), .__PVT__gpus = (IData)(4U), 
        .__PVT__money = 1.23200000000000003e+01};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    StructTest__DOT__unnamedblk1__DOT__store0 = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(1U), .__PVT__gpus = (IData)(1U), 
        .__PVT__money = 1.0};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\n",3
                 , '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money);
    StructTest__DOT__unnamedblk1__DOT__store0 = Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0{
        .__PVT__cpus = (IData)(0x0000000aU), .__PVT__gpus = (IData)(0x0000000aU), 
        .__PVT__money = 5.43210000000000036e+02};
    VL_WRITEF_NX("cpus:%d  gpus:%d  money:%.2f\ncows:%d  pigs:%d  sheep:%d  horses:%d\n",7
                 , '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__cpus, '~',32,StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__gpus, 'D',StructTest__DOT__unnamedblk1__DOT__store0
                 .__PVT__money, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__cow, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__pig, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__sheep, '~',32,vlSelfRef.StructTest__DOT__unnamedblk2__DOT__barn
                 .__PVT__horse);
}

VL_ATTR_COLD void Vstructs___024root___eval_final(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_final\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vstructs___024root___eval_settle(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_settle\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
