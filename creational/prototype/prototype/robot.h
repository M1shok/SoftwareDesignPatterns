#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <inttypes.h>

class Robot
{
public:
    Robot() = default;
    virtual ~Robot() = default;

    Robot(const Robot & robot) = default;
    Robot(Robot && robot) = default;

    Robot & operator = (const Robot & robot) = default;
    Robot & operator = (Robot && robot) = default;

public:
    virtual std::string talk() const = 0;
    virtual Robot * clone() const = 0;

};

#endif // ROBOT_H
