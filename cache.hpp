#ifndef CACHE_HPP
#define CACHE_HPP

#include "iostream"
#include "vector"
#include <cstdint>
#include "utils.hpp"

namespace cache
{
    class Cache{
    private:
        // Actual cache
        std::vector<std::vector<uint64_t>> cache;

        // words(64-bit ints per cache line)
        uint cache_line_length;
        // number of cache lines that can be stored in cache at once
        uint num_of_lines;

         // To store relevant tags needed for storing memory address, currently under use and helping in eviction
        std::vector<uint64_t> tags;   

    public:
        Cache(uint64_t ,uint64_t);

        bool allot(uint64_t, own_t, Perm);

        void evict(int);
    };
}

#endif