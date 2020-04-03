#include "datastreamdecorator.h"


DataStreamDecorator::DataStreamDecorator(DataStream *dataStream)
    : m_dataStream(dataStream)
{

}

std::string DataStreamDecorator::read(uint32_t bytes)
{
    return m_dataStream->read(bytes);
}

uint32_t DataStreamDecorator::write(const std::string &str)
{
    return m_dataStream->write(str);
}
