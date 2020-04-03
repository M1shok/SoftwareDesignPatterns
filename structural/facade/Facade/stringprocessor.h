#ifndef STRINGPROCESSOR_H
#define STRINGPROCESSOR_H

#include "stringencoder.h"

class StringProcessor
{
public:
    StringProcessor() = default;
    virtual ~StringProcessor() = default;

    StringProcessor(const StringProcessor & sp) = default;
    StringProcessor(StringProcessor && sp) = default;

    StringProcessor & operator = (const StringProcessor & sp) = default;
    StringProcessor & operator = (StringProcessor && sp) = default;

public:
    std::string processString(std::string str) const;
};

#endif // STRINGPROCESSOR_H
