module full_adder_nbits #(
    parameter width = 8
) (
    input logic[width-1:0]  a_i, b_i,
    output logic[width-1:0] s_o,
    output logic cout_o
);
    logic [width-1:0] aux_s = '0;

    full_adder fa0(.a_i(a_i[0]), .b_i(b_i[0]), .cin_i(aux_s[0]), .s_o(s_o[0]), .cout_o(aux_s[1]));



endmodule