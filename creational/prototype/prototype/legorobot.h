#ifndef LEGOROBOT_H
#define LEGOROBOT_H

#include "robot.h"

class LegoRobot : public Robot
{
public:
    LegoRobot() = default;
    ~LegoRobot() override = default;

    LegoRobot(const LegoRobot & robot) = default;
    LegoRobot(LegoRobot && robot) = default;

    LegoRobot & operator = (const LegoRobot & robot) = default;
    LegoRobot & operator = (LegoRobot && robot) = default;

public:
    Robot * clone() const override;
    std::string talk() const override;
};

#endif // LEGOROBOT_H
