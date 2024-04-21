`timescale 1ns/1ps
module full_adder_tb ();
    logic a_s, b_s, cin_s;
    logic s_s, cout_s;
    full_adder dut(.a_i(a_s), .b_i(b_s), .cin_i(cin_s), .s_o(s_s), .cout_o(cout_s));
    
    initial begin
        a_s = 0;
        b_s = 0;
        cin_s = 0;
        #1;
        a_s = 1;
        b_s = 0;
        cin_s = 0;
        #1;
        a_s = 0;
        b_s = 1;
        cin_s = 0;
        #1;
        a_s = 1;
        b_s = 1;
        cin_s = 0;
        #1;
        a_s = 0;
        b_s = 0;
        cin_s = 1;
        #1;
        a_s = 1;
        b_s = 0;
        cin_s = 1;
        #1;
        a_s = 0;
        b_s = 1;
        cin_s = 1;
        #1;
        a_s = 1;
        b_s = 1;
        cin_s = 1;
        #1;
        $finish;
    end
endmodule