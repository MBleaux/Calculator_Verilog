#!/bin/bash

BASE_PATH="./../SRC/RTL/others"

echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mExecuting commands...\e[0m"
echo -e "\e[32mverilator --cc -Wall --trace --exe --build...\e[0m"

verilator --cc \
    $BASE_PATH/full_adder_nbits_clk.v \
    $BASE_PATH/full_adder.v \
    $BASE_PATH/half_adder.v \
    $BASE_PATH/or_gate.v \
    -Wall --trace --exe --build -cc testbench.cpp

echo -e "\e[32m---------------------------------------\e[0m"

./obj_dir/Vfull_adder_nbits_clk

echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mCompilation finished!\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"

    #$BASE_PATH/top_level.v \
    #$BASE_PATH/alu.v \
    #$BASE_PATH/fsm.v \
    #$BASE_PATH/dff_nbits.v \
    #$BASE_PATH/comp.v \
    #$BASE_PATH/mult_nbits.v \
    #$BASE_PATH/full_sub_nbits.v \
    #$BASE_PATH/full_adder_nbits.v \