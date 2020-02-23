

#ifeq ($(VERILATOR_ROOT),)
VERILATOR ?= verilator
#else
#export VERILATOR_ROOT
#VERILATOR = $(VERILATOR_ROOT)/bin/verilator
#endif
CUR_DIR=$(shell pwd)

CPPFLAGS = -I$(VDIR) `pkg-config --cflags verilator`

AQUILA_CORE_SRC=../ip_repo/aquila/hdl/core_rtl/*.v \
								../ip_repo/aquila/hdl/aquila.v

CORE_VER_SRC=./core-ver-src/*v \
						 ./core-ver-src/*.sv

FULL_AQUILA_CORE_SRC=../ip_repo/aquila/hdl/core_rtl/*.v \
				../ip_repo/aquila/hdl/*.v
FULL_VER_SRC=./full-ver-src/*.v \
				./full-ver-src/*.sv

verilator_flag=--cc --assert --clk cfg_dev_aclk  -O3
verilator_lint_flag=--lint-only

.PHONY: full_lint
full_lint:
	$(VERILATOR) -cc $(FULL_AQUILA_CORE_SRC) $(FULL_VER_SRC) \
	--top-module aquila_soc \
	-Wno-lint -Wno-style -Wno-fatal \
	--lint-only 2>&1 | tee -a build.log

.PHONY: full_versyn
full_versyn:
	$(VERILATOR) $(verilator_flag) $(FULL_AQUILA_CORE_SRC) $(FULL_VER_SRC) \
	--top-module aquila_soc \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir full_obj_dir \
	2>&1 | tee -a build.log

.PHONY: full_verilate
full_verilate:
	$(VERILATOR) $(verilator_flag) $(FULL_AQUILA_CORE_SRC) $(FULL_VER_SRC) \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir full_obj_dir \
	--top-module aquila_soc --exe  ver-src/aquila_sim.cpp

.PHONY: core_lint
core_lint:
	$(VERILATOR) -cc $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	--top-module aquila_testharness \
	-Wno-lint -Wno-style -Wno-fatal \
	--lint-only 2>&1 | tee -a build.log

.PHONY: core_versyn
core_versyn:
	$(VERILATOR) $(verilator_flag) $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	--top-module aquila_testharness \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir core_obj_dir \
	2>&1 | tee -a build.log

.PHONY: core_verilate
core_verilate:
	$(VERILATOR) $(verilator_flag) $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir core_obj_dir \
	--top-module aquila_testharness  --trace --trace-max-array 3000 \
	--trace-max-width 2560  --exe  core-ver-src/aquila_core_tb.cpp core-ver-src/sim_mem.cpp
	make -j -C core_obj_dir -f Vaquila_testharness.mk Vaquila_testharness

.PHONY: build_riscv_tests
.ONESHELL:
build_riscv_tests:
	mkdir tmp
	cd tmp
	git clone https://github.com/riscv/riscv-tests
	cd riscv-tests
	rmdir env
	git clone https://github.com/Daichou/riscv-test-env env
	autoconf
	./configure --prefix=$(CUR_DIR)/tmp/target
	make
	make install

.PHONY: run_riscv_ui_p_tests
.ONESHELL:
run_riscv_ui_p_tests:
	cd ci
	./run_rv_test.sh riscv32ui-p.list

.PHONY: run_riscv_ui_p_tests
.ONESHELL:
run_riscv_um_p_tests:
	cd ci
	./run_rv_test.sh riscv32um-p.list

.PHONY: run_riscv_ui_tests
.ONESHELL:
run_riscv_ui_tests: run_riscv_ui_p_tests run_riscv_um_p_tests

.PHONY: clean
clean:
	rm -rf core_obj_dir
	rm -rf full_obj_dir
	rm build.log
	rm -rf tmp
