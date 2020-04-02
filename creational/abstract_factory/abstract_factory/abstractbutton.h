#ifndef ABSTRACTBUTTON_H
#define ABSTRACTBUTTON_H

#include <string>

class AbstractButton
{
public:
    AbstractButton() = default;
    virtual ~AbstractButton() = default;

    AbstractButton(const AbstractButton & button) = default;
    AbstractButton(AbstractButton && button) = default;

    AbstractButton & operator = (const AbstractButton & button) = default;
    AbstractButton & operator = (AbstractButton && button) = default;

public:
    virtual void push() = 0;
};

#endif // ABSTRACTBUTTON_H
