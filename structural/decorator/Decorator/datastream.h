#ifndef DATASTREAM_H
#define DATASTREAM_H

#include <string>
#include <inttypes.h>

class DataStream
{
public:
    DataStream() = default;
    virtual ~DataStream() = default;

    DataStream(const DataStream & ds) = default;
    DataStream(DataStream && ds) = default;

    DataStream & operator = (const DataStream & ds) = default;
    DataStream & operator = (DataStream && ds) = default;

public:
    virtual uint32_t write(const std::string & str) = 0;
    virtual std::string read(uint32_t bytes) = 0;
};

#endif // DATASTREAM_H
