#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <string>

class Adaptee
{
public:
    Adaptee() = default;
    virtual ~Adaptee() = default;

    Adaptee(const Adaptee & adaptee) = default;
    Adaptee(Adaptee && adaptee) = default;

    Adaptee & operator = (const Adaptee & adaptee) = default;
    Adaptee & operator = (Adaptee && adaptee) = default;

public:
    virtual std::wstring specificRequest(const std::wstring & str) = 0;
};

#endif // ADAPTEE_H
