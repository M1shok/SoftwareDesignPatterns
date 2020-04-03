#ifndef DEVICE_H
#define DEVICE_H

#include <inttypes.h>

class Device
{
public:
    Device() = default;
    virtual ~Device() = default;

    Device(const Device & device) = default;
    Device(Device && device) = default;

    Device & operator = (const Device & device) = default;
    Device & operator = (Device && device) = default;

public:
    virtual bool isEnabled() const = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual uint32_t volume() const = 0;
    virtual void setVolume(uint32_t volume) = 0;
};

#endif // DEVICE_H
