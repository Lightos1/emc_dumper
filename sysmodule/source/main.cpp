/*
 * Copyright (c) 2025 Lightos_
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <switch.h>
#include <ctime>
#include "fs.hpp"
#include "sysmodules.hpp"
#include "dump_registers.hpp"
#include "registers.hpp"
#include "emc_table.hpp"
#include "mc_table.hpp"

#define INNER_HEAP_SIZE 0x80000

/* Todo: Do this in a way that isn't bad? */
#define FLAG_FILE_EMC "sdmc:/config/dumptoggler/enable_emc.flag"
#define FLAG_FILE_PCV "sdmc:/config/dumptoggler/enable_pcv.flag"

extern "C" void __libnx_init_time(void);

extern "C" {
    u32 __nx_applet_type = AppletType_None;
    u32 __nx_fs_num_sessions = 1;

    size_t nx_inner_heap_size = INNER_HEAP_SIZE;
    char nx_inner_heap[INNER_HEAP_SIZE];

    void __libnx_initheap(void) {
        void *addr = nx_inner_heap;
        size_t size = nx_inner_heap_size;

        extern char *fake_heap_start;
        extern char *fake_heap_end;

        fake_heap_start = (char*) addr;
        fake_heap_end = (char*) addr + size;
    }

    void __appInit(void) {
        if (R_FAILED(smInitialize())) {
            fatalThrow(MAKERESULT(Module_Libnx, LibnxError_InitFail_SM));
        }

        Result rc = setsysInitialize();
        if (R_SUCCEEDED(rc)) {
            SetSysFirmwareVersion fw;
            rc = setsysGetFirmwareVersion(&fw);
            if (R_SUCCEEDED(rc))
                hosversionSet(MAKEHOSVERSION(fw.major, fw.minor, fw.micro));
            setsysExit();
        }

        rc = fsInitialize();
        if (R_FAILED(rc)) {
            fatalThrow(MAKERESULT(Module_Libnx, LibnxError_InitFail_FS));
        }

        fsdevMountSdmc();
    }

    void __appExit(void) {
        smExit();
        fsExit();
        timeExit();
    }
}

int main(int argc, char *argv[]) {
    using namespace dumper;
    fs::ensureDirectoriesExist();
    reg::RegisterDumpTask emc, mc;

    while (true) {
        FILE *emcFile = fopen(FLAG_FILE_EMC, "r");
        FILE *pcvFile = fopen(FLAG_FILE_PCV, "r");
        if (emcFile) {
            fclose(emcFile);
            dumper::reg::initializeRegisterTable(&emc, reg::emc0Base, reg::emcTable, reg::EmcTableSize, std::string(fs::ConfigPath) + "emc.txt");
            reg::initializeRegisterTable(&mc, reg::mc0Base, reg::mcTable, reg::McTableSize, std::string(fs::ConfigPath) + "mc.txt");

            reg::dumpRegisters(&emc);
            reg::dumpRegisters(&mc);
            remove(FLAG_FILE_EMC);
        }

        if (pcvFile) {
            fclose(pcvFile);
            sys::dumpSysmodule(dumper::sys::Pcv);
            remove(FLAG_FILE_PCV);
        }

        svcSleepThread(100000000ULL);
    }

    return 0;
}
