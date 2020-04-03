#include "compressiondecorator.h"


CompressionDecorator::CompressionDecorator(DataStream *dataStream)
    : DataStreamDecorator(dataStream)
{

}

std::string CompressionDecorator::read(uint32_t bytes)
{
    std::string readData = m_dataStream->read(bytes);

    // uncompress
    readData += " uncompressed";
    return readData;
}

uint32_t CompressionDecorator::write(const std::string &str)
{
    std::string newData = str + " compressed";
    return m_dataStream->write(newData);
}
