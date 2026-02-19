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

        DebugEventInfo debugEvent{};

        /* Get all running processes. */
        Result resultGetProcessList = svcGetProcessList(&processCount, processIDList, std::size(processIDList));
        if (R_FAILED(resultGetProcessList)) {
            return INVALID_HANDLE;
        }

        /* Try to find target id. */
        for (int i = 0; i < processCount; ++i) {
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
            if (R_SUCCEEDED(resultDebugEvent)) {
                if (debugEvent.info.create_process.program_id == id) {
                    return handle;
                }
            }
        }

        /* Failed to get handle. */
        return INVALID_HANDLE;
    }

    void dumpSysmodule(u64 id) {
        Handle handle = getHandle(id);
        if (handle == INVALID_HANDLE) {
            fs::log("[Invalid handle!");
            return;
        }

        MemoryInfo memoryInfo = {};
        u64 address = 0;
        u32 pageInfo = 0;
        constexpr u32 PageSize = 0x1000;
        u8 buffer[PageSize];

        /* Loop until failure. */
        while (true) {
            /* Find heap. */
            while (true) {
                Result resultProcessMemory = svcQueryDebugProcessMemory(&memoryInfo, &pageInfo, handle, address);
                address = memoryInfo.addr + memoryInfo.size;

                if (R_FAILED(resultProcessMemory) || !address) {
                    svcCloseHandle(handle);
                    handle = INVALID_HANDLE;
                    goto cleanup;
                }

                if (memoryInfo.size && (memoryInfo.perm & 3) == 3 && static_cast<char>(memoryInfo.type) == 0x04) {
                    break;
                }
            }

            for (u64 base = 0; base < memoryInfo.size; base += PageSize) {
                u32 memorySize = std::min(memoryInfo.size, static_cast<u64>(PageSize));
                if (R_FAILED(svcReadDebugProcessMemory(buffer, handle, base + memoryInfo.addr, memorySize))) {
                    break;
                }

                fs::writeBinDump(buffer, sizeof(buffer), "pcv_heap.bin");
            }
        }

        cleanup:
        svcCloseHandle(handle);
        handle = INVALID_HANDLE;
        return;
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
