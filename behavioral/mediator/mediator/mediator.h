#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>
class Widget;

class Mediator
{
public:
    Mediator() = default;
    virtual ~Mediator() = default;

    Mediator(const Mediator & m) = default;
    Mediator(Mediator && m) = default;

    Mediator & operator = (const Mediator & m) = default;
    Mediator & operator = (Mediator && m) = default;

public:
    virtual void notify(Widget * widget, std::string event) = 0;
};

#endif // MEDIATOR_H
