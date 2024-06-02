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
