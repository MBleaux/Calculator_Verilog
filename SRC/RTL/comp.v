module comp #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    output logic equal_o
);

    assign equal_o = (a_i == b_i);

endmodule