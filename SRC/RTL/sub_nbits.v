module sub_nbits #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    output logic [width-1:0] s_o,
    output logic cout_o
);
    logic [width:0] temp_s;

    initial begin
        temp_s = '0;
        temp_s[0] = 1;
    end
    
    genvar i;

    generate
        for (i = 0; i <= width-1; i++) begin
            full_adder fa_i (
                .a_i(a_i[i]),
                .b_i(~b_i[i]),
                .cin_i(temp_s[i]),
                .s_o(s_o[i]),
                .cout_o(temp_s[i+1])
            );
        end
    endgenerate

    assign cout_o = ~temp_s[width];

endmodule