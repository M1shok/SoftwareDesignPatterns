#include "remotecontroller.h"

#include <device.h>

RemoteController::RemoteController(Device *device)
    : m_device(device)
{

}

void RemoteController::volumeUp()
{
    if (m_device->isEnabled())
    {
        m_device->setVolume(m_device->volume() + 1);
    }
}

void RemoteController::volumeDown()
{
    if (m_device->isEnabled())
    {
        m_device->setVolume(m_device->volume() - 1);
    }
}

void RemoteController::togglePower()
{
    if (m_device->isEnabled())
    {
        m_device->disable();
    }
    else
    {
        m_device->enable();
    }
}
