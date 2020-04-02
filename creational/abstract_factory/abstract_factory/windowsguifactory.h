#ifndef WINDOWSGUIFACTORY_H
#define WINDOWSGUIFACTORY_H

#include "guifactory.h"

class WindowsGuiFactory : public GuiFactory
{
public:
    WindowsGuiFactory() = default;
    ~WindowsGuiFactory() override = default;

    WindowsGuiFactory(const WindowsGuiFactory & wgf) = default;
    WindowsGuiFactory(WindowsGuiFactory && wgs) = default;

    WindowsGuiFactory & operator = (const WindowsGuiFactory & wgf) = default;
    WindowsGuiFactory & operator = (WindowsGuiFactory && wgf) = default;

public:
    AbstractLabel * createLabel() const override;
    AbstractButton * createButton() const override;
};

#endif // WINDOWSGUIFACTORY_H
