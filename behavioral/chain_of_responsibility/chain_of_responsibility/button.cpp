#include "button.h"
#include <iostream>

Button::Button(Widget *parent)
    : Widget(parent)
{

}

void Button::handleEvent()
{
    std::cout << "I'm a button" << std::endl;
    if (m_parent != nullptr)
    {
        m_parent->handleEvent();
    }
}
