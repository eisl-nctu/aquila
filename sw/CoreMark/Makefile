# ======================================================================
#  This Makefile builds the CoreMark ELF file for Aquila.
#
#  Chun-Jen Tsai, Jan/12/2020
# ======================================================================

CROSS = riscv32-unknown-elf
CCPATH = $(RISCV)/bin

CC = $(CCPATH)/$(CROSS)-gcc
LD = $(CCPATH)/$(CROSS)-ld
AR = $(CCPATH)/$(CROSS)-ar
OD = $(CCPATH)/$(CROSS)-objdump
SP = $(CCPATH)/$(CROSS)-strip

GCCVERSION = $(shell $(CC) --version | grep gcc | sed 's/^.* //g')

LIBC = ../elibc
LIBC_OBJS = $(LIBC)/crt0.o $(LIBC)/stdio.o $(LIBC)/stdlib.o $(LIBC)/string.o $(LIBC)/time.o $(LIBC)/uart.o

CCFLAGS = -O2
LCFLAGS = -Wall -march=rv32ima -mstrict-align -mabi=ilp32 -fomit-frame-pointer -fno-builtin -I$(LIBC) -I.
XCFLAGS = -DITERATIONS=0 -DUSE_CLOCK=1
LDFLAGS = -L. -T$*.ld -Map=$*.map
LD_SOFT_FP = -L$(RISCV)/lib/gcc/riscv32-unknown-elf/$(GCCVERSION) -L$(RISCV)/riscv32-unknown-elf/lib -lgcc -lm

OCFLAGS = -O binary
ODFLAGS = -d

HEADERS = coremark.h core_portme.h

FLAGS_STR = "$(CCFLAGS) $(XCFLAGS)"
CFLAGS = $(CCFLAGS) $(LCFLAGS) $(XCFLAGS) -DFLAGS_STR=\"$(FLAGS_STR)\"

PROJ = coremark
OBJS = core_main.o core_portme.o core_util.o core_list_join.o core_matrix.o core_state.o

all:
	make $(PROJ).elf

clean:
	rm -f *.elf *.objdump *.map *.o *.a

%.o: %.c $(PROJ).ld
	$(CC) $(CFLAGS) -c $< -o $@

libelibc.a : $(LIBC_OBJS)
	$(AR) r libelibc.a $(LIBC_OBJS)
	rm $^

%.elf: $(OBJS) libelibc.a
	$(LD) $(LDFLAGS) $(OBJS) -lelibc $(LD_SOFT_FP) -o $@
	$(OD) $(ODFLAGS) $@ > $(PROJ).objdump
	$(SP) $(PROJ).elf
	rm $^

