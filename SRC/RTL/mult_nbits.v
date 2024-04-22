module mult_nbits #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    output logic [2*width-1:0] s_o
);
    logic [2*width-1:0] accumulator;

    always_comb begin
        int i;  // Declare loop variable as an integer
        accumulator = 0;  // Reset the accumulator at the beginning of each evaluation
        for (i = 0; i < width; i++) begin
            if (b_i[i]) begin
                accumulator += a_i << i;  // Accumulate shifted value into accumulator
            end
        end
        s_o = accumulator;  // Output the final result
    end

    /*
    Original idea was to use full_adder_nbits for adding when b_i[i] is true,
    but there's an error that does not allowed to use it, reporting that compiler
    can not find that full_adder_nbits's module.

    logic [2*width-2:0] accumulator, temp;
    logic [2*width-1:0] extended_accumulator;

    always_comb begin
        int i;  // Declare loop variable as an integer
        temp = 0; // Reset the accumulator at the beginning of each evaluation
        accumulator = 0;  // Reset the accumulator at the beginning of each evaluation
        extended_accumulator = 0;  // Initialize extended accumulator
        for (i = 0; i <= width-1; i++) begin
            if (b_i[i]) begin
                temp = {{(width-2){1'b0}}, a_i} << i;
                full_adder_nbits #(.width(2*width-1)) fa (
                    .a_i(accumulator), 
                    .b_i(temp), 
                    .s_o(extended_accumulator)
                );
                accumulator = extended_accumulator[2*width-2:0];  // Ignore the extra carry bit for the next iteration
            end
        end
        s_o = extended_accumulator[2*width-1:0];  // Output the final result
    end
    */
endmodule
