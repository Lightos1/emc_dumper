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

/*
 * --------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <p-sam@d3vs.net>, <natinusala@gmail.com>, <m4x@m4xw.net>
 * wrote this file. As long as you retain this notice you can do whatever you
 * want with this stuff. If you meet any of us some day, and you think this
 * stuff is worth it, you can buy us a beer in return.  - The sys-clk authors
 * --------------------------------------------------------------------------
 */

#pragma once
#include <switch.h>
#include <string>
#include "registers.hpp"

namespace dumper::fs {

    constexpr char ConfigPath[] = "/config/emc_dumper/";
    constexpr char FileLogPath[] = "/config/emc_dumper/log.txt";

    void ensureDirectoriesExist();
    void log(const char* format, ...);
    void writeBinDump(u8 *data, size_t dataSize, std::string name);
    void writeRegisterDump(reg::RegisterDumpTask *task);
    std::string makeUniqueSuffix();

}
