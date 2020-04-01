#ifndef PLANE_H
#define PLANE_H

#include "transport.h"

class Plane : public Transport
{
public:
    Plane() = default;
    ~Plane() override = default;

    Plane(const Plane & plane) = default;
    Plane(Plane && plane) = default;

    Plane & operator = (const Plane & plane) = default;
    Plane & operator = (Plane && plane) = default;

public:
    void deliver() override;
};

#endif // PLANE_H
