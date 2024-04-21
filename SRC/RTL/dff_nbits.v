module dff_nbits #(
    parameter width = 8
) (
    input logic[width-1:0] d_i,
    input logic clock_i, resetb_i,
    output logic[width-1:0] q_o
);
    always @(posedge clock_i or negedge resetb_i) begin
        if (!resetb_i) begin
            q_o <= '0;
        end else begin
            q_o <= d_i;
        end
    end
endmodule