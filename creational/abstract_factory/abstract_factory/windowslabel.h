#ifndef WINDOWSLABEL_H
#define WINDOWSLABEL_H

#include "abstractlabel.h"

class WindowsLabel : public AbstractLabel
{
public:
    WindowsLabel() = default;
    ~WindowsLabel() override = default;

    WindowsLabel(const WindowsLabel & wl) = default;
    WindowsLabel(WindowsLabel && wl) = default;

    WindowsLabel & operator = (const WindowsLabel & wl) = default;
    WindowsLabel & operator = (WindowsLabel && wl) = default;

public:
    std::string text() override;
};

#endif // WINDOWSLABEL_H
