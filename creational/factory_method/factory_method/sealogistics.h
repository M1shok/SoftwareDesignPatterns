#ifndef SEALOGISTICS_H
#define SEALOGISTICS_H

#include "logistics.h"

class SeaLogistics : public Logistics
{
public:
    SeaLogistics() = default;
    ~SeaLogistics() override = default;

    SeaLogistics(const SeaLogistics & sl) = default;
    SeaLogistics(SeaLogistics && sl) = default;

    SeaLogistics & operator = (const SeaLogistics & sl) = default;
    SeaLogistics & operator = (SeaLogistics && sl) = default;

public:
    Transport * createTransport() const override;
};

#endif // SEALOGISTICS_H
