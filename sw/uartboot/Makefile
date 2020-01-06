# ======================================================================
#  This Makefile builds the boot code ROM memory file for Xilinx Vivado
#  EDA tools.
#
#  Chun-Jen Tsai, Nov/04/2019
# ======================================================================
#

CROSS = riscv32-unknown-elf
CCPATH = $(RISCV)/bin

CC = $(CCPATH)/$(CROSS)-gcc
AS = $(CCPATH)/$(CROSS)-as
LD = $(CCPATH)/$(CROSS)-ld
OC = $(CCPATH)/$(CROSS)-objcopy
OD = $(CCPATH)/$(CROSS)-objdump

CCFLAGS = -Wall -I. -Os -fomit-frame-pointer -march=rv32im -mstrict-align -fno-builtin
ASFLAGS = -march=rv32im
LDFLAGS = -T$(PROJ).ld -Map=$(PROJ).map # -Ttext=0

# The code size and the data size of the boot loader. These variables
# must be modified according to the linker script.
MAX_CODE_SIZE = 8192
MAX_DATA_SIZE = 8192

OCFLAGS = -O binary
ODFLAGS = -d

PROJ = bootrom
OBJS = boot.o uartboot.o io_uart.o
ASMS = boot.s uartboot.s io_uart.s

all:
	make $(PROJ).mem

clean:
	rm -rf *.s *.o *.bin *.objdump *.map *.mem *.content

%.o: %.s
	$(AS) $(ASFLAGS) -c $< -o $@

%.s: %.c $(PROJ).ld
	$(CC) $(CCFLAGS) -S $< -o $@

_out_.o: $(ASMS) $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $@

$(PROJ).bin: _out_.o
	$(OC) $(OCFLAGS) $< $@
	$(OD) $(ODFLAGS) $< > $(PROJ).objdump
	$(OD) -s $< > $(PROJ).content
	rm $<

$(PROJ).mem: $(PROJ).bin
	./create_mem.sh $@ $(MAX_CODE_SIZE) $(MAX_DATA_SIZE)
