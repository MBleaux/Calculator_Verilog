/**
 * @file alu
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Arithmetic Logic Unit
 * @version 0.3
 * @date 2024-05-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module alu #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    input logic [1:0] fct_i,
    output logic [2*width-1:0] res_o, rem_o,
    output logic done_o
);
    logic [2*width-1:0] a_extended, b_extended;

    // Combinational logic to select the output based on fct_i
    always_comb begin
        a_extended = { {width{1'b0}}, a_i};
        b_extended = { {width{1'b0}}, b_i};
        case (fct_i)
            2'b00: begin
                res_o = a_extended + b_extended;
                rem_o = 0;
                done_o = 1;
            end
            2'b01: begin
                res_o = a_extended - b_extended;;
                rem_o = 0;
                done_o = 1;
            end
            2'b10: begin
                res_o = a_extended * b_extended;;
                rem_o = 0;
                done_o = 1;
            end
            2'b11: begin
                if (b_i != 0) begin
                    res_o = a_extended / b_extended;
                    rem_o = a_extended % b_extended;
                end else begin
                    res_o = 0;
                    rem_o = 0;
                end
                done_o = 1;
            end
            default: begin
                res_o = 0;
                rem_o = 0;
                done_o = 0;
            end
        endcase
    end

endmodule
