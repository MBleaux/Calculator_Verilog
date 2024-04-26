#!/bin/bash

BASE_PATH="./../SRC/RTL"

echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mExecuting commands...\e[0m"
echo -e "\e[32mverilator --cc -Wall --trace --exe --build...\e[0m"

verilator --cc \
    $BASE_PATH/top_level_alternative.v \
    $BASE_PATH/alu_alternative.v \
    $BASE_PATH/fsm.v \
    $BASE_PATH/dff_nbits.v \
    -Wall --trace --exe --build -cc testbench_top_level.cpp

echo -e "\e[32m---------------------------------------\e[0m"

./obj_dir/Vtop_level_alternative

echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mCompilation finished!\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mLauching gtkwave...\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"

gtkwave waveform.vcd