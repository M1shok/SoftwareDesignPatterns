#ifndef WINDOWSBUTTON_H
#define WINDOWSBUTTON_H

#include "abstractbutton.h"

class WindowsButton : public AbstractButton
{
public:
    WindowsButton() = default;
    ~WindowsButton() override = default;

    WindowsButton(const WindowsButton & wb) = default;
    WindowsButton(WindowsButton && wb) = default;

    WindowsButton & operator = (const WindowsButton & wb) = default;
    WindowsButton & operator = (WindowsButton && wb) = default;

public:
    void push() override;
};

#endif // WINDOWSBUTTON_H
