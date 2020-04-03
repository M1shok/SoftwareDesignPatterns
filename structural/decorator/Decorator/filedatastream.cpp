#include "filedatastream.h"
#include <iostream>

FileDataStream::FileDataStream(const std::string &filename)
{
    // open file
}

std::string FileDataStream::read(uint32_t bytes)
{
    std::string readString(bytes, 'a');
    return readString;
}

uint32_t FileDataStream::write(const std::string &str)
{
    uint32_t bytesWritten = str.size();
    std::cout << str << std::endl;
    // write to file
    return bytesWritten;
}
