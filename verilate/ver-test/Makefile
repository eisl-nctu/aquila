# ======================================================================
#  This Makefile builds a test application *.ebf file for Aquila.
#
#  Chun-Jen Tsai, Dec/09/2019
# ======================================================================

CROSS = riscv32-unknown-elf
CCPATH = $(RISCV)/bin

CC = $(CCPATH)/$(CROSS)-gcc
AS = $(CCPATH)/$(CROSS)-as
LD = $(CCPATH)/$(CROSS)-ld
OC = $(CCPATH)/$(CROSS)-objcopy
OD = $(CCPATH)/$(CROSS)-objdump

LIBC = ../../sw/elibc

#CCFLAGS = -Wall -I$(LIBC) -fomit-frame-pointer -fno-builtin -march=rv32im -mstrict-align -mabi=ilp32
CCFLAGS = -Wall -I$(LIBC) -fno-builtin -march=rv32im -mstrict-align -mabi=ilp32
ASFLAGS = -march=rv32im
LDFLAGS = -T$(PROJ).ld -Map=$(PROJ).map # -Ttext=0
LD_SOFT_FP = -L$(RISCV)/lib/gcc/riscv32-unknown-elf/8.2.0 -lgcc

OCFLAGS = -O binary
ODFLAGS = -d

PROJ = test
OBJS = boot.o test.o $(LIBC)/stdio.o $(LIBC)/stdlib.o $(LIBC)/heap_4.o $(LIBC)/string.o $(LIBC)/time.o $(LIBC)/uart.o

all:
	make $(PROJ).ebf

clean:
	rm -rf $(LIBC)/*.o *.o *.bin *.objdump *.map *.ebf *.content

%.o: %.s $(PROJ).ld
	$(AS) $(ASFLAGS) -c $< -o $@

%.o: %.c $(PROJ).ld
	$(CC) $(CCFLAGS) -c $< -o $@

_$(PROJ).o: $(ASMS) $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) $(LD_SOFT_FP) -o $@

$(PROJ).bin: _$(PROJ).o
	$(OC) $(OCFLAGS) $< $@
	cp _$(PROJ).o ver_test
	$(OD) $(ODFLAGS) $< > $(PROJ).objdump
	$(OD) -s $< > $(PROJ).content

$(PROJ).ebf: $(PROJ).bin
	./create_ebf.sh $<
