#include "panel.h"
#include <iostream>

Panel::Panel(Widget *parent)
    : Widget(parent)
{

}

void Panel::handleEvent()
{
    std::cout << "I'm a panel" << std::endl;
    if (m_parent != nullptr)
    {
        m_parent->handleEvent();
    }
    else
    {
        std::cout << "I'm the last one in the chain of responsibility\n" << std::endl ;
    }
}
