#include "logistics.h"
#include "transport.h"

void Logistics::planDelivery() const
{
    Transport * transport = createTransport();
    transport->deliver();
    delete transport;
}
