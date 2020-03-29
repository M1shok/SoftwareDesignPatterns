#include "legorobot.h"

Robot *LegoRobot::clone() const
{
    Robot * robotClone = new LegoRobot(*this);
    return robotClone;
}

std::string LegoRobot::talk() const
{
    return std::string("I'm sorry, but lego robots cannot speak.");
}
