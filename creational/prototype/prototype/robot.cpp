#include "robot.h"

uint32_t Robot::getPartsCount() const
{
    return partsCount;
}

void Robot::setPartsCount(const uint32_t &value)
{
    partsCount = value;
}

double Robot::getPrice() const
{
    return price;
}

void Robot::setPrice(double value)
{
    price = value;
}
