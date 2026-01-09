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

namespace dumper::reg {

    Register *copyRegisterTable(Register *source, size_t size) {
        Register *copy = new Register[size];
        for (size_t i = 0; i < size; i++) {
            copy[i] = source[i];
        }

        return copy;
    }

    void initializeRegisterTable(RegisterDumpTask *task, u32 base, Register *table, size_t size, std::string filename) {
        task->base = base;
        task->table = copyRegisterTable(table, size);
        task->length = size;
        task->path = filename;
    }

}
