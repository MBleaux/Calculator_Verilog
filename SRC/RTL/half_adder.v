module half_adder (
    input logic a_i, b_i,
    output logic s_o, c_o
);
    assign s_o = (a_i ^ b_i);
    assign c_o = (a_i & b_i);
endmodule