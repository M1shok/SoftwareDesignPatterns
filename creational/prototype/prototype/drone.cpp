#include "drone.h"

Robot *Drone::clone() const
{
    Robot * robotClone = new Drone(*this);
    return robotClone;
}

std::string Drone::talk() const
{
    return std::string("I'm drone");
}
