module add_sub_nbits #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    input logic sub_i,  // Control signal to substract
    output logic [width-1:0] s_o,
    output logic cout_o
);
    logic [width-1:0] b_by2_s;
    logic [width:0] temp_s;
    logic carry_in_s;
    genvar i;

    // Calculates complement by 2 of b_i if sub_i is true
    always_comb begin
        if (sub_i) begin
            b_by2_s = ~b_i;  // Inverts the bits for complement by 1
        end else begin
            b_by2_s = b_i;
        end
    end

    // Initializes carry_in_s to be 1 if it is substract instruction (to add +1 in the complement by 2)
    assign carry_in_s = sub_i;

    // Addition/Substraction
    generate
        for (i = 0; i < width; i = i + 1) begin
            full_adder fa_i (
                .a_i(a_i[i]),
                .b_i(b_by2_s[i]),
                .cin_i(i == 0 ? carry_in_s : temp_s[i]),
                .s_o(s_o[i]),
                .cout_o(temp_s[i+1])
            );
        end
    endgenerate

    
    //assign cout_o = ~temp_s[width];
    // Calculates the carry out
    always_comb begin
        if (sub_i) begin
            cout_o = ~temp_s[width];
        end else begin
            cout_o = temp_s[width];
        end
    end

endmodule
