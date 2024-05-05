// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_level__Syms.h"


void Vtop_level___024root__trace_chg_0_sub_0(Vtop_level___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_level___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root__trace_chg_0\n"); );
    // Init
    Vtop_level___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_level___024root*>(voidSelf);
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_level___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_level___024root__trace_chg_0_sub_0(Vtop_level___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top_level__DOT__done_o_s));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+1,(vlSelf->top_level__DOT__a_we_s));
        bufp->chgBit(oldp+2,(vlSelf->top_level__DOT__a_rst_s));
        bufp->chgBit(oldp+3,(vlSelf->top_level__DOT__b_we_s));
        bufp->chgBit(oldp+4,(vlSelf->top_level__DOT__b_rst_s));
        bufp->chgBit(oldp+5,(vlSelf->top_level__DOT__fct_we_s));
        bufp->chgBit(oldp+6,(vlSelf->top_level__DOT__fct_rst_s));
        bufp->chgBit(oldp+7,(vlSelf->top_level__DOT__res_we_s));
        bufp->chgBit(oldp+8,(vlSelf->top_level__DOT__res_rst_s));
        bufp->chgBit(oldp+9,(vlSelf->top_level__DOT__rem_we_s));
        bufp->chgBit(oldp+10,(vlSelf->top_level__DOT__rem_rst_s));
        bufp->chgBit(oldp+11,(vlSelf->top_level__DOT__done_we_s));
        bufp->chgBit(oldp+12,(vlSelf->top_level__DOT__done_rst_s));
        bufp->chgIData(oldp+13,(vlSelf->top_level__DOT__fsm_unit__DOT__current_state),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+14,(vlSelf->top_level__DOT__res_s),16);
        bufp->chgSData(oldp+15,(vlSelf->top_level__DOT__rem_s),16);
        bufp->chgSData(oldp+16,(vlSelf->top_level__DOT__alu_unit__DOT__a_extended),16);
        bufp->chgSData(oldp+17,(vlSelf->top_level__DOT__alu_unit__DOT__b_extended),16);
    }
    bufp->chgBit(oldp+18,(vlSelf->clock_i));
    bufp->chgBit(oldp+19,(vlSelf->reset_i));
    bufp->chgBit(oldp+20,(vlSelf->start_i));
    bufp->chgCData(oldp+21,(vlSelf->a_i),8);
    bufp->chgCData(oldp+22,(vlSelf->b_i),8);
    bufp->chgCData(oldp+23,(vlSelf->fct_i),2);
    bufp->chgSData(oldp+24,(vlSelf->res_o),16);
    bufp->chgSData(oldp+25,(vlSelf->rem_o),16);
    bufp->chgBit(oldp+26,(vlSelf->done_o));
    bufp->chgCData(oldp+27,(vlSelf->top_level__DOT__a_i_s),8);
    bufp->chgCData(oldp+28,(vlSelf->top_level__DOT__b_i_s),8);
    bufp->chgCData(oldp+29,(vlSelf->top_level__DOT__fct_i_s),2);
    bufp->chgIData(oldp+30,(vlSelf->top_level__DOT__fsm_unit__DOT__next_state),32);
}

void Vtop_level___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root__trace_cleanup\n"); );
    // Init
    Vtop_level___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_level___024root*>(voidSelf);
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
