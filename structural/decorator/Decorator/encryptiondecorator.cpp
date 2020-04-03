#include "encryptiondecorator.h"

EncryptionDecorator::EncryptionDecorator(DataStream *dataStream)
    : DataStreamDecorator(dataStream)
{

}

std::string EncryptionDecorator::read(uint32_t bytes)
{
    std::string readData = m_dataStream->read(bytes);

    // decode
    readData += " decoded";
    return readData;
}

uint32_t EncryptionDecorator::write(const std::string &str)
{
    // encode
    std::string newData = str + " encoded";
    return m_dataStream->write(newData);
}

