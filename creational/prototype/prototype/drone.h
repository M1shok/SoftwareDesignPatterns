#ifndef DRONE_H
#define DRONE_H

#include "robot.h"

class Drone : public Robot
{
public:
    Drone() = default;
    ~Drone() override = default;

    Drone(const Drone & drone) = default;
    Drone(Drone && drone) = default;

    Drone & operator = (const Drone & drone) = default;
    Drone & operator = (Drone && drone) = default;

public:
    Robot * clone() const override;
    std::string talk() const override;
};

#endif // DRONE_H
