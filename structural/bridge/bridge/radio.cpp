#include "radio.h"

Radio::Radio()
    : m_isEnabled(false)
    , m_volume(25)
{

}

void Radio::enable()
{
    m_isEnabled = true;
}

void Radio::disable()
{
    m_isEnabled = false;
}

void Radio::setVolume(uint32_t volume)
{
    if (volume <= 100)
    {
        m_volume = volume;
    }
}

bool Radio::isEnabled() const
{
    return m_isEnabled;
}

uint32_t Radio::volume() const
{
    return m_volume;
}

std::string Radio::status() const
{
    std::string status;
    status += "Power: " + std::to_string(m_isEnabled) + ". ";
    status += "Volume: " + std::to_string(m_volume) + ".";
    return status;
}
