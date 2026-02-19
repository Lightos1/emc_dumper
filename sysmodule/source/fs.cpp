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

#include <switch.h>
#include <cstdarg>
#include <nxExt.h>
#include <iomanip>
#include <string>
#include "registers.hpp"
#include "fs.hpp"

namespace dumper::fs {

    static LockableMutex logMutex;

    void ensureDirectoriesExist() {
        FsFileSystem *sdmc = fsdevGetDeviceFileSystem("sdmc");
        if (sdmc) {
            fsFsCreateDirectory(sdmc, "/config");
            fsFsCreateDirectory(sdmc, "/config/emc_dumper");
            fsFsCreateDirectory(sdmc, "/config/dumptoggler");
        }
    }

    void log(const char *format, ...) {
        std::scoped_lock lock{logMutex};

        va_list args;
        va_start(args, format);
        FILE *file = fopen(FileLogPath, "a");

        if (file) {
            struct timespec now;
            clock_gettime(CLOCK_REALTIME, &now);
            struct tm *nowTm = localtime(&now.tv_sec);

            fprintf(file, "[%04d-%02d-%02d %02d:%02d:%02d.%03ld] ", nowTm->tm_year+1900, nowTm->tm_mon+1, nowTm->tm_mday, nowTm->tm_hour, nowTm->tm_min, nowTm->tm_sec, now.tv_nsec / 1000000UL);
            vfprintf(file, format, args);
            fprintf(file, "\n");
            fclose(file);
        }

        va_end(args);
    }

    void writeBinDump(u8 *data, size_t dataSize, std::string name) {
        FILE *file = fopen((std::string(ConfigPath) + name).c_str(), "ab");
        if (file) {
            fwrite(data, 1, dataSize, file);
            fclose(file);
        }
    }

    void writeRegisterDump(dumper::reg::RegisterDumpTask *task) {
        FILE *txtfile = fopen(task->path.c_str(), "w");
        if (txtfile) {
            for (u32 i = 0; i < task->length; i++) {
                fprintf(txtfile, "%s = 0x%08X\n", task->table[i].name.c_str(), task->table[i].value);
            }
            fclose(txtfile);
        }
    }

    std::string makeUniqueSuffix() {
        struct timespec now;
        clock_gettime(CLOCK_REALTIME, &now);
        struct tm *time = localtime(&now.tv_sec);

        std::stringstream ss; ss << std::setfill('0') << std::setw(4) << (time->tm_year + 1900) << std::setw(2) << (time->tm_mon + 1) << std::setw(2) << time->tm_mday << "_" << std::setw(2) << time->tm_hour << std::setw(2) << time->tm_min << std::setw(2) << time->tm_sec;
        return ss.str();
    }

}
