// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_level.h for the primary calling header

#ifndef VERILATED_VTOP_LEVEL___024ROOT_H_
#define VERILATED_VTOP_LEVEL___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_level__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_level___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock_i,0,0);
    VL_IN8(reset_i,0,0);
    CData/*0:0*/ top_level__DOT__a_rst_s;
    CData/*0:0*/ top_level__DOT__b_rst_s;
    CData/*0:0*/ top_level__DOT__fct_rst_s;
    CData/*0:0*/ top_level__DOT__res_rst_s;
    CData/*0:0*/ top_level__DOT__rem_rst_s;
    CData/*0:0*/ top_level__DOT__done_rst_s;
    VL_IN8(start_i,0,0);
    VL_IN8(a_i,7,0);
    VL_IN8(b_i,7,0);
    VL_IN8(fct_i,1,0);
    VL_OUT8(done_o,0,0);
    CData/*0:0*/ top_level__DOT__a_we_s;
    CData/*0:0*/ top_level__DOT__b_we_s;
    CData/*0:0*/ top_level__DOT__fct_we_s;
    CData/*0:0*/ top_level__DOT__res_we_s;
    CData/*0:0*/ top_level__DOT__rem_we_s;
    CData/*0:0*/ top_level__DOT__done_we_s;
    CData/*7:0*/ top_level__DOT__a_i_s;
    CData/*7:0*/ top_level__DOT__b_i_s;
    CData/*1:0*/ top_level__DOT__fct_i_s;
    CData/*0:0*/ top_level__DOT__done_o_s;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__a_rst_s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__b_rst_s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__fct_rst_s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__res_rst_s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__rem_rst_s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_level__DOT__done_rst_s__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(res_o,15,0);
    VL_OUT16(rem_o,15,0);
    SData/*15:0*/ top_level__DOT__res_s;
    SData/*15:0*/ top_level__DOT__rem_s;
    SData/*15:0*/ top_level__DOT__alu_unit__DOT__a_extended;
    SData/*15:0*/ top_level__DOT__alu_unit__DOT__b_extended;
    IData/*31:0*/ top_level__DOT__fsm_unit__DOT__current_state;
    IData/*31:0*/ top_level__DOT__fsm_unit__DOT__next_state;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_level__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_level___024root(Vtop_level__Syms* symsp, const char* v__name);
    ~Vtop_level___024root();
    VL_UNCOPYABLE(Vtop_level___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
