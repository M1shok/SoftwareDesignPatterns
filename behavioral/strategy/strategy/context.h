#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
class StringModifier;

class Context
{

public:
    Context();
    virtual ~Context() = default;

    Context(const Context & strMod) = default;
    Context(Context && strMod) = default;

    Context & operator = (const Context & strMod) = default;
    Context & operator = (Context && strMod) = default;

public:
    StringModifier * getModifier() const;
    void setModifier(StringModifier *value);
    std::string modify(const std::string & string);

private:
    StringModifier * modifier;
};

#endif // CONTEXT_H
