#include "plane.h"
#include "sealogistics.h"

Transport *SeaLogistics::createTransport() const
{
    Transport * transport = new Plane();
    return transport;
}
