#include "dialog.h"
#include <iostream>

Dialog::Dialog()
    : button(this)
    , panel(this)
{

}

void Dialog::notify(Widget *widget, std::string event)
{
    if (widget == &button)
    {
        std::cout << event << std::endl;
        std::cout << "This will cause panel event" << std::endl;
        panel.handleEvent();
    }
    else if (widget == &panel)
    {
        std::cout << event << std::endl;
    }
}

void Dialog::confirm()
{
    panel.handleEvent();
    button.handleEvent();
}
