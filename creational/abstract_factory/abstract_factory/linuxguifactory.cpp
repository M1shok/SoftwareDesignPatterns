#include "linuxbutton.h"
#include "linuxguifactory.h"
#include "linuxlabel.h"

AbstractLabel *LinuxGuiFactory::createLabel() const
{
    AbstractLabel * label = new LinuxLabel;
    return label;
}

AbstractButton *LinuxGuiFactory::createButton() const
{
    AbstractButton * button = new LinuxButton;
    return button;
}
