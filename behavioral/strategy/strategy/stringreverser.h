#ifndef STRINGREVERSER_H
#define STRINGREVERSER_H

#include "stringmodifier.h"

class StringReverser : public StringModifier
{
public:
    StringReverser() = default;
    virtual ~StringReverser() = default;

    StringReverser(const StringReverser & strMod) = default;
    StringReverser(StringReverser && strMod) = default;

    StringReverser & operator = (const StringReverser & strMod) = default;
    StringReverser & operator = (StringReverser && strMod) = default;

public:
    std::string modify(const std::string &str) override;
};

#endif // STRINGREVERSER_H
