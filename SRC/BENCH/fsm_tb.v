`timescale 1ns / 1ps

module fsm_tb;

// Clock and reset signals
reg clock;
reg reset;
reg start;

// Output signals
wire a_we_o, a_rst_o, b_we_o, b_rst_o, fct_we_o, fct_rst_o, s_we_o, s_rst_o, signal_we_o, signal_rst_o;

// Instantiate the FSM module
fsm uut (
    .clock_i(clock),
    .reset_i(reset),
    .start_i(start),
    .a_we_o(a_we_o), .a_rst_o(a_rst_o),
    .b_we_o(b_we_o), .b_rst_o(b_rst_o),
    .fct_we_o(fct_we_o), .fct_rst_o(fct_rst_o),
    .s_we_o(s_we_o), .s_rst_o(s_rst_o),
    .signal_we_o(signal_we_o), .signal_rst_o(signal_rst_o)
);

// Clock generation
initial begin
    clock = 0;
    forever #5 clock = ~clock;  // Clock with a period of 10ns
end

// Test procedure
initial begin
    reset = 1;
    start = 0;
    #10;  // Wait 10ns
    
    reset = 0;  // Assert reset
    #10;  // Hold reset for 10ns
    
    reset = 1;  // Deassert reset
    #20;  // Wait for a few cycles
    
    start = 1;  // Trigger start
    #10;
    
    start = 0;  // Stop start signal
    #50;  // Run simulation for some time
    
    $finish;  // End simulation
end

// Monitoring changes
initial begin
    $monitor("Time = %0t, State Outputs: a_we_o = %b, a_rst_o = %b, b_we_o = %b, b_rst_o = %b, fct_we_o = %b, fct_rst_o = %b, s_we_o = %b, s_rst_o = %b, signal_we_o = %b, signal_rst_o = %b",
             $time, a_we_o, a_rst_o, b_we_o, b_rst_o, fct_we_o, fct_rst_o, s_we_o, s_rst_o, signal_we_o, signal_rst_o);
end

endmodule
