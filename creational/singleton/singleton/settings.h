#ifndef SETTINGS_H
#define SETTINGS_H

#include <inttypes.h>

class Settings
{
private:
    Settings();

    Settings(const Settings & set) = delete;
    Settings(Settings && set) = delete;

    Settings & operator = (const Settings & set) = delete;
    Settings & operator = (Settings && set) = delete;

public:
    static Settings & instance();
    ~Settings();

    bool save() const;
    bool load();

    uint32_t threadsCount() const;
    void setThreadsCount(const uint32_t &threadsCount);

private:
    uint32_t m_threadsCount;
};

#endif // SETTINGS_H
