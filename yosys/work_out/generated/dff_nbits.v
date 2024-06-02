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
