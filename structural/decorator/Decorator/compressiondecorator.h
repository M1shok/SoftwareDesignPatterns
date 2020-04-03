#ifndef COMPRESSIONDECORATOR_H
#define COMPRESSIONDECORATOR_H

#include "datastreamdecorator.h"

class CompressionDecorator : public DataStreamDecorator
{
public:
    CompressionDecorator(DataStream * dataStream);
    virtual ~CompressionDecorator() = default;

    CompressionDecorator(const CompressionDecorator & cd) = default;
    CompressionDecorator(CompressionDecorator && cd) = default;

    CompressionDecorator & operator = (const CompressionDecorator & cd) = default;
    CompressionDecorator & operator = (CompressionDecorator && cd) = default;

public:
    std::string read(uint32_t bytes) override;
    uint32_t write(const std::string &str) override;
};

#endif // COMPRESSIONDECORATOR_H
