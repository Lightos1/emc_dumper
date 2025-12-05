#include <switch.h>
#include "register_table.hpp"
#include "emc_table.hpp"
#include "mc_table.hpp"
#include "fs.hpp"
#include "dump_registers.hpp"

#define INNER_HEAP_SIZE 0x80000

/* Todo: Do this in a way that isn't bad? */
#define FLAG_FILE "sdmc:/config/dumptoggler/enable.flag"

extern "C" {
    u32 __nx_applet_type = AppletType_None;
    u32 __nx_fs_num_sessions = 1;

    size_t nx_inner_heap_size = INNER_HEAP_SIZE;
    char nx_inner_heap[INNER_HEAP_SIZE];

    void __libnx_initheap(void) {
        void* addr = nx_inner_heap;
        size_t size = nx_inner_heap_size;

        extern char* fake_heap_start;
        extern char* fake_heap_end;

        fake_heap_start = (char*)addr;
        fake_heap_end = (char*)addr + size;
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
            diagAbortWithResult(MAKERESULT(Module_Libnx, LibnxError_InitFail_FS));
        }
        fsdevMountSdmc();
    }

    void __appExit(void) {
        smExit();
        fsExit();
    }
}

Register *copyRegisterTable(Register *source, size_t size) {
    Register *copy = new Register[size];
    for (size_t i = 0; i < size; i++) {
        copy[i] = source[i];
    }
    return copy;
}

void initializeStructs(DumpTask *emc, DumpTask *mc) {
    emc->base = 0x7001b000;
    emc->table = copyRegisterTable(emcTable, emcTableSize);
    emc->length = emcTableSize;
    emc->path = "sdmc:/config/emc_dumper/emc.txt";

   // emc1->base = 0x7001e000;
   // emc1->table = copyRegisterTable(emcTable, emcTableSize);
   // emc1->length = emcTableSize;
   // emc1->path = "sdmc:/config/emc_dumper/emc1.txt";

   // emc2->base = 0x7001f000;
   // emc2->table = copyRegisterTable(emcTable, emcTableSize);
   // emc2->length = emcTableSize;
   // emc2->path = "sdmc:/config/emc_dumper/emc2.txt";

    mc->base = 0x70019000;
    mc->table = copyRegisterTable(mcTable, mcTableSize);
    mc->length = mcTableSize;
    mc->path = "sdmc:/config/emc_dumper/mc.txt";
}

void dumpAllTables(DumpTask *emc, DumpTask *mc) {
    dump(emc);
    dump(mc);
}

void writeAllTables(DumpTask *emc, DumpTask *mc) {
    writeDump(emc);
    writeDump(mc);
}

int main(int argc, char *argv[]) {
    ensureDirectoriesExist();
    DumpTask emc, mc;
    initializeStructs(&emc, &mc);

    while (true) {
        FILE* f = fopen(FLAG_FILE, "r");
        if (f) {
            fclose(f);

            dumpAllTables(&emc, &mc);
            writeAllTables(&emc, &mc);

            remove(FLAG_FILE);
        }

        svcSleepThread(100000000ULL);
    }

    return 0;
}
