module alu_alternative #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    input logic [1:0] fct_i,
    output logic [2*width-1:0] s_o,
    output logic signal_o
);

    // Combinational logic to select the output based on fct_i
    always_comb begin
        case (fct_i)
            2'b00: begin
                s_o = { {width{1'b0}}, a_i } + { {width{1'b0}}, b_i };
                signal_o = 0;
            end
            2'b01: begin
                s_o = { {width{1'b0}}, a_i } - { {width{1'b0}}, b_i };
                signal_o = 0;
            end
            2'b10: begin
                s_o = a_i * b_i;
                signal_o = 0;
            end
            2'b11: begin
                s_o = 0;
                signal_o = (a_i == b_i);
            end
            default: begin
                s_o = 0;
                signal_o = 0;
            end
        endcase
    end

endmodule
