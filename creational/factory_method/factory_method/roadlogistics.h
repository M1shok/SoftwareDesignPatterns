#ifndef ROADLOGISTICS_H
#define ROADLOGISTICS_H

#include "logistics.h"

class RoadLogistics : public Logistics
{
public:
    RoadLogistics() = default;
    ~RoadLogistics() override = default;

    RoadLogistics(const RoadLogistics & rl) = default;
    RoadLogistics(RoadLogistics && rl) = default;

    RoadLogistics & operator = (const RoadLogistics & rl) = default;
    RoadLogistics & operator = (RoadLogistics && rl) = default;

public:
    Transport * createTransport() const override;
};

#endif // ROADLOGISTICS_H
