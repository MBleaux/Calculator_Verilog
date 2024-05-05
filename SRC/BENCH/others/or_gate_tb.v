`timescale 1ns/1ps

module or_gate_tb ();
    logic a_s, b_s;
    logic s_s;
    or_gate dut(.a_i(a_s), .b_i(b_s), .s_o(s_s));

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