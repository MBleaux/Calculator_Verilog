// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_LEVEL_ALTERNATIVE_H_
#define _VTOP_LEVEL_ALTERNATIVE_H_  // guard

#include "verilated.h"

//==========

class Vtop_level_alternative__Syms;
class Vtop_level_alternative_VerilatedVcd;


//----------

VL_MODULE(Vtop_level_alternative) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(start_i,0,0);
    VL_IN8(a_i,7,0);
    VL_IN8(b_i,7,0);
    VL_IN8(fct_i,1,0);
    VL_OUT8(signal_o,0,0);
    VL_OUT16(s_o,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ top_level_alternative__DOT__a_rst_s;
    CData/*0:0*/ top_level_alternative__DOT__b_rst_s;
    CData/*0:0*/ top_level_alternative__DOT__fct_rst_s;
    CData/*0:0*/ top_level_alternative__DOT__s_rst_s;
    CData/*0:0*/ top_level_alternative__DOT__signal_rst_s;
    CData/*0:0*/ top_level_alternative__DOT__a_we_s;
    CData/*0:0*/ top_level_alternative__DOT__b_we_s;
    CData/*0:0*/ top_level_alternative__DOT__fct_we_s;
    CData/*0:0*/ top_level_alternative__DOT__s_we_s;
    CData/*0:0*/ top_level_alternative__DOT__signal_we_s;
    CData/*7:0*/ top_level_alternative__DOT__a_i_s;
    CData/*7:0*/ top_level_alternative__DOT__b_i_s;
    CData/*1:0*/ top_level_alternative__DOT__fct_i_s;
    CData/*0:0*/ top_level_alternative__DOT__signal_o_s;
    SData/*15:0*/ top_level_alternative__DOT__s_s;
    IData/*31:0*/ top_level_alternative__DOT__fsm_unit__DOT__current_state;
    IData/*31:0*/ top_level_alternative__DOT__fsm_unit__DOT__next_state;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__top_level_alternative__DOT__s_rst_s;
    CData/*0:0*/ __VinpClk__TOP__top_level_alternative__DOT__signal_rst_s;
    CData/*0:0*/ __VinpClk__TOP__top_level_alternative__DOT__a_rst_s;
    CData/*0:0*/ __VinpClk__TOP__top_level_alternative__DOT__b_rst_s;
    CData/*0:0*/ __VinpClk__TOP__top_level_alternative__DOT__fct_rst_s;
    CData/*0:0*/ __Vclklast__TOP__clock_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__s_rst_s;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__signal_rst_s;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__a_rst_s;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__b_rst_s;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__fct_rst_s;
    CData/*0:0*/ __Vclklast__TOP__reset_i;
    CData/*0:0*/ __Vchglast__TOP__top_level_alternative__DOT__a_rst_s;
    CData/*0:0*/ __Vchglast__TOP__top_level_alternative__DOT__b_rst_s;
    CData/*0:0*/ __Vchglast__TOP__top_level_alternative__DOT__fct_rst_s;
    CData/*0:0*/ __Vchglast__TOP__top_level_alternative__DOT__s_rst_s;
    CData/*0:0*/ __Vchglast__TOP__top_level_alternative__DOT__signal_rst_s;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop_level_alternative__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_level_alternative);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop_level_alternative(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop_level_alternative();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop_level_alternative__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop_level_alternative__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop_level_alternative__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__9(Vtop_level_alternative__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop_level_alternative__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop_level_alternative__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop_level_alternative__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__8(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop_level_alternative__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(Vtop_level_alternative__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
