#pragma once

#define SPI_BASE 0xC2000000

#define SPI_RESET_REG SPI_BASE + 0x40
#define SPI_CONTROL_REG SPI_BASE + 0x60
#define SPI_STATUS_REG SPI_BASE + 0x64
#define SPI_TRANSMIT_REG SPI_BASE + 0x68
#define SPI_RECEIVE_REG SPI_BASE + 0x6C
#define SPI_SLAVE_SELECT_REG SPI_BASE + 0x70
#define SPI_TRANSMIT_OCCUPANCY SPI_BASE + 0x74
#define SPI_RECEIVE_OCCUPANCY SPI_BASE + 0x78
#define SPI_INTERRUPT_GLOBAL_ENABLE_REG SPI_BASE + 0x1c
#define SPI_INTERRUPT_STATUS_REG SPI_BASE + 0x20
#define SPI_INTERRUPT_ENABLE_REG SPI_BASE + 0x28


void spi_init();

unsigned char spi_txrx(unsigned char byte);

// return -1 if something went wrong
int spi_write_bytes(unsigned char *bytes, unsigned int len, unsigned char *ret);