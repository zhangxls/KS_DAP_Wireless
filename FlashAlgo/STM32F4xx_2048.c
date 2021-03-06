/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x03004601, 0x28200E00, 0x0940D302, 0xE0051D00, 0xD3022810, 0x1CC00900, 0x0880E000, 0xD50102C9,
    0x43082110, 0x48464770, 0x60414944, 0x60414945, 0x60012100, 0x22F068C1, 0x60C14311, 0x06806940,
    0x4842D406, 0x60014940, 0x60412106, 0x60814940, 0x47702000, 0x6901483A, 0x43110542, 0x20006101,
    0xB5304770, 0x69014836, 0x43212404, 0x69016101, 0x43290365, 0x69016101, 0x431103A2, 0x49356101,
    0xE0004A32, 0x68C36011, 0xD4FB03DB, 0x43A16901, 0x69016101, 0x610143A9, 0xBD302000, 0xF7FFB530,
    0x4927FFAF, 0x23F068CA, 0x60CA431A, 0x610C2402, 0x06C0690A, 0x43020E00, 0x6908610A, 0x431003E2,
    0x48246108, 0xE0004A21, 0x68CD6010, 0xD4FB03ED, 0x43A06908, 0x68C86108, 0x0F000600, 0x68C8D003,
    0x60C84318, 0xBD302001, 0x4D15B570, 0x08891CC9, 0x008968EB, 0x433326F0, 0x230060EB, 0x4B16612B,
    0x692CE017, 0x612C431C, 0x60046814, 0x03E468EC, 0x692CD4FC, 0x00640864, 0x68EC612C, 0x0F240624,
    0x68E8D004, 0x60E84330, 0xBD702001, 0x1D121D00, 0x29001F09, 0x2000D1E5, 0x0000BD70, 0x45670123,
    0x40023C00, 0xCDEF89AB, 0x00005555, 0x40003000, 0x00000FFF, 0x0000AAAA, 0x00000201, 0x00000000
};

const program_target_t flash_algo = {
    0x20000047,  // Init
    0x20000075,  // UnInit
    0x20000083,  // EraseChip
    0x200000BD,  // EraseSector
    0x20000109,  // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : address to access global/static data
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000C00,
        0x20001000
    },

    0x20000400,  // mem buffer location
    0x20000000,  // location to write prog_blob in target RAM
    sizeof(flash_code),  // prog_blob size
    flash_code,  // address of prog_blob
    0x00000400,  // ram_to_flash_bytes_to_be_written
};
