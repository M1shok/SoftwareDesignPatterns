#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport
{
public:
    Car() = default;
    ~Car() override = default;

    Car(const Car & car) = default;
    Car(Car && car) = default;

    Car & operator = (const Car & car) = default;
    Car & operator = (Car && car) = default;

public:
    void deliver() override;
};

#endif // CAR_H
