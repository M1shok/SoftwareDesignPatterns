#ifndef DATASTREAMDECORATOR_H
#define DATASTREAMDECORATOR_H

#include "datastream.h"

class DataStreamDecorator : public DataStream
{
public:
    DataStreamDecorator(DataStream * dataStream);
    ~DataStreamDecorator() override = default;

    DataStreamDecorator(const DataStreamDecorator & dsd) = default;
    DataStreamDecorator(DataStreamDecorator && dsd) = default;

    DataStreamDecorator & operator = (const DataStreamDecorator & dsd) = default;
    DataStreamDecorator & operator = (DataStreamDecorator && dsd) = default;

public:
   std::string read(uint32_t bytes) override;
   uint32_t write(const std::string &str) override;

protected:
   DataStream * m_dataStream;
};

#endif // DATASTREAMDECORATOR_H
