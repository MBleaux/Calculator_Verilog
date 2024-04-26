#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vfull_adder_nbits_clk.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfull_adder_nbits_clk* dut = new Vfull_adder_nbits_clk;

    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("waveform.vcd");

    const int test_cases = 4;
    vluint8_t a[test_cases] = {0x55, 0xAA, 0x00, 0xFF};
    vluint8_t b[test_cases] = {0xAA, 0x55, 0xFF, 0x01};

    int time = 0; // Initialize time counter

    for (int i = 0; i < test_cases; i++) {
        // Setup inputs
        dut->a_i = a[i];
        dut->b_i = b[i];

        // Evaluate with clock low
        dut->clk = 0;
        dut->eval();
        m_trace->dump(time++);
        
        // Evaluate with clock high
        dut->clk = 1;
        dut->eval();
        m_trace->dump(time++);
        
        // Print outputs
        std::cout << "Test " << i + 1 << ": "
                  << "A = " << (unsigned)a[i]
                  << ", B = " << (unsigned)b[i]
                  << " -> Sum = " << (unsigned)dut->s_o
                  << std::endl;

        // Reset the clock to low for the next cycle
        dut->clk = 0;
        dut->eval();
        m_trace->dump(time++);
    }

    m_trace->close();
    delete dut;
    delete m_trace;
    return 0;
}
