#include "windowsguifactory.h"

#include "windowsbutton.h"
#include "windowslabel.h"

AbstractLabel *WindowsGuiFactory::createLabel() const
{
    AbstractLabel* label = new WindowsLabel;
    return label;
}

AbstractButton *WindowsGuiFactory::createButton() const
{
    AbstractButton * button = new WindowsButton;
    return button;
}
