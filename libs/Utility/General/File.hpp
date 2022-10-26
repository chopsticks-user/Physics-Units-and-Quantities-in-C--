#ifndef UTILITY_GENERAL_FILE_HPP
#define UTILITY_GENERAL_FILE_HPP

#include <fstream>

namespace utility
{
    namespace file
    {
        std::fstream open(const char *file_name)
        {
            std::fstream fs(file_name, fs.in | fs.out | fs.trunc | fs.binary);
            if (!fs.is_open())
                throw std::runtime_error("Cannot open file.");
            return fs;
        }
    }
}

#endif /* UTILITY_GENERAL_FILE_HPP */