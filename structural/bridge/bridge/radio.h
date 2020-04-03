#ifndef RADIO_H
#define RADIO_H

#include "device.h"
#include <string>

class Radio : public Device
{
public:
    Radio();
    virtual ~Radio() = default;

    Radio(const Radio & radio) = default;
    Radio(Radio && radio) = default;

    Radio & operator = (const Radio & radio) = default;
    Radio & operator = (Radio && radio) = default;

public:
    void enable() override;
    void disable() override;
    void setVolume(uint32_t volume) override;
    bool isEnabled() const override;
    uint32_t volume() const override;

    std::string status() const;

private:
    bool m_isEnabled;
    uint32_t m_volume;
};

#endif // RADIO_H
