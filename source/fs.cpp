#include <switch.h>
#include "register_table.hpp"

void ensureDirectoriesExist() {
    FsFileSystem *sdmc = fsdevGetDeviceFileSystem("sdmc");
    if (sdmc) {
        fsFsCreateDirectory(sdmc, "/config");
        fsFsCreateDirectory(sdmc, "/config/emc_dumper");
    }
}

void writeDump(DumpTask *task) {
    FILE *txtfile = fopen(task->path.c_str(), "w");
    if (txtfile) {
        for (u32 i = 0; i < task->length; i++) {
            fprintf(txtfile, "%s = 0x%08X\n", task->table[i].name.c_str(), task->table[i].value);
        }
        fclose(txtfile);
    }
}

