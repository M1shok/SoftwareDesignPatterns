#include <iostream>
#include "windowsguifactory.h"
#include "linuxguifactory.h"

void setupApplication(GuiFactory * guiFactory)
{
    AbstractLabel * label = guiFactory->createLabel();
    AbstractButton * button = guiFactory->createButton();

    std::cout << label->text() << std::endl;
    button->push();

    delete button;
    delete label;
}

int main()
{
    GuiFactory * factory = new WindowsGuiFactory;
    setupApplication(factory);
    delete factory;

    factory = new LinuxGuiFactory;
    setupApplication(factory);
    delete factory;
    return 0;
}
