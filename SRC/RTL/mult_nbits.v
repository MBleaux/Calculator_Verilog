module mult_nbits #(
    parameter width = 8
) (
    input logic[width-1:0] a_i, b_i,
    output logic[2*width:0] s_o
);
    logic[2*width-1:0] tmp1_s = 0, tmp2_s = 0;
    logic[2*width:0] tmp_s = 0;
    logic[width:0] tmp3_s;
    genvar i;

    // always_comb block ensures that the logic behaves as combinational
    always_comb begin
        tmp1_s = 0;  // Reset the accumulator at the beginning of each evaluation
        for (i = 0; i <= width-1; i++) begin
            if (b_i[i]) begin
                // Perform a_i + a_i
                full_adder_wcarry_nbits #(.width(width)) fa1 (
                    .a_i(a_i), 
                    .b_i(a_i), 
                    .s_o(tmp3_s)
                );
                // Align tmp3_s to the correct bit position
                tmp2_s = {{(width-i){1'b0}}, tmp3_s[width:0], {(i){1'b0}}};
                // Add aligned result to tmp1_s
                full_adder_wcarry_nbits #(.width(2*width-1)) fa2 (
                    .a_i(tmp1_s), 
                    .b_i(tmp2_s), 
                    .s_o(tmp_s)
                );
                tmp1_s = tmp_s;  // Store the result for the next iteration
            end
        end
    end

    assign s_o = tmp1_s;  // Output the final result
endmodule
