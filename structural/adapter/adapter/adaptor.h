#ifndef ADAPTOR_H
#define ADAPTOR_H

#include "target.h"

class Adaptee;

class Adaptor : public Target
{
public:
    Adaptor(Adaptee & adaptee);
    ~Adaptor() override = default;

    Adaptor(const Adaptor & adaptor) = default;
    Adaptor(Adaptor && adaptor) = default;

    Adaptor & operator = (const Adaptor & adaptor) = delete;
    Adaptor & operator = (Adaptor && adaptor) = delete;

public:
    std::string request(const std::string &str) const override;

private:
    Adaptee & m_adaptee;
};

#endif // ADAPTOR_H
