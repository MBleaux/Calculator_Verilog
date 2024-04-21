`timescale 1ns / 1ps

 // Empty declarative part
module dff_nbits_tb();

// Internal net declaration
parameter width = 8;
reg [width-1:0] d_s;
reg clock_s, resetb_s;
wire [width-1:0] q_s;

 // DUT : component instanciation
dff_nbits #(.width(width)) dut (.d_i(d_s), .clock_i(clock_s), .resetb_i(resetb_s), .q_o(q_s));

// Clock generation
initial begin
    clock_s = 0;
    forever begin
        #5 clock_s = ~clock_s;
    end
end

// Stimuli
initial begin
    resetb_s = 0;
    d_s = $random;
    #50;
    resetb_s = 1;
    #25;
    d_s = $random;
    #50;
    d_s = $random;
    #50;
    resetb_s = 0;
    #25;
    d_s = $random;
end
endmodule