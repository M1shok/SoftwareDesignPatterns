#ifndef FILEDATASTREAM_H
#define FILEDATASTREAM_H

#include "datastream.h"

class FileDataStream : public DataStream
{
public:
    FileDataStream(const std::string & filename);
    ~FileDataStream() override = default;

    FileDataStream(const FileDataStream & filename) = default;
    FileDataStream(FileDataStream && filename) = default;

    FileDataStream & operator = (const FileDataStream & filename) = default;
    FileDataStream & operator = (FileDataStream && filename) = default;

public:
    std::string read(uint32_t bytes) override;
    uint32_t write(const std::string &str) override;
};

#endif // FILEDATASTREAM_H
