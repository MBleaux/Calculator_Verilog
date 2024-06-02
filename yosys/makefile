YOSYS_DIR = /home/mario/artifact_µarchiFI_fmcad23/build/yosys
YOSYS_CMD = $(YOSYS_DIR)/yosys
CURRENT_DIR = /home/mario/verilog/Calculator_Verilog/yosys

SCRIPT := ${CURRENT_DIR}/script
SRC    := ${CURRENT_DIR}/src
OUT    := ${CURRENT_DIR}/out

PIPE_TIME := | ts '[%Y-%m-%d %H:%M:%.S]'
YOSYS_SMT := yices
YOSYS_OPTIONS =
PONO_SMT  := btor

BMC_DEPTH := 20
BASE_NAME := wrapper_gen_fault
YOSYS_OPTIONS := --dump-vcd $(OUT)/counter_example.vcd

check_yosys_build:
ifeq (,$(wildcard $(YOSYS_CMD)))
	$(error "yosys command does not exist! Please run 'make build' in the root directory first")
endif

mkdir_out:
	mkdir -p "out"

parse: check_yosys_build mkdir_out
	$(YOSYS_CMD) ${SCRIPT}/parse.ys

build: check_yosys_build
	$(YOSYS_CMD) ${SCRIPT}/build.ys

fault: check_yosys_build
	$(YOSYS_CMD) ${SCRIPT}/fault.ys

yosysmc: check_yices2_deps
	time yosys-smtbmc -t $(BMC_DEPTH) -s $(YOSYS_SMT) --presat $(YOSYS_OPTIONS) $(OUT)/$(BASE_NAME).smt2 $(PIPE_TIME)

check_yices2_deps:
	@if ! command -v yices-smt2 >/dev/null 2>&1; then echo "Please install yices2 (https://github.com/SRI-CSL/yices2)"; exit 1; fi

all: parse build yosysmc