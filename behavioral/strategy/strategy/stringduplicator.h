#ifndef STRINGDUPLICATOR_H
#define STRINGDUPLICATOR_H

#include "stringmodifier.h"

class StringDuplicator : public StringModifier
{
public:
    StringDuplicator() = default;
    virtual ~StringDuplicator() = default;

    StringDuplicator(const StringDuplicator & strMod) = default;
    StringDuplicator(StringDuplicator && strMod) = default;

    StringDuplicator & operator = (const StringDuplicator & strMod) = default;
    StringDuplicator & operator = (StringDuplicator && strMod) = default;

public:
    std::string modify(const std::string &str) override;
};

#endif // STRINGDUPLICATOR_H
