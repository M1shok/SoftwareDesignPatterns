#ifndef REMOTECONTROLLER_H
#define REMOTECONTROLLER_H

#include "remote.h"
class Device;

class RemoteController : public Remote
{
public:
    RemoteController(Device * device);
    ~RemoteController() override = default;

    RemoteController(const RemoteController & rc) = default;
    RemoteController(RemoteController && rc) = default;

    RemoteController & operator = (const RemoteController & rc) = default;
    RemoteController & operator = (RemoteController && rc) = default;

public:
    void volumeUp() override;
    void volumeDown() override;
    void togglePower() override;

private:
    Device * m_device;
};

#endif // REMOTECONTROLLER_H
