#pragma once

#include <stdint.h>

#define SD_CMD_STOP_TRANSMISSION 12
#define SD_CMD_READ_BLOCK_MULTIPLE 18
#define SD_CMD_WRITE_BLOCK_MULTIPLE 25
#define SD_DATA_TOKEN 0xfe
#define SD_DATA_TOKEN_CMD25 0xfc
#define SD_STOP_CMD25 0xfd
#define SD_DATA_ACCEPT 0x05
#define SD_DATA_CRC_ERROR 0x0a
#define SD_DATA_WRITE_ERROR 0x0c
#define SD_COPY_ERROR_CMD18_CRC -4

// errors
#define SD_INIT_ERROR_CMD0 -1
#define SD_INIT_ERROR_CMD8 -2
#define SD_INIT_ERROR_ACMD41 -3

int init_sd();

int sd_copy(void *dst, uint32_t src_lba, uint32_t size);

int sd_write(void *dst, uint32_t src_lba, uint32_t size);
