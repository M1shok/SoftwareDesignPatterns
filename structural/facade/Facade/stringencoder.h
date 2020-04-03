#ifndef STRINGENCODER_H
#define STRINGENCODER_H

#include <string>

class StringEncoder
{
public:
    StringEncoder() = default;
    virtual ~StringEncoder() = default;

    StringEncoder(const StringEncoder & sp) = default;
    StringEncoder(StringEncoder && sp) = default;

    StringEncoder & operator = (const StringEncoder & sp) = default;
    StringEncoder & operator = (StringEncoder && sp) = default;

public:
    virtual std::string encode(const std::string & str) const;
    virtual std::string decode(const std::string & str) const;
};

#endif // STRINGENCODER_H
