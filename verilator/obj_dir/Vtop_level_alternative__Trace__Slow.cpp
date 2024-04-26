// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_level_alternative__Syms.h"


//======================

void Vtop_level_alternative::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop_level_alternative::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_level_alternative::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop_level_alternative::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop_level_alternative::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+12,"clock_i", false,-1);
        tracep->declBit(c+13,"reset_i", false,-1);
        tracep->declBit(c+14,"start_i", false,-1);
        tracep->declBus(c+15,"a_i", false,-1, 7,0);
        tracep->declBus(c+16,"b_i", false,-1, 7,0);
        tracep->declBus(c+17,"fct_i", false,-1, 1,0);
        tracep->declBus(c+18,"s_o", false,-1, 15,0);
        tracep->declBit(c+19,"signal_o", false,-1);
        tracep->declBus(c+26,"top_level_alternative width", false,-1, 31,0);
        tracep->declBit(c+12,"top_level_alternative clock_i", false,-1);
        tracep->declBit(c+13,"top_level_alternative reset_i", false,-1);
        tracep->declBit(c+14,"top_level_alternative start_i", false,-1);
        tracep->declBus(c+15,"top_level_alternative a_i", false,-1, 7,0);
        tracep->declBus(c+16,"top_level_alternative b_i", false,-1, 7,0);
        tracep->declBus(c+17,"top_level_alternative fct_i", false,-1, 1,0);
        tracep->declBus(c+18,"top_level_alternative s_o", false,-1, 15,0);
        tracep->declBit(c+19,"top_level_alternative signal_o", false,-1);
        tracep->declBit(c+1,"top_level_alternative a_we_s", false,-1);
        tracep->declBit(c+2,"top_level_alternative a_rst_s", false,-1);
        tracep->declBit(c+3,"top_level_alternative b_we_s", false,-1);
        tracep->declBit(c+4,"top_level_alternative b_rst_s", false,-1);
        tracep->declBit(c+5,"top_level_alternative fct_we_s", false,-1);
        tracep->declBit(c+6,"top_level_alternative fct_rst_s", false,-1);
        tracep->declBit(c+7,"top_level_alternative s_we_s", false,-1);
        tracep->declBit(c+8,"top_level_alternative s_rst_s", false,-1);
        tracep->declBit(c+9,"top_level_alternative signal_we_s", false,-1);
        tracep->declBit(c+10,"top_level_alternative signal_rst_s", false,-1);
        tracep->declBus(c+20,"top_level_alternative a_i_s", false,-1, 7,0);
        tracep->declBus(c+21,"top_level_alternative b_i_s", false,-1, 7,0);
        tracep->declBus(c+22,"top_level_alternative s_s", false,-1, 15,0);
        tracep->declBus(c+23,"top_level_alternative fct_i_s", false,-1, 1,0);
        tracep->declBit(c+24,"top_level_alternative signal_o_s", false,-1);
        tracep->declBus(c+26,"top_level_alternative reg_a width", false,-1, 31,0);
        tracep->declBus(c+15,"top_level_alternative reg_a d_i", false,-1, 7,0);
        tracep->declBit(c+12,"top_level_alternative reg_a clock_i", false,-1);
        tracep->declBit(c+2,"top_level_alternative reg_a reset_i", false,-1);
        tracep->declBit(c+1,"top_level_alternative reg_a we_i", false,-1);
        tracep->declBus(c+20,"top_level_alternative reg_a q_o", false,-1, 7,0);
        tracep->declBus(c+26,"top_level_alternative reg_b width", false,-1, 31,0);
        tracep->declBus(c+16,"top_level_alternative reg_b d_i", false,-1, 7,0);
        tracep->declBit(c+12,"top_level_alternative reg_b clock_i", false,-1);
        tracep->declBit(c+4,"top_level_alternative reg_b reset_i", false,-1);
        tracep->declBit(c+3,"top_level_alternative reg_b we_i", false,-1);
        tracep->declBus(c+21,"top_level_alternative reg_b q_o", false,-1, 7,0);
        tracep->declBus(c+27,"top_level_alternative reg_fct width", false,-1, 31,0);
        tracep->declBus(c+17,"top_level_alternative reg_fct d_i", false,-1, 1,0);
        tracep->declBit(c+12,"top_level_alternative reg_fct clock_i", false,-1);
        tracep->declBit(c+6,"top_level_alternative reg_fct reset_i", false,-1);
        tracep->declBit(c+5,"top_level_alternative reg_fct we_i", false,-1);
        tracep->declBus(c+23,"top_level_alternative reg_fct q_o", false,-1, 1,0);
        tracep->declBit(c+12,"top_level_alternative fsm_unit clock_i", false,-1);
        tracep->declBit(c+13,"top_level_alternative fsm_unit reset_i", false,-1);
        tracep->declBit(c+14,"top_level_alternative fsm_unit start_i", false,-1);
        tracep->declBit(c+1,"top_level_alternative fsm_unit a_we_o", false,-1);
        tracep->declBit(c+2,"top_level_alternative fsm_unit a_rst_o", false,-1);
        tracep->declBit(c+3,"top_level_alternative fsm_unit b_we_o", false,-1);
        tracep->declBit(c+4,"top_level_alternative fsm_unit b_rst_o", false,-1);
        tracep->declBit(c+5,"top_level_alternative fsm_unit fct_we_o", false,-1);
        tracep->declBit(c+6,"top_level_alternative fsm_unit fct_rst_o", false,-1);
        tracep->declBit(c+7,"top_level_alternative fsm_unit s_we_o", false,-1);
        tracep->declBit(c+8,"top_level_alternative fsm_unit s_rst_o", false,-1);
        tracep->declBit(c+9,"top_level_alternative fsm_unit signal_we_o", false,-1);
        tracep->declBit(c+10,"top_level_alternative fsm_unit signal_rst_o", false,-1);
        tracep->declBus(c+11,"top_level_alternative fsm_unit current_state", false,-1, 31,0);
        tracep->declBus(c+25,"top_level_alternative fsm_unit next_state", false,-1, 31,0);
        tracep->declBus(c+26,"top_level_alternative dut width", false,-1, 31,0);
        tracep->declBus(c+20,"top_level_alternative dut a_i", false,-1, 7,0);
        tracep->declBus(c+21,"top_level_alternative dut b_i", false,-1, 7,0);
        tracep->declBus(c+23,"top_level_alternative dut fct_i", false,-1, 1,0);
        tracep->declBus(c+22,"top_level_alternative dut s_o", false,-1, 15,0);
        tracep->declBit(c+24,"top_level_alternative dut signal_o", false,-1);
        tracep->declBus(c+28,"top_level_alternative reg_s width", false,-1, 31,0);
        tracep->declBus(c+22,"top_level_alternative reg_s d_i", false,-1, 15,0);
        tracep->declBit(c+12,"top_level_alternative reg_s clock_i", false,-1);
        tracep->declBit(c+8,"top_level_alternative reg_s reset_i", false,-1);
        tracep->declBit(c+7,"top_level_alternative reg_s we_i", false,-1);
        tracep->declBus(c+18,"top_level_alternative reg_s q_o", false,-1, 15,0);
        tracep->declBus(c+29,"top_level_alternative reg_signal width", false,-1, 31,0);
        tracep->declBus(c+24,"top_level_alternative reg_signal d_i", false,-1, 0,0);
        tracep->declBit(c+12,"top_level_alternative reg_signal clock_i", false,-1);
        tracep->declBit(c+10,"top_level_alternative reg_signal reset_i", false,-1);
        tracep->declBit(c+9,"top_level_alternative reg_signal we_i", false,-1);
        tracep->declBus(c+19,"top_level_alternative reg_signal q_o", false,-1, 0,0);
    }
}

