#include "button.h"
#include <iostream>
#include "mediator.h"

Button::Button(Mediator *mediator)
    : Widget(mediator)
{

}

void Button::handleEvent()
{
    if (m_mediator != nullptr)
    {
        m_mediator->notify(this, "Button event");
    }
}
