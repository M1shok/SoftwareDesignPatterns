#include "car.h"
#include "roadlogistics.h"

Transport *RoadLogistics::createTransport() const
{
    Transport * transport = new Car;
    return transport;
}
