`timescale 1ns/1ps
module half_adder_tb ();
    logic a_s, b_s;
    logic s_s, c_s;
    half_adder dut(.a_i(a_s), .b_i(b_s), .s_o(s_s), .c_o(c_s));

    initial begin
        a_s = 0;
        b_s = 0;
        #1;
        a_s = 1;
        b_s = 0;
        #1;
        a_s = 0;
        b_s = 1;
        #1;
        a_s = 1;
        b_s = 1;
        #1;
        $finish;
    end
endmodule