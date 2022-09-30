# ======================================================================
#  This Makefile builds an application *.elf file for Aquila.
#
#  Chun-Jen Tsai, Jan/12/2020
# ======================================================================

CROSS = riscv32-unknown-elf
CCPATH = $(RISCV)/bin

CC = $(CCPATH)/$(CROSS)-gcc
LD = $(CCPATH)/$(CROSS)-ld
AR = $(CCPATH)/$(CROSS)-ar
OC = $(CCPATH)/$(CROSS)-objcopy
OD = $(CCPATH)/$(CROSS)-objdump
SP = $(CCPATH)/$(CROSS)-strip

GCCVERSION = $(shell $(CC) --version | grep gcc | sed 's/^.* //g')

LIBC = ../elibc
LIBC_OBJS = $(LIBC)/crt0.o $(LIBC)/stdio.o $(LIBC)/stdlib.o $(LIBC)/string.o $(LIBC)/time.o $(LIBC)/uart.o

CCFLAGS = -Wall -O2 -I$(LIBC) -fomit-frame-pointer -fno-builtin -march=rv32ima -mstrict-align -mabi=ilp32
LDFLAGS = -L. -T$*.ld -Map=$*.map
LD_SOFT_FP = -L$(RISCV)/lib/gcc/riscv32-unknown-elf/$(GCCVERSION) -lgcc

OCFLAGS = -O binary
ODFLAGS = -d

PROJ = dhry
OBJS = dhry_1.o dhry_2.o

all:
	make $(PROJ).elf

clean:
	rm -f *.elf *.objdump *.map *.o *.a

%.o: %.c $(PROJ).ld
	$(CC) $(CCFLAGS) -c $< -o $@

libelibc.a : $(LIBC_OBJS)
	$(AR) r libelibc.a $(LIBC_OBJS)
	rm $^

%.elf: $(OBJS) libelibc.a
	$(LD) $(LDFLAGS) $(OBJS) -lelibc $(LD_SOFT_FP) -o $@
	$(OD) $(ODFLAGS) $@ > $(PROJ).objdump
	$(SP) $(PROJ).elf
	rm $^

%.bin: $(PROJ).elf
	$(OC) $(OCFLAGS) $< $@
	rm $<

%.ebf: $(PROJ).bin
	$(eval fsize = $(shell stat -c %s $(PROJ).bin))
	$(eval fsize = $(shell printf "%08x\n" $(fsize)))
	$(eval start= $(shell sed -e 's/^[ \t]*//' $(PROJ).ld | grep ^code_ram | cut -d= -f2 | cut -d, -f1 | sed -e 's/^[ \t]*//' | cut -c 3-))
	echo $(start) | xxd -r -p | xxd -e -g4 | xxd -r > _header_.bin
	echo $(fsize) | xxd -r -p | xxd -e -g4 | xxd -r >> _header_.bin
	cat _header_.bin $(PROJ).bin > $(PROJ).ebf
	rm -f _header_.bin
	rm $<

