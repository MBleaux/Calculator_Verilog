module or_gate (
    input a_i, b_i,
    output s_o
);
    assign s_o = (a_i | b_i);
endmodule