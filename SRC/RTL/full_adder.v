module full_adder (
    input logic a_i, b_i, cin_i,
    output logic s_o, cout_o
);
    logic aux1_s, aux2_s, aux3_s;

    half_adder h1(.a_i(a_i),    .b_i(cin_i),  .s_o(aux2_s), .c_o(aux1_s));
    half_adder h2(.a_i(aux2_s), .b_i(b_i),    .s_o(s_o), .c_o(aux3_s));
    or_gate    o1(.a_i(aux1_s), .b_i(aux3_s), .s_o(cout_o));
endmodule