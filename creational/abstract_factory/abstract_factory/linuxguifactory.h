#ifndef LINUXGUIFACTORY_H
#define LINUXGUIFACTORY_H

#include "guifactory.h"

class LinuxGuiFactory : public GuiFactory
{
public:
    LinuxGuiFactory() = default;
    ~LinuxGuiFactory() override = default;

    LinuxGuiFactory(const LinuxGuiFactory & lgf) = default;
    LinuxGuiFactory(LinuxGuiFactory && lgs) = default;

    LinuxGuiFactory & operator = (const LinuxGuiFactory & lgf) = default;
    LinuxGuiFactory & operator = (LinuxGuiFactory && lgf) = default;

public:
    AbstractLabel * createLabel() const override;
    AbstractButton * createButton() const override;
};

#endif // LINUXGUIFACTORY_H
