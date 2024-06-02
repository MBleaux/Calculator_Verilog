module top_level (
	clock_i,
	reset_i,
	start_i,
	a_i,
	b_i,
	fct_i,
	res_o,
	rem_o,
	done_o
);
	parameter width = 8;
	input wire clock_i;
	input wire reset_i;
	input wire start_i;
	input wire [width - 1:0] a_i;
	input wire [width - 1:0] b_i;
	input wire [1:0] fct_i;
	output wire [(2 * width) - 1:0] res_o;
	output wire [(2 * width) - 1:0] rem_o;
	output wire done_o;
	wire a_we_s;
	wire a_rst_s;
	wire b_we_s;
	wire b_rst_s;
	wire fct_we_s;
	wire fct_rst_s;
	wire res_we_s;
	wire res_rst_s;
	wire rem_we_s;
	wire rem_rst_s;
	wire done_we_s;
	wire done_rst_s;
	wire [width - 1:0] a_i_s;
	wire [width - 1:0] b_i_s;
	wire [(2 * width) - 1:0] res_s;
	wire [(2 * width) - 1:0] rem_s;
	wire [1:0] fct_i_s;
	wire done_o_s;
	dff_nbits #(.width(width)) reg_a(
		.d_i(a_i),
		.clock_i(clock_i),
		.reset_i(a_rst_s),
		.we_i(a_we_s),
		.q_o(a_i_s)
	);
	dff_nbits #(.width(width)) reg_b(
		.d_i(b_i),
		.clock_i(clock_i),
		.reset_i(b_rst_s),
		.we_i(b_we_s),
		.q_o(b_i_s)
	);
	dff_nbits #(.width(2)) reg_fct(
		.d_i(fct_i),
		.clock_i(clock_i),
		.reset_i(fct_rst_s),
		.we_i(fct_we_s),
		.q_o(fct_i_s)
	);
	fsm fsm_unit(
		.clock_i(clock_i),
		.reset_i(reset_i),
		.start_i(start_i),
		.a_we_o(a_we_s),
		.a_rst_o(a_rst_s),
		.b_we_o(b_we_s),
		.b_rst_o(b_rst_s),
		.fct_we_o(fct_we_s),
		.fct_rst_o(fct_rst_s),
		.res_we_o(res_we_s),
		.res_rst_o(res_rst_s),
		.rem_we_o(rem_we_s),
		.rem_rst_o(rem_rst_s),
		.done_we_o(done_we_s),
		.done_rst_o(done_rst_s)
	);
	alu #(.width(width)) alu_unit(
		.a_i(a_i_s),
		.b_i(b_i_s),
		.fct_i(fct_i_s),
		.res_o(res_s),
		.rem_o(rem_s),
		.done_o(done_o_s)
	);
	dff_nbits #(.width(2 * width)) reg_res(
		.d_i(res_s),
		.clock_i(clock_i),
		.reset_i(res_rst_s),
		.we_i(res_we_s),
		.q_o(res_o)
	);
	dff_nbits #(.width(2 * width)) reg_rem(
		.d_i(rem_s),
		.clock_i(clock_i),
		.reset_i(rem_rst_s),
		.we_i(rem_we_s),
		.q_o(rem_o)
	);
	dff_nbits #(.width(1)) reg_done(
		.d_i(done_o_s),
		.clock_i(clock_i),
		.reset_i(done_rst_s),
		.we_i(done_we_s),
		.q_o(done_o)
	);
endmodule
