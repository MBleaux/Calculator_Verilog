module alu (
	a_i,
	b_i,
	fct_i,
	res_o,
	rem_o,
	done_o
);
	reg _sv2v_0;
	parameter width = 8;
	input wire [width - 1:0] a_i;
	input wire [width - 1:0] b_i;
	input wire [1:0] fct_i;
	output reg [(2 * width) - 1:0] res_o;
	output reg [(2 * width) - 1:0] rem_o;
	output reg done_o;
	reg [(2 * width) - 1:0] a_extended;
	reg [(2 * width) - 1:0] b_extended;
	always @(*) begin
		if (_sv2v_0)
			;
		a_extended = {{width {1'b0}}, a_i};
		b_extended = {{width {1'b0}}, b_i};
		case (fct_i)
			2'b00: begin
				res_o = a_extended + b_extended;
				rem_o = 0;
				done_o = 1;
			end
			2'b01: begin
				res_o = a_extended - b_extended;
				rem_o = 0;
				done_o = 1;
			end
			2'b10: begin
				res_o = a_extended * b_extended;
				rem_o = 0;
				done_o = 1;
			end
			2'b11: begin
				if (b_i != 0) begin
					res_o = a_extended / b_extended;
					rem_o = a_extended % b_extended;
				end
				else begin
					res_o = 0;
					rem_o = 0;
				end
				done_o = 1;
			end
			default: begin
				res_o = 0;
				rem_o = 0;
				done_o = 0;
			end
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module dff_nbits (
	d_i,
	clock_i,
	reset_i,
	we_i,
	q_o
);
	parameter width = 8;
	input wire [width - 1:0] d_i;
	input wire clock_i;
	input wire reset_i;
	input wire we_i;
	output reg [width - 1:0] q_o;
	always @(posedge clock_i or negedge reset_i)
		if (!reset_i)
			q_o <= 1'sb0;
		else if (we_i)
			q_o <= d_i;
endmodule
module fsm (
	clock_i,
	reset_i,
	start_i,
	a_we_o,
	a_rst_o,
	b_we_o,
	b_rst_o,
	fct_we_o,
	fct_rst_o,
	res_we_o,
	res_rst_o,
	rem_we_o,
	rem_rst_o,
	done_we_o,
	done_rst_o
);
	reg _sv2v_0;
	input wire clock_i;
	input wire reset_i;
	input wire start_i;
	output reg a_we_o;
	output reg a_rst_o;
	output reg b_we_o;
	output reg b_rst_o;
	output reg fct_we_o;
	output reg fct_rst_o;
	output reg res_we_o;
	output reg res_rst_o;
	output reg rem_we_o;
	output reg rem_rst_o;
	output reg done_we_o;
	output reg done_rst_o;
	reg [31:0] current_state;
	reg [31:0] next_state;
	always @(posedge clock_i or negedge reset_i)
		if (!reset_i)
			current_state <= 32'd0;
		else
			current_state <= next_state;
	always @(*) begin
		if (_sv2v_0)
			;
		case (current_state)
			32'd0:
				if (start_i)
					next_state = 32'd1;
				else
					next_state = 32'd0;
			32'd1: next_state = 32'd2;
			32'd2: next_state = 32'd3;
			32'd3: next_state = 32'd4;
			32'd4:
				if (!reset_i)
					next_state = 32'd0;
				else
					next_state = 32'd4;
			default: next_state = 32'd0;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		case (current_state)
			32'd0: begin
				a_we_o = 0;
				a_rst_o = 0;
				b_we_o = 0;
				b_rst_o = 0;
				fct_we_o = 0;
				fct_rst_o = 0;
				res_we_o = 0;
				res_rst_o = 0;
				rem_we_o = 0;
				rem_rst_o = 0;
				done_we_o = 0;
				done_rst_o = 0;
			end
			32'd1: begin
				a_we_o = 1;
				a_rst_o = 1;
				b_we_o = 1;
				b_rst_o = 1;
				fct_we_o = 1;
				fct_rst_o = 1;
				res_we_o = 0;
				res_rst_o = 0;
				rem_we_o = 0;
				rem_rst_o = 0;
				done_we_o = 0;
				done_rst_o = 0;
			end
			32'd2: begin
				a_we_o = 0;
				a_rst_o = 1;
				b_we_o = 0;
				b_rst_o = 1;
				fct_we_o = 0;
				fct_rst_o = 1;
				res_we_o = 0;
				res_rst_o = 0;
				rem_we_o = 0;
				rem_rst_o = 0;
				done_we_o = 0;
				done_rst_o = 0;
			end
			32'd3: begin
				a_we_o = 0;
				a_rst_o = 1;
				b_we_o = 0;
				b_rst_o = 1;
				fct_we_o = 0;
				fct_rst_o = 1;
				res_we_o = 1;
				res_rst_o = 1;
				rem_we_o = 1;
				rem_rst_o = 1;
				done_we_o = 1;
				done_rst_o = 1;
			end
			32'd4: begin
				a_we_o = 0;
				a_rst_o = 1;
				b_we_o = 0;
				b_rst_o = 1;
				fct_we_o = 0;
				fct_rst_o = 1;
				res_we_o = 0;
				res_rst_o = 1;
				rem_we_o = 0;
				rem_rst_o = 1;
				done_we_o = 0;
				done_rst_o = 1;
			end
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
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

	// assertions
	// if an error occurs in the properties, the solver will generate a .vcd file

	assign check_res = ((done_o == 1'b0) && (res_o == 16'h00)) || ((done_o == 1'b1) && (res_o == 16'hFFFC));
	assert property(check_res);

endmodule
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
	reg [1:0] fct_s = 2'b10;
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
endmodule
