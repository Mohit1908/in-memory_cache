#include "cache.hpp"

namespace cache
{
    Cache::Cache(uint64_t line_len,uint64_t num_line):cache_line_length(line_len), num_of_lines(num_line)
    {
        
    }
    bool Cache::allot(uint64_t address, own_t owner, Perm perm)
    {
        return false;
    }
    void Cache::evict(int count = 1)
    {

    }
}