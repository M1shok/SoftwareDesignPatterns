#include "sealogistics.h"
#include "roadlogistics.h"

int main()
{
    Logistics * logistics = new SeaLogistics;
    logistics->planDelivery();
    delete logistics;

    logistics = new RoadLogistics;
    logistics->planDelivery();
    delete logistics;
    return 0;
}
