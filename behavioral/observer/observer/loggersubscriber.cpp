#include "loggersubscriber.h"
#include <iostream>

void LoggerSubscriber::update()
{
    std::cout << "The publisher informed about the update. "
                 "I have to log it. " << std::endl;
}
