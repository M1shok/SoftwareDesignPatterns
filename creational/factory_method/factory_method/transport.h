#ifndef TRANSPORT_H
#define TRANSPORT_H


class Transport
{
public:
    Transport() = default;
    virtual ~Transport() = default;

    Transport(const Transport & transport) = default;
    Transport(Transport && transport) = default;

    Transport & operator = (const Transport & transport) = default;
    Transport & operator = (Transport && transport) = default;

public:
    virtual void deliver() = 0;
};

#endif // TRANSPORT_H
