#include <switch.h>
#include "register_table.hpp"

void dump(DumpTask *task) {
    for (size_t i = 0; i < task->length; i++) {
        SecmonArgs args = {};
        args.X[0] = 0xF0000002;
        args.X[1] = task->base + task->table[i].offset;
        svcCallSecureMonitor(&args);
        task->table[i].value = args.X[1];
    }
}
