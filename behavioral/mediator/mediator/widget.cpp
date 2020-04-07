#include "widget.h"
#include "mediator.h"

Widget::Widget(Mediator *mediator)
    : m_mediator(mediator)
{

}

void Widget::handleEvent()
{
    if (m_mediator != nullptr)
    {
        m_mediator->notify(this, "Basic event");
    }
}
