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
#include "registers.hpp"
#include "fs.hpp"

namespace dumper::reg {

    void dumpRegisters(RegisterDumpTask *task) {
        for (size_t i = 0; i < task->length; i++) {
            SecmonArgs args = {};
            args.X[0] = 0xF0000002;
            args.X[1] = task->base + task->table[i].offset;
            svcCallSecureMonitor(&args);
            task->table[i].value = args.X[1];
        }

        fs::writeRegisterDump(task);
    }

}