void Vtop_level_alternative::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop_level_alternative::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop_level_alternative::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->top_level_alternative__DOT__a_we_s));
        tracep->fullBit(oldp+2,(vlTOPp->top_level_alternative__DOT__a_rst_s));
        tracep->fullBit(oldp+3,(vlTOPp->top_level_alternative__DOT__b_we_s));
        tracep->fullBit(oldp+4,(vlTOPp->top_level_alternative__DOT__b_rst_s));
        tracep->fullBit(oldp+5,(vlTOPp->top_level_alternative__DOT__fct_we_s));
        tracep->fullBit(oldp+6,(vlTOPp->top_level_alternative__DOT__fct_rst_s));
        tracep->fullBit(oldp+7,(vlTOPp->top_level_alternative__DOT__s_we_s));
        tracep->fullBit(oldp+8,(vlTOPp->top_level_alternative__DOT__s_rst_s));
        tracep->fullBit(oldp+9,(vlTOPp->top_level_alternative__DOT__signal_we_s));
        tracep->fullBit(oldp+10,(vlTOPp->top_level_alternative__DOT__signal_rst_s));
        tracep->fullIData(oldp+11,(vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state),32);
        tracep->fullBit(oldp+12,(vlTOPp->clock_i));
        tracep->fullBit(oldp+13,(vlTOPp->reset_i));
        tracep->fullBit(oldp+14,(vlTOPp->start_i));
        tracep->fullCData(oldp+15,(vlTOPp->a_i),8);
        tracep->fullCData(oldp+16,(vlTOPp->b_i),8);
        tracep->fullCData(oldp+17,(vlTOPp->fct_i),2);
        tracep->fullSData(oldp+18,(vlTOPp->s_o),16);
        tracep->fullBit(oldp+19,(vlTOPp->signal_o));
        tracep->fullCData(oldp+20,(vlTOPp->top_level_alternative__DOT__a_i_s),8);
        tracep->fullCData(oldp+21,(vlTOPp->top_level_alternative__DOT__b_i_s),8);
        tracep->fullSData(oldp+22,(vlTOPp->top_level_alternative__DOT__s_s),16);
        tracep->fullCData(oldp+23,(vlTOPp->top_level_alternative__DOT__fct_i_s),2);
        tracep->fullBit(oldp+24,(vlTOPp->top_level_alternative__DOT__signal_o_s));
        tracep->fullIData(oldp+25,(vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__next_state),32);
        tracep->fullIData(oldp+26,(8U),32);
        tracep->fullIData(oldp+27,(2U),32);
        tracep->fullIData(oldp+28,(0x10U),32);
        tracep->fullIData(oldp+29,(1U),32);
    }
}
