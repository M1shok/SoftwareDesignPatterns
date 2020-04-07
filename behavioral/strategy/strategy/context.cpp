#include "context.h"
#include "stringmodifier.h"

Context::Context()
    : modifier(nullptr)
{

}

StringModifier *Context::getModifier() const
{
    return modifier;
}

void Context::setModifier(StringModifier *value)
{
    modifier = value;
}

std::string Context::modify(const std::string &string)
{
    if (modifier != nullptr)
    {
        return modifier->modify(string);
    }
    return string;
}
