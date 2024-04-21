#!/bin/bash

export PROJECTNAME="."

# Creation of libraries
echo -e "\e[32mThe project location is : $PROJECTNAME\e[0m"
echo -e "\e[32mRemoving libs\e[0m"

mkdir -p $PROJECTNAME/LIB
vdel -lib $PROJECTNAME/LIB -all

echo -e "\e[32mCreating library\e[0m"
vlib $PROJECTNAME/LIB
vmap LIB $PROJECTNAME/LIB

# Compilation of RTL files
echo -e "\e[33mCompiling RTL files\e[0m"

echo -e "\e[33m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/RTL/or_gate.v
echo -e "\e[33m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/RTL/half_adder.v
echo -e "\e[33m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_adder.v
echo -e "\e[33m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_adder_nbits.v
echo -e "\e[33m-------------------------\e[0m"

echo -e "\e[33mEnd of compilation of RTL files\e[0m"

# Compilation of testbench files
echo -e "\e[35mCompiling testbench files\e[0m"

echo -e "\e[35m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/or_gate_tb.v
echo -e "\e[35m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/half_adder_tb.v
echo -e "\e[35m-------------------------\e[0m"
vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_adder_tb.v
echo -e "\e[35m-------------------------\e[0m"

echo -e "\e[35mEnd of compilation testbench files\e[0m"

# Lauching the simulator
echo -e "\e[32mCompilation finished\e[0m"

vsim -lib LIB -c -do "run -all" or_gate_tb
