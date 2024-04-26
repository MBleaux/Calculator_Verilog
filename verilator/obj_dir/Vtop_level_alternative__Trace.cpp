// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_level_alternative__Syms.h"


void Vtop_level_alternative::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop_level_alternative::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->top_level_alternative__DOT__a_we_s));
            tracep->chgBit(oldp+1,(vlTOPp->top_level_alternative__DOT__a_rst_s));
            tracep->chgBit(oldp+2,(vlTOPp->top_level_alternative__DOT__b_we_s));
            tracep->chgBit(oldp+3,(vlTOPp->top_level_alternative__DOT__b_rst_s));
            tracep->chgBit(oldp+4,(vlTOPp->top_level_alternative__DOT__fct_we_s));
            tracep->chgBit(oldp+5,(vlTOPp->top_level_alternative__DOT__fct_rst_s));
            tracep->chgBit(oldp+6,(vlTOPp->top_level_alternative__DOT__s_we_s));
            tracep->chgBit(oldp+7,(vlTOPp->top_level_alternative__DOT__s_rst_s));
            tracep->chgBit(oldp+8,(vlTOPp->top_level_alternative__DOT__signal_we_s));
            tracep->chgBit(oldp+9,(vlTOPp->top_level_alternative__DOT__signal_rst_s));
            tracep->chgIData(oldp+10,(vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state),32);
        }
        tracep->chgBit(oldp+11,(vlTOPp->clock_i));
        tracep->chgBit(oldp+12,(vlTOPp->reset_i));
        tracep->chgBit(oldp+13,(vlTOPp->start_i));
        tracep->chgCData(oldp+14,(vlTOPp->a_i),8);
        tracep->chgCData(oldp+15,(vlTOPp->b_i),8);
        tracep->chgCData(oldp+16,(vlTOPp->fct_i),2);
        tracep->chgSData(oldp+17,(vlTOPp->s_o),16);
        tracep->chgBit(oldp+18,(vlTOPp->signal_o));
        tracep->chgCData(oldp+19,(vlTOPp->top_level_alternative__DOT__a_i_s),8);
        tracep->chgCData(oldp+20,(vlTOPp->top_level_alternative__DOT__b_i_s),8);
        tracep->chgSData(oldp+21,(vlTOPp->top_level_alternative__DOT__s_s),16);
        tracep->chgCData(oldp+22,(vlTOPp->top_level_alternative__DOT__fct_i_s),2);
        tracep->chgBit(oldp+23,(vlTOPp->top_level_alternative__DOT__signal_o_s));
        tracep->chgIData(oldp+24,(vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__next_state),32);
    }
}

void Vtop_level_alternative::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = static_cast<Vtop_level_alternative__Syms*>(userp);
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
