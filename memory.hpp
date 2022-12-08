#ifndef MEMORY_HPP
#define MEMORY_HPP


#include "iostream"
#include "vector"
#include <cstdint>
#include "cache.hpp"

namespace memory
{
    class Memory{
    private:
        // actual memory
        std::vector<uint64_t> mem;

        // total number of words(64-bit) in memory
        uint mem_size;

        cache::Cache cache;

    public:
        Memory(uint64_t ,uint64_t ,uint64_t);

        std::pair<bool,uint64_t> read(uint64_t);

        bool write(uint64_t, uint64_t);
    };
}


#endif //MEMORY_HPP