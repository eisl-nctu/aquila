#include <spi.h>

#include <stdio.h>

void write_reg(unsigned int addr, unsigned int value)
{
    volatile unsigned int *loc_addr = (volatile unsigned int *)addr;
    *loc_addr = value;
}

unsigned int read_reg(unsigned int addr)
{
    return *(volatile unsigned int *)addr;
}

void spi_init()
{
    printf("init SPI\r\n");

    // reset the axi quadspi core
    write_reg(SPI_RESET_REG, 0x0a);

    for (int i = 0; i < 10; i++)
    {
        __asm__ volatile(
            "nop");
    }

    write_reg(SPI_CONTROL_REG, 0x104);

    unsigned int status = read_reg(SPI_STATUS_REG);
    printf("status: 0x%X\r\n", status);

    // clear all fifos
    write_reg(SPI_CONTROL_REG, 0x166);

    status = read_reg(SPI_STATUS_REG);
    printf("status: 0x%X\r\n", status);

    write_reg(SPI_CONTROL_REG, 0x06);

    printf("SPI initialized!\r\n");
}

unsigned char spi_txrx(unsigned char byte)
{
    // enable slave select
    write_reg(SPI_SLAVE_SELECT_REG, 0xfffffffe);

    write_reg(SPI_TRANSMIT_REG, byte);

    for (int i = 0; i < 500; i++)
    {
        __asm__ volatile(
            "nop");
    }

    // enable spi control master flag
    write_reg(SPI_CONTROL_REG, 0x106);

    while ((read_reg(SPI_STATUS_REG) & 0x1) == 0x1);

    unsigned char result = read_reg(SPI_RECEIVE_REG);

    while((read_reg(SPI_STATUS_REG) & 0x1) != 0x1); //rx fifo not empty??

    // disable slave select
    write_reg(SPI_SLAVE_SELECT_REG, 0xffffffff);

    // disable spi control master flag
    write_reg(SPI_CONTROL_REG, 0x06);

    return result;
}

int spi_write_bytes(unsigned char *bytes, unsigned int len, unsigned char *ret)
{
    unsigned int status;
    int i;

    if (len > 256) // FIFO maxdepth 256
        return -1;

    // enable slave select
    write_reg(SPI_SLAVE_SELECT_REG, 0xfffffffe);

    for (i = 0; i < len; i++)
    {
        write_reg(SPI_TRANSMIT_REG, bytes[i] & 0xff);
    }

    for (i = 0; i < 500; i++) //dram:300 tcm:500
    {
        __asm__ volatile(
            "nop");
    }

    // enable spi control master flag
    write_reg(SPI_CONTROL_REG, 0x106);

    do
    {
        status = read_reg(SPI_STATUS_REG);
    } while ((status & 0x1) == 0x1);

    for (i = 0; i < len; i++)
    {
        status = read_reg(SPI_STATUS_REG);
        if ((status & 0x1) != 0x1) // recieve fifo not empty
        {
            ret[i] = read_reg(SPI_RECEIVE_REG);
        }
    }

    while((read_reg(SPI_STATUS_REG) & 0x1) != 0x1);

    // disable slave select
    write_reg(SPI_SLAVE_SELECT_REG, 0xffffffff);

    // disable spi control master flag
    write_reg(SPI_CONTROL_REG, 0x06);

    return 0;
}