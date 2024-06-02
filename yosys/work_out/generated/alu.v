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
