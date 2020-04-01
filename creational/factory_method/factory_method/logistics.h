#ifndef LOGISTICS_H
#define LOGISTICS_H

class Transport;

class Logistics
{
public:
    Logistics() = default;
    virtual ~Logistics() = default;

    Logistics(const Logistics & logistics) = default;
    Logistics(Logistics && logistics) = default;

    Logistics & operator = (const Logistics & logistics) = default;
    Logistics & operator = (Logistics && logistics) = default;

public:
    void planDelivery() const;
    virtual Transport * createTransport() const = 0;
};

#endif // LOGISTICS_H
