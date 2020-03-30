#include <iostream>
#include "settings.h"

int main()
{
    Settings & settingsFirst = Settings::instance();
    Settings & settingsSecond = Settings::instance();

    settingsFirst.setThreadsCount(2);
    settingsSecond.setThreadsCount(1);

    if (settingsFirst.threadsCount() == settingsSecond.threadsCount())
    {
        std::cout << "Singleton worked" << std::endl;
    }
    else
    {
        std::cout << "Seems like your singleton example didn't work. "
                     "Are you sure you implemented it correctly?"
                  << std::endl;
    }

    return 0;
}
