#ifndef LINUXLABEL_H
#define LINUXLABEL_H

#include "abstractlabel.h"

class LinuxLabel : public AbstractLabel
{
public:
    LinuxLabel() = default;
    ~LinuxLabel() override = default;

    LinuxLabel(const LinuxLabel & ll) = default;
    LinuxLabel(LinuxLabel && ll) = default;

    LinuxLabel & operator = (const LinuxLabel & ll) = default;
    LinuxLabel & operator = (LinuxLabel && ll) = default;

public:
    std::string text() override;
};

#endif // LINUXLABEL_H
