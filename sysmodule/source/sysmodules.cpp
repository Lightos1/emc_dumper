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
#include <iterator>
#include <string>
#include "fs.hpp"

namespace dumper::sys {

    Handle getHandle(u64 id) {
        u64 processIDList[80]{};
        s32 processCount    = 0;
        Handle handle       = INVALID_HANDLE;
        struct {
            u64 eventType;
            u64 threadID;
            u64 moduleID;
            u64 f_0x18;
            u64 f_0x20;
            u64 f_0x28;
            u64 f_0x30;
            u64 f_0x38;
        } debugEvent{};

        /* Get all running processes. */
        Result resultGetProcessList = svcGetProcessList(&processCount, processIDList, std::size(processIDList));
        if (R_FAILED(resultGetProcessList)) {
            return INVALID_HANDLE;
        }

        /* Try to find target id. */
        for (int i = 0; i < processCount; ++i) {
            /* Ensure the handle is initially invalid. */
            if (handle != INVALID_HANDLE) {
                svcCloseHandle(handle);
                handle = INVALID_HANDLE;
            }

            /* Try to debug process, if it fails, try next process. */
            Result resultSvcDebugProcess = svcDebugActiveProcess(&handle, processIDList[i]);
            if (R_FAILED(resultSvcDebugProcess)) {
                continue;
            }

            /* Try to get a debug event. */
            Result resultDebugEvent = svcGetDebugEvent(&debugEvent, handle);

            if (R_SUCCEEDED(resultDebugEvent) && debugEvent.moduleID == id) {
                return handle;
            }
        }

        /* Failed to get handle. */
        return INVALID_HANDLE;
    }

    /* Todo, figure out what I broke, this used to work. =) */
    void readMemory(Handle handle, MemoryInfo &memoryInfo) {
        fs::log("Read memory");
        fs::log("MemoryInfo size: %d", memoryInfo.size);
        constexpr size_t PageSize = 0x1000;
        std::string filename = std::string(fs::ConfigPath) + "pcv_" + fs::makeUniqueSuffix() + ".bin";
        fs::log(filename.c_str());

        u8 buffer[PageSize];
        for (u64 base = 0; base < memoryInfo.size; base += PageSize) {
            const size_t pageSize = std::min(memoryInfo.size - base, static_cast<u64>(PageSize));
            Result resultReadMemory = svcReadDebugProcessMemory(buffer, handle, memoryInfo.addr + base, pageSize);

            if (R_FAILED(resultReadMemory)) {
                break;
            }

            fs::writeBinDump(buffer, sizeof(buffer), filename);
        }
    }

    void dumpSysmodule(u64 id) {
        fs::log("Getting handle");
        Handle handle = getHandle(id);
        if (handle == INVALID_HANDLE) {
            fs::log("Invalid handle");
            return;
        }

        MemoryInfo memoryInfo = {};
        u64 address = 0;
        u32 pageInfo = 0;

        while (true) {
            Result res = svcQueryDebugProcessMemory(&memoryInfo, &pageInfo, handle, address);
            fs::log("Query memory");

            if (R_FAILED(res) || !memoryInfo.size) {
                break;
            }

            readMemory(handle, memoryInfo);
            address = memoryInfo.addr + memoryInfo.size;
            svcCloseHandle(handle);
        }

        svcCloseHandle(handle);
    }

}

// void scanForValidMemory(Handle &handle, MemoryInfo &memoryInfo, u64 address, u32 type) {
//     u32 pageInfo = 0;
//     while (true) {
//         Result resultProcessMemory = svcQueryDebugProcessMemory(&memoryInfo, &pageInfo, handle, address);
//         address = memoryInfo.addr + memoryInfo.size;
//
//         if (R_FAILED(resultProcessMemory) || !address) {
//             // fclose(outFile);
//             svcCloseHandle(handle);
//             return;
//         }
//
//         if (memoryInfo.size && (memoryInfo.perm & 1)) {
//             break;
//         }
//     }
// }
