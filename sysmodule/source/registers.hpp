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

#pragma once
#include <switch.h>
#include <string>
#include <iterator>

namespace dumper::reg {

    struct Register {
        std::string name;
        u32 offset;
        u32 value;
    };

    struct RegisterDumpTask {
        u32 base;
        Register *table;
        size_t length;
        std::string path;
    };

    void initializeRegisterTable(RegisterDumpTask *task, u32 base, Register *table, size_t size, std::string filename);

}
