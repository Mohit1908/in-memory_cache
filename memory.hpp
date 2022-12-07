
#include "iostream"
#include "vector"
#include <cstdint>

namespace memory
{
    class Memory{
        std::vector<uint64_t> mem;
        std::vector<uint64_t> cache;

        uint mem_size;
        uint cache_line_length;
        uint cache_size;

        Memory(int M = 1<<20, int C = 1<<10);

        

    }
}