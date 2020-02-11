

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

AQUILA_CORE_SRC=../ip_repo/aquila/hdl/core_rtl/*.v \
				../ip_repo/aquila/hdl/*.v
VER_SRC=./ver-src/*.v \
				./ver-src/*.sv

verilator_flag=--cc --assert --clk cfg_dev_aclk --debug --exe -O3
verilator_lint_flag=--lint-only

.PHONY: lint
lint:
	$(VERILATOR) -cc $(AQUILA_CORE_SRC) $(VER_SRC) \
	--top-module aquila_soc \
	-Wno-lint -Wno-style -Wno-fatal \
	--lint-only > build.log 2>&1

.PHONY: clean
clean:
	rm -rf obj_dir build.log aquila_sim_top.v
