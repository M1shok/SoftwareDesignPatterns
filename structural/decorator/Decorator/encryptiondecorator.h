#ifndef ENCRYPTIONDECORATOR_H
#define ENCRYPTIONDECORATOR_H

#include "datastreamdecorator.h"

class EncryptionDecorator : public DataStreamDecorator
{
public:
    EncryptionDecorator(DataStream * dataStream);
    ~EncryptionDecorator() override = default;

    EncryptionDecorator(const EncryptionDecorator & ed);
    EncryptionDecorator(EncryptionDecorator && ed);

    EncryptionDecorator & operator = (const EncryptionDecorator & ed);
    EncryptionDecorator & operator = (EncryptionDecorator && ed);

public:
    std::string read(uint32_t bytes) override;
    uint32_t write(const std::string &str) override;
};

#endif // ENCRYPTIONDECORATOR_H
