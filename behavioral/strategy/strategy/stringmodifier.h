#ifndef STRINGMODIFIER_H
#define STRINGMODIFIER_H

#include <string>

class StringModifier
{
public:
    StringModifier() = default;
    virtual ~StringModifier() = default;

    StringModifier(const StringModifier & strMod) = default;
    StringModifier(StringModifier && strMod) = default;

    StringModifier & operator = (const StringModifier & strMod) = default;
    StringModifier & operator = (StringModifier && strMod) = default;

public:
    virtual std::string modify(const std::string & str);

};

#endif // STRINGMODIFIER_H
