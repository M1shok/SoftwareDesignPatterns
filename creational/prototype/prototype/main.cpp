#include <iostream>
#include "drone.h"
#include "legorobot.h"

using namespace std;

int main()
{
    Drone drone;
    LegoRobot legoRobot;

    Robot * copy = drone.clone();
    std::cout << copy->talk() << std::endl;
    delete copy;

    copy = legoRobot.clone();
    std::cout << copy->talk() << std::endl;
    delete copy;

    return 0;
}
