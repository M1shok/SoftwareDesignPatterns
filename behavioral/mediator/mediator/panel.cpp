#include "panel.h"
#include <iostream>
#include "mediator.h"

Panel::Panel(Mediator *mediator)
    : Widget(mediator)
{

}

void Panel::handleEvent()
{
    if (m_mediator != nullptr)
    {
        m_mediator->notify(this, "Panel event");
    }
}
