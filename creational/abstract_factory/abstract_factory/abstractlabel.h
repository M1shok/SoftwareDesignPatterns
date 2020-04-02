#ifndef ABSTRACTLABEL_H
#define ABSTRACTLABEL_H

#include <string>

class AbstractLabel
{
public:
    AbstractLabel() = default;
    virtual ~AbstractLabel() = default;

    AbstractLabel(const AbstractLabel & al) = default;
    AbstractLabel(AbstractLabel && al) = default;

    AbstractLabel & operator = (const AbstractLabel & al) = default;
    AbstractLabel & operator = (AbstractLabel && al) = default;

public:
    virtual std::string text() = 0;
};

#endif // ABSTRACTLABEL_H
