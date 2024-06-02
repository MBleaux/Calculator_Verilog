module wrapper (
	reset_i,
	clock_i,
	res_o,
	rem_o,
	done_o
);
	parameter width = 8;
	input wire reset_i;
	input wire clock_i;
	output wire [(2 * width) - 1:0] res_o;
	output wire [(2 * width) - 1:0] rem_o;
	output wire done_o;
	reg [width - 1:0] a_s = 8'h03;
	reg [width - 1:0] b_s = 8'h07;
	reg [1:0] fct_s = 2'b00;
	reg start_s = 1'b1;
	top_level #(.width(width)) dut(
		.clock_i(clock_i),
		.reset_i(reset_i),
		.start_i(start_s),
		.a_i(a_s),
		.b_i(b_s),
		.fct_i(fct_s),
		.res_o(res_o),
		.rem_o(rem_o),
		.done_o(done_o)
	);
	wire add;
	assign add = fct_s == 2'b00;
endmodule
