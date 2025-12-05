#include <string>
#include <switch.h>
#pragma once

struct Register {
    std::string name;
    u32 offset;
    u32 value;
};

struct DumpTask {
    u32 base;
    Register *table;
    size_t length;
    std::string path;
};
