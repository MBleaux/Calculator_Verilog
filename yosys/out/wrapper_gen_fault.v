/* Generated by Yosys 0.25 (git sha1 e02b7f64b, gcc 11.4.0-1ubuntu1~22.04 -fPIC -Os) */

(* global_fault_cnt =  1  *)
(* dynports =  1  *)
(* top =  1  *)
(* src = "./src/wrapper_gen.v:330.1-358.10" *)
module wrapper(reset_i, clock_i, res_o, rem_o, done_o, \dut.reg_fct.q_o_fault , \dut.reg_fct.q_o_fault_sel );
  reg [15:0] _000_ = 16'hxxxx;
  reg [15:0] _001_ = 16'hxxxx;
  reg _002_ = 1'hx;
  reg [1:0] _003_ = 2'h3;
  reg [2:0] _004_ = 3'h7;
  reg [2:0] _005_ = 3'h4;
  reg [1:0] _006_ = 2'hx;
  (* init = 1'h0 *)
  wire _007_;
  (* init = 1'h1 *)
  wire _008_;
  (* init = 1'h0 *)
  wire _009_;
  (* init = 1'h1 *)
  wire _010_;
  wire _011_;
  wire _012_;
  wire _013_;
  wire _014_;
  wire [1:0] _015_;
  (* init = 8'hxx *)
  (* keep = 32'd1 *)
  wire [7:0] _016_;
  wire _017_;
  wire _018_;
  wire _019_;
  wire _020_;
  wire _021_;
  wire _022_;
  wire [31:0] _023_;
  wire [1:0] _024_;
  wire [2:0] _025_;
  wire [2:0] _026_;
  wire [2:0] _027_;
  wire [1:0] _028_;
  wire [1:0] _029_;
  wire _030_;
  wire _031_;
  wire [15:0] _032_;
  wire [15:0] _033_;
  wire [15:0] _034_;
  wire [15:0] _035_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:19.2-57.5|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _036_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:19.2-57.5|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _037_;
  wire [8:0] _038_;
  wire _039_;
  wire _040_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:42.14-42.37|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _041_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:43.14-43.37|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _042_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:36.13-36.36|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _043_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:41.9-41.17|./src/wrapper_gen.v:294.23-301.3" *)
  wire _044_;
  wire _045_;
  wire _046_;
  wire _047_;
  wire _048_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:31.13-31.36|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] _049_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  wire _050_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  wire _051_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  wire _052_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  wire _053_;
  wire [2:0] _054_;
  wire _055_;
  wire _056_;
  wire _057_;
  wire _058_;
  wire _059_;
  wire _060_;
  wire _061_;
  wire _062_;
  wire _063_;
  wire _064_;
  wire _065_;
  wire _066_;
  wire _067_;
  wire _068_;
  wire _069_;
  wire _070_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:270.25-276.3" *)
  wire [1:0] _071_;
  (* src = "./src/wrapper_gen.v:343.20-343.23" *)
  wire [7:0] a_s;
  (* src = "./src/wrapper_gen.v:344.20-344.23" *)
  wire [7:0] b_s;
  (* src = "./src/wrapper_gen.v:339.13-339.20" *)
  input clock_i;
  wire clock_i;
  (* src = "./src/wrapper_gen.v:342.14-342.20" *)
  output done_o;
  wire done_o;
  (* hdlname = "dut a_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:232.27-232.30" *)
  wire [7:0] \dut.a_i ;
  (* hdlname = "dut a_i_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:250.21-250.26" *)
  wire [7:0] \dut.a_i_s ;
  (* hdlname = "dut a_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:239.7-239.14" *)
  wire \dut.a_rst_s ;
  (* hdlname = "dut a_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:238.7-238.13" *)
  wire \dut.a_we_s ;
  (* hdlname = "dut alu_unit _sv2v_0" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:9.6-9.13|./src/wrapper_gen.v:294.23-301.3" *)
  wire \dut.alu_unit._sv2v_0 ;
  (* hdlname = "dut alu_unit a_extended" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:17.26-17.36|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] \dut.alu_unit.a_extended ;
  (* hdlname = "dut alu_unit a_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:11.27-11.30|./src/wrapper_gen.v:294.23-301.3" *)
  wire [7:0] \dut.alu_unit.a_i ;
  (* hdlname = "dut alu_unit b_extended" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:18.26-18.36|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] \dut.alu_unit.b_extended ;
  (* hdlname = "dut alu_unit b_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:12.27-12.30|./src/wrapper_gen.v:294.23-301.3" *)
  wire [7:0] \dut.alu_unit.b_i ;
  (* hdlname = "dut alu_unit done_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:16.13-16.19|./src/wrapper_gen.v:294.23-301.3" *)
  wire \dut.alu_unit.done_o ;
  (* hdlname = "dut alu_unit fct_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:13.19-13.24|./src/wrapper_gen.v:294.23-301.3" *)
  wire [1:0] \dut.alu_unit.fct_i ;
  (* hdlname = "dut alu_unit rem_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:15.33-15.38|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] \dut.alu_unit.rem_o ;
  (* hdlname = "dut alu_unit res_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:14.33-14.38|./src/wrapper_gen.v:294.23-301.3" *)
  wire [15:0] \dut.alu_unit.res_o ;
  (* hdlname = "dut b_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:233.27-233.30" *)
  wire [7:0] \dut.b_i ;
  (* hdlname = "dut b_i_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:251.21-251.26" *)
  wire [7:0] \dut.b_i_s ;
  (* hdlname = "dut b_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:241.7-241.14" *)
  wire \dut.b_rst_s ;
  (* hdlname = "dut b_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:240.7-240.13" *)
  wire \dut.b_we_s ;
  (* hdlname = "dut clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:229.13-229.20" *)
  wire \dut.clock_i ;
  (* hdlname = "dut done_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:237.14-237.20" *)
  wire \dut.done_o ;
  (* hdlname = "dut done_o_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:255.7-255.15" *)
  wire \dut.done_o_s ;
  (* hdlname = "dut done_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:249.7-249.17" *)
  wire \dut.done_rst_s ;
  (* hdlname = "dut done_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:248.7-248.16" *)
  wire \dut.done_we_s ;
  (* hdlname = "dut fct_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:234.19-234.24" *)
  wire [1:0] \dut.fct_i ;
  (* hdlname = "dut fct_i_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:254.13-254.20" *)
  wire [1:0] \dut.fct_i_s ;
  (* hdlname = "dut fct_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:243.7-243.16" *)
  wire \dut.fct_rst_s ;
  (* hdlname = "dut fct_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:242.7-242.15" *)
  wire \dut.fct_we_s ;
  (* hdlname = "dut fsm_unit _sv2v_0" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:96.6-96.13|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit._sv2v_0 ;
  (* hdlname = "dut fsm_unit a_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:101.13-101.20|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.a_rst_o ;
  (* hdlname = "dut fsm_unit a_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:100.13-100.19|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.a_we_o ;
  (* hdlname = "dut fsm_unit b_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:103.13-103.20|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.b_rst_o ;
  (* hdlname = "dut fsm_unit b_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:102.13-102.19|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.b_we_o ;
  (* hdlname = "dut fsm_unit clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:97.13-97.20|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.clock_i ;
  (* hdlname = "dut fsm_unit current_state" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:112.13-112.26|./src/wrapper_gen.v:277.6-293.3" *)
  wire [31:0] \dut.fsm_unit.current_state ;
  (* hdlname = "dut fsm_unit done_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:111.13-111.23|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.done_rst_o ;
  (* hdlname = "dut fsm_unit done_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:110.13-110.22|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.done_we_o ;
  (* hdlname = "dut fsm_unit fct_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:105.13-105.22|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.fct_rst_o ;
  (* hdlname = "dut fsm_unit fct_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:104.13-104.21|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.fct_we_o ;
  (* hdlname = "dut fsm_unit next_state" *)
  wire [2:0] \dut.fsm_unit.next_state ;
  (* hdlname = "dut fsm_unit rem_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:109.13-109.22|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.rem_rst_o ;
  (* hdlname = "dut fsm_unit rem_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:108.13-108.21|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.rem_we_o ;
  (* hdlname = "dut fsm_unit res_rst_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:107.13-107.22|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.res_rst_o ;
  (* hdlname = "dut fsm_unit res_we_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:106.13-106.21|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.res_we_o ;
  (* hdlname = "dut fsm_unit reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:98.13-98.20|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.reset_i ;
  (* hdlname = "dut fsm_unit start_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:99.13-99.20|./src/wrapper_gen.v:277.6-293.3" *)
  wire \dut.fsm_unit.start_i ;
  (* hdlname = "dut reg_a clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:256.29-262.3" *)
  wire \dut.reg_a.clock_i ;
  (* hdlname = "dut reg_a d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:256.29-262.3" *)
  wire [7:0] \dut.reg_a.d_i ;
  (* hdlname = "dut reg_a q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:256.29-262.3" *)
  wire [7:0] \dut.reg_a.q_o ;
  (* hdlname = "dut reg_a reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:256.29-262.3" *)
  wire \dut.reg_a.reset_i ;
  (* hdlname = "dut reg_a we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:256.29-262.3" *)
  wire \dut.reg_a.we_i ;
  (* hdlname = "dut reg_b clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:263.29-269.3" *)
  wire \dut.reg_b.clock_i ;
  (* hdlname = "dut reg_b d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:263.29-269.3" *)
  wire [7:0] \dut.reg_b.d_i ;
  (* hdlname = "dut reg_b q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:263.29-269.3" *)
  wire [7:0] \dut.reg_b.q_o ;
  (* hdlname = "dut reg_b reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:263.29-269.3" *)
  wire \dut.reg_b.reset_i ;
  (* hdlname = "dut reg_b we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:263.29-269.3" *)
  wire \dut.reg_b.we_i ;
  (* hdlname = "dut reg_done clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:316.25-322.3" *)
  wire \dut.reg_done.clock_i ;
  (* hdlname = "dut reg_done d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:316.25-322.3" *)
  wire \dut.reg_done.d_i ;
  (* hdlname = "dut reg_done q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:316.25-322.3" *)
  wire \dut.reg_done.q_o ;
  (* hdlname = "dut reg_done reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:316.25-322.3" *)
  wire \dut.reg_done.reset_i ;
  (* hdlname = "dut reg_done we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:316.25-322.3" *)
  wire \dut.reg_done.we_i ;
  (* hdlname = "dut reg_fct clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:270.25-276.3" *)
  wire \dut.reg_fct.clock_i ;
  (* hdlname = "dut reg_fct d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:270.25-276.3" *)
  wire [1:0] \dut.reg_fct.d_i ;
  (* fauted = 32'd1 *)
  (* hdlname = "dut reg_fct q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:270.25-276.3" *)
  wire [1:0] \dut.reg_fct.q_o ;
  input [1:0] \dut.reg_fct.q_o_fault ;
  wire [1:0] \dut.reg_fct.q_o_fault ;
  (* keep = 32'd1 *)
  input \dut.reg_fct.q_o_fault_sel ;
  wire \dut.reg_fct.q_o_fault_sel ;
  (* hdlname = "dut reg_fct reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:270.25-276.3" *)
  wire \dut.reg_fct.reset_i ;
  (* hdlname = "dut reg_fct we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:270.25-276.3" *)
  wire \dut.reg_fct.we_i ;
  (* hdlname = "dut reg_rem clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:309.33-315.3" *)
  wire \dut.reg_rem.clock_i ;
  (* hdlname = "dut reg_rem d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:309.33-315.3" *)
  wire [15:0] \dut.reg_rem.d_i ;
  (* hdlname = "dut reg_rem q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:309.33-315.3" *)
  wire [15:0] \dut.reg_rem.q_o ;
  (* hdlname = "dut reg_rem reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:309.33-315.3" *)
  wire \dut.reg_rem.reset_i ;
  (* hdlname = "dut reg_rem we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:309.33-315.3" *)
  wire \dut.reg_rem.we_i ;
  (* hdlname = "dut reg_res clock_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:69.13-69.20|./src/wrapper_gen.v:302.33-308.3" *)
  wire \dut.reg_res.clock_i ;
  (* hdlname = "dut reg_res d_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:68.27-68.30|./src/wrapper_gen.v:302.33-308.3" *)
  wire [15:0] \dut.reg_res.d_i ;
  (* hdlname = "dut reg_res q_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:72.27-72.30|./src/wrapper_gen.v:302.33-308.3" *)
  wire [15:0] \dut.reg_res.q_o ;
  (* hdlname = "dut reg_res reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:70.13-70.20|./src/wrapper_gen.v:302.33-308.3" *)
  wire \dut.reg_res.reset_i ;
  (* hdlname = "dut reg_res we_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:71.13-71.17|./src/wrapper_gen.v:302.33-308.3" *)
  wire \dut.reg_res.we_i ;
  (* hdlname = "dut rem_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:236.34-236.39" *)
  wire [15:0] \dut.rem_o ;
  (* hdlname = "dut rem_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:247.7-247.16" *)
  wire \dut.rem_rst_s ;
  (* hdlname = "dut rem_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:253.27-253.32" *)
  wire [15:0] \dut.rem_s ;
  (* hdlname = "dut rem_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:246.7-246.15" *)
  wire \dut.rem_we_s ;
  (* hdlname = "dut res_o" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:235.34-235.39" *)
  wire [15:0] \dut.res_o ;
  (* hdlname = "dut res_rst_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:245.7-245.16" *)
  wire \dut.res_rst_s ;
  (* hdlname = "dut res_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:252.27-252.32" *)
  wire [15:0] \dut.res_s ;
  (* hdlname = "dut res_we_s" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:244.7-244.15" *)
  wire \dut.res_we_s ;
  (* hdlname = "dut reset_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:230.13-230.20" *)
  wire \dut.reset_i ;
  (* hdlname = "dut start_i" *)
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:231.13-231.20" *)
  wire \dut.start_i ;
  wire [7:0] fault_cnt_incr;
  (* src = "./src/wrapper_gen.v:345.12-345.17" *)
  wire [1:0] fct_s;
  (* init = 32'd20 *)
  (* keep = 32'd1 *)
  wire [31:0] global_fault_clock;
  wire [7:0] global_fault_cnt;
  (* src = "./src/wrapper_gen.v:341.34-341.39" *)
  output [15:0] rem_o;
  wire [15:0] rem_o;
  (* src = "./src/wrapper_gen.v:340.34-340.39" *)
  output [15:0] res_o;
  wire [15:0] res_o;
  (* src = "./src/wrapper_gen.v:338.13-338.20" *)
  input reset_i;
  wire reset_i;
  (* src = "./src/wrapper_gen.v:346.6-346.13" *)
  wire start_s;
  assign \dut.reg_res.q_o  = \dut.fsm_unit.done_rst_o  ? _000_ : 16'h0000;
  assign \dut.reg_rem.q_o  = \dut.fsm_unit.done_rst_o  ? _001_ : 16'h0000;
  assign \dut.reg_done.q_o  = \dut.fsm_unit.done_rst_o  ? _002_ : 1'h0;
  assign \dut.reg_a.q_o [1:0] = \dut.fsm_unit.fct_rst_o  ? _003_ : 2'h0;
  assign \dut.reg_b.q_o [2:0] = \dut.fsm_unit.fct_rst_o  ? _004_ : 3'h0;
  assign \dut.fsm_unit.current_state [2:0] = reset_i ? _005_ : 3'h0;
  assign _015_ = \dut.fsm_unit.fct_rst_o  ? _006_ : 2'h0;
  assign _011_ = _065_ ? _007_ : _051_;
  assign _012_ = _065_ ? _008_ : _050_;
  assign _013_ = _065_ ? _009_ : _053_;
  assign _014_ = _065_ ? _010_ : _052_;
  assign \dut.reg_fct.q_o  = \dut.reg_fct.q_o_fault_sel  ? \dut.reg_fct.q_o_fault  : _015_;
  assign _023_ = global_fault_clock + 1'h1;
  \$ff  #(
    .WIDTH(32'd32)
  ) _085_ (
    .D(_023_),
    .Q(global_fault_clock)
  );
  assign _017_ = ~ \dut.reg_fct.q_o_fault_sel ;
  assign _022_ = global_fault_clock >= 32'd3;
  assign _018_ = _022_ & _020_;
  assign _020_ = global_fault_clock <= 32'd3;
  assign _019_ = _018_ | _017_;
  always @* if (1'h1) assume(_019_);
  assign fault_cnt_incr = \dut.reg_fct.q_o_fault_sel  ? 8'h01 : 8'h00;
  assign global_fault_cnt = _016_ + fault_cnt_incr;
  \$ff  #(
    .WIDTH(32'd8)
  ) _094_ (
    .D(global_fault_cnt),
    .Q(_016_)
  );
  assign _021_ = global_fault_cnt <= 8'h01;
  always @* if (1'h1) assume(_021_);
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:302.33-308.3" *)
  always @(posedge clock_i)
    _000_ <= _035_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:309.33-315.3" *)
  always @(posedge clock_i)
    _001_ <= _033_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:316.25-322.3" *)
  always @(posedge clock_i)
    _002_ <= _031_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:256.29-262.3" *)
  always @(posedge clock_i)
    _003_ <= _029_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:263.29-269.3" *)
  always @(posedge clock_i)
    _004_ <= _027_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:114.2-118.32|./src/wrapper_gen.v:277.6-293.3" *)
  always @(posedge clock_i)
    _005_ <= _025_;
  assign _026_ = \dut.fsm_unit.fct_we_o  ? 3'h7 : _004_;
  assign _028_ = \dut.fsm_unit.fct_we_o  ? 2'h3 : _003_;
  assign _030_ = \dut.fsm_unit.done_we_o  ? \dut.alu_unit.done_o  : _002_;
  assign _032_ = \dut.fsm_unit.done_we_o  ? \dut.alu_unit.rem_o  : _001_;
  assign _034_ = \dut.fsm_unit.done_we_o  ? \dut.alu_unit.res_o  : _000_;
  assign _024_ = \dut.fsm_unit.fct_rst_o  ? _071_ : 2'h0;
  assign _025_ = reset_i ? \dut.fsm_unit.next_state  : 3'h0;
  assign _027_ = \dut.fsm_unit.fct_rst_o  ? _026_ : 3'h0;
  assign _029_ = \dut.fsm_unit.fct_rst_o  ? _028_ : 2'h0;
  assign _031_ = \dut.fsm_unit.done_rst_o  ? _030_ : 1'h0;
  assign _033_ = \dut.fsm_unit.done_rst_o  ? _032_ : 16'h0000;
  assign _035_ = \dut.fsm_unit.done_rst_o  ? _034_ : 16'h0000;
  assign _038_ = { 6'h00, \dut.reg_a.q_o [1:0] } + (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:26.13-26.36|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _039_ = | { _046_, _047_, _048_ };
  assign _040_ = | { _045_, _046_, _047_, _048_ };
  assign _041_ = { 6'h00, \dut.reg_a.q_o [1:0] } / (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:42.14-42.37|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _042_ = { 6'h00, \dut.reg_a.q_o [1:0] } % (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:43.14-43.37|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _043_ = { 6'h00, \dut.reg_a.q_o [1:0] } * (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:36.13-36.36|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _044_ = | (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:41.9-41.17|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _036_ = _044_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:41.9-41.17|./src/wrapper_gen.v:41.5-48.8|./src/wrapper_gen.v:294.23-301.3" *) _042_ : 16'h0000;
  assign _045_ = \dut.reg_fct.q_o  == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *) 2'h3;
  assign _037_ = _044_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:41.9-41.17|./src/wrapper_gen.v:41.5-48.8|./src/wrapper_gen.v:294.23-301.3" *) _041_ : 16'h0000;
  assign \dut.alu_unit.done_o  = _040_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *) 1'h1 : 1'hx;
  assign _046_ = \dut.reg_fct.q_o  == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *) 2'h2;
  assign _047_ = \dut.reg_fct.q_o  == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *) 1'h1;
  assign _048_ = ! (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *) \dut.reg_fct.q_o ;
  function [15:0] _129_;
    input [15:0] a;
    input [31:0] b;
    input [1:0] s;
    (* full_case = 32'd1 *)
    (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *)
    (* parallel_case *)
    casez (s)
      2'b?1:
        _129_ = b[15:0];
      2'b1?:
        _129_ = b[31:16];
      default:
        _129_ = a;
    endcase
  endfunction
  assign \dut.alu_unit.rem_o  = _129_(16'hxxxx, { 16'h0000, _036_ }, { _039_, _045_ });
  function [15:0] _130_;
    input [15:0] a;
    input [63:0] b;
    input [3:0] s;
    (* full_case = 32'd1 *)
    (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:24.3-56.10|./src/wrapper_gen.v:294.23-301.3" *)
    (* parallel_case *)
    casez (s)
      4'b???1:
        _130_ = b[15:0];
      4'b??1?:
        _130_ = b[31:16];
      4'b?1??:
        _130_ = b[47:32];
      4'b1???:
        _130_ = b[63:48];
      default:
        _130_ = a;
    endcase
  endfunction
  assign \dut.alu_unit.res_o  = _130_(16'hxxxx, { 7'h00, _038_, _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[7:0], _043_, _037_ }, { _048_, _047_, _046_, _045_ });
  assign { _049_[15], _049_[7:0] } = { 6'h00, \dut.reg_a.q_o [1:0] } - (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:31.13-31.36|./src/wrapper_gen.v:294.23-301.3" *) { 5'h00, \dut.reg_b.q_o [2:0] };
  assign _055_ = | { _067_, _068_, _069_, _070_ };
  assign _056_ = | { _067_, _068_ };
  assign _057_ = ~ (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _066_;
  assign _058_ = ~ (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _070_;
  assign _059_ = ~ (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _069_;
  assign _060_ = ~ (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _068_;
  assign _061_ = ~ (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _067_;
  assign _064_ = _058_ & (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _063_;
  assign _065_ = _057_ & (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _064_;
  assign _062_ = _060_ & (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _061_;
  assign _063_ = _059_ & (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *) _062_;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  \$ff  #(
    .WIDTH(32'd1)
  ) _143_ (
    .D(_011_),
    .Q(_007_)
  );
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  \$ff  #(
    .WIDTH(32'd1)
  ) _144_ (
    .D(_012_),
    .Q(_008_)
  );
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  \$ff  #(
    .WIDTH(32'd1)
  ) _145_ (
    .D(_013_),
    .Q(_009_)
  );
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:139.2-214.5|./src/wrapper_gen.v:277.6-293.3" *)
  \$ff  #(
    .WIDTH(32'd1)
  ) _146_ (
    .D(_014_),
    .Q(_010_)
  );
  assign _066_ = ! (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) { 29'h00000000, \dut.fsm_unit.current_state [2:0] };
  assign _053_ = _068_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 1'h1 : 1'h0;
  assign _067_ = \dut.fsm_unit.current_state [2:0] == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 3'h4;
  assign _068_ = \dut.fsm_unit.current_state [2:0] == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 3'h3;
  assign _069_ = \dut.fsm_unit.current_state [2:0] == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 3'h2;
  assign _070_ = \dut.fsm_unit.current_state [2:0] == (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 3'h1;
  assign _051_ = _070_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 1'h1 : 1'h0;
  assign _050_ = _055_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 1'h1 : 1'h0;
  assign _054_ = reset_i ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:132.9-132.17|./src/wrapper_gen.v:132.5-135.25|./src/wrapper_gen.v:277.6-293.3" *) 3'h4 : 3'h0;
  function [2:0] _156_;
    input [2:0] a;
    input [14:0] b;
    input [4:0] s;
    (* full_case = 32'd1 *)
    (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:122.3-137.10|./src/wrapper_gen.v:277.6-293.3" *)
    (* parallel_case *)
    casez (s)
      5'b????1:
        _156_ = b[2:0];
      5'b???1?:
        _156_ = b[5:3];
      5'b??1??:
        _156_ = b[8:6];
      5'b?1???:
        _156_ = b[11:9];
      5'b1????:
        _156_ = b[14:12];
      default:
        _156_ = a;
    endcase
  endfunction
  assign \dut.fsm_unit.next_state  = _156_(3'h0, { 12'h29c, _054_ }, { _066_, _070_, _069_, _068_, _067_ });
  assign _052_ = _056_ ? (* full_case = 32'd1 *) (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:0.0-0.0|./src/wrapper_gen.v:142.3-213.10|./src/wrapper_gen.v:277.6-293.3" *) 1'h1 : 1'h0;
  (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:73.2-77.15|./src/wrapper_gen.v:270.25-276.3" *)
  always @(posedge clock_i)
    _006_ <= _024_;
  assign _071_ = \dut.fsm_unit.fct_we_o  ? (* src = "./src/wrapper_gen.v:347.29-357.3|./src/wrapper_gen.v:76.12-76.16|./src/wrapper_gen.v:76.8-77.15|./src/wrapper_gen.v:270.25-276.3" *) 2'h2 : \dut.reg_fct.q_o ;
  assign _049_[14:8] = { _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[15], _049_[15] };
  assign a_s = 8'h03;
  assign b_s = 8'h07;
  assign done_o = \dut.reg_done.q_o ;
  assign \dut.a_i  = 8'h03;
  assign \dut.a_i_s  = { 6'h00, \dut.reg_a.q_o [1:0] };
  assign \dut.a_rst_s  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.a_we_s  = \dut.fsm_unit.fct_we_o ;
  assign \dut.alu_unit._sv2v_0  = 1'h0;
  assign \dut.alu_unit.a_extended  = { 14'h0000, \dut.reg_a.q_o [1:0] };
  assign \dut.alu_unit.a_i  = { 6'h00, \dut.reg_a.q_o [1:0] };
  assign \dut.alu_unit.b_extended  = { 13'h0000, \dut.reg_b.q_o [2:0] };
  assign \dut.alu_unit.b_i  = { 5'h00, \dut.reg_b.q_o [2:0] };
  assign \dut.alu_unit.fct_i  = \dut.reg_fct.q_o ;
  assign \dut.b_i  = 8'h07;
  assign \dut.b_i_s  = { 5'h00, \dut.reg_b.q_o [2:0] };
  assign \dut.b_rst_s  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.b_we_s  = \dut.fsm_unit.fct_we_o ;
  assign \dut.clock_i  = clock_i;
  assign \dut.done_o  = \dut.reg_done.q_o ;
  assign \dut.done_o_s  = \dut.alu_unit.done_o ;
  assign \dut.done_rst_s  = \dut.fsm_unit.done_rst_o ;
  assign \dut.done_we_s  = \dut.fsm_unit.done_we_o ;
  assign \dut.fct_i  = 2'h2;
  assign \dut.fct_i_s  = \dut.reg_fct.q_o ;
  assign \dut.fct_rst_s  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.fct_we_s  = \dut.fsm_unit.fct_we_o ;
  assign \dut.fsm_unit._sv2v_0  = 1'h0;
  assign \dut.fsm_unit.a_rst_o  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.fsm_unit.a_we_o  = \dut.fsm_unit.fct_we_o ;
  assign \dut.fsm_unit.b_rst_o  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.fsm_unit.b_we_o  = \dut.fsm_unit.fct_we_o ;
  assign \dut.fsm_unit.clock_i  = clock_i;
  assign \dut.fsm_unit.current_state [31:3] = 29'h00000000;
  assign \dut.fsm_unit.rem_rst_o  = \dut.fsm_unit.done_rst_o ;
  assign \dut.fsm_unit.rem_we_o  = \dut.fsm_unit.done_we_o ;
  assign \dut.fsm_unit.res_rst_o  = \dut.fsm_unit.done_rst_o ;
  assign \dut.fsm_unit.res_we_o  = \dut.fsm_unit.done_we_o ;
  assign \dut.fsm_unit.reset_i  = reset_i;
  assign \dut.fsm_unit.start_i  = 1'h1;
  assign \dut.reg_a.clock_i  = clock_i;
  assign \dut.reg_a.d_i  = 8'h03;
  assign \dut.reg_a.q_o [7:2] = 6'h00;
  assign \dut.reg_a.reset_i  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.reg_a.we_i  = \dut.fsm_unit.fct_we_o ;
  assign \dut.reg_b.clock_i  = clock_i;
  assign \dut.reg_b.d_i  = 8'h07;
  assign \dut.reg_b.q_o [7:3] = 5'h00;
  assign \dut.reg_b.reset_i  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.reg_b.we_i  = \dut.fsm_unit.fct_we_o ;
  assign \dut.reg_done.clock_i  = clock_i;
  assign \dut.reg_done.d_i  = \dut.alu_unit.done_o ;
  assign \dut.reg_done.reset_i  = \dut.fsm_unit.done_rst_o ;
  assign \dut.reg_done.we_i  = \dut.fsm_unit.done_we_o ;
  assign \dut.reg_fct.clock_i  = clock_i;
  assign \dut.reg_fct.d_i  = 2'h2;
  assign \dut.reg_fct.reset_i  = \dut.fsm_unit.fct_rst_o ;
  assign \dut.reg_fct.we_i  = \dut.fsm_unit.fct_we_o ;
  assign \dut.reg_rem.clock_i  = clock_i;
  assign \dut.reg_rem.d_i  = \dut.alu_unit.rem_o ;
  assign \dut.reg_rem.reset_i  = \dut.fsm_unit.done_rst_o ;
  assign \dut.reg_rem.we_i  = \dut.fsm_unit.done_we_o ;
  assign \dut.reg_res.clock_i  = clock_i;
  assign \dut.reg_res.d_i  = \dut.alu_unit.res_o ;
  assign \dut.reg_res.reset_i  = \dut.fsm_unit.done_rst_o ;
  assign \dut.reg_res.we_i  = \dut.fsm_unit.done_we_o ;
  assign \dut.rem_o  = \dut.reg_rem.q_o ;
  assign \dut.rem_rst_s  = \dut.fsm_unit.done_rst_o ;
  assign \dut.rem_s  = \dut.alu_unit.rem_o ;
  assign \dut.rem_we_s  = \dut.fsm_unit.done_we_o ;
  assign \dut.res_o  = \dut.reg_res.q_o ;
  assign \dut.res_rst_s  = \dut.fsm_unit.done_rst_o ;
  assign \dut.res_s  = \dut.alu_unit.res_o ;
  assign \dut.res_we_s  = \dut.fsm_unit.done_we_o ;
  assign \dut.reset_i  = reset_i;
  assign \dut.start_i  = 1'h1;
  assign fct_s = 2'h2;
  assign rem_o = \dut.reg_rem.q_o ;
  assign res_o = \dut.reg_res.q_o ;
  assign start_s = 1'h1;
  assign \dut.fsm_unit.fct_we_o  = _011_;
  assign \dut.fsm_unit.fct_rst_o  = _012_;
  assign \dut.fsm_unit.done_we_o  = _013_;
  assign \dut.fsm_unit.done_rst_o  = _014_;
endmodule
