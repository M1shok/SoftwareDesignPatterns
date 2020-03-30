#include "settings.h"

Settings::Settings()
{
    load();
}

Settings &Settings::instance()
{
    static Settings settings;
    return settings;
}

Settings::~Settings()
{
    save();
}

bool Settings::save() const
{
    // code for saving the settings
    return true;
}

bool Settings::load()
{
    // code for loading the settings;
    return true;
}

uint32_t Settings::threadsCount() const
{
    return m_threadsCount;
}

void Settings::setThreadsCount(const uint32_t &threadsCount)
{
    m_threadsCount = threadsCount;
}
