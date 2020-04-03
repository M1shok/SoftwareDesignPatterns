#ifndef WSTRINGPROCESSOR_H
#define WSTRINGPROCESSOR_H

#include "adaptee.h"

class WStringProcessor : public Adaptee
{
public:
    WStringProcessor() = default;
    ~WStringProcessor() override = default;

    WStringProcessor(const WStringProcessor & wsp) = default;
    WStringProcessor(WStringProcessor && wsp) = default;

    WStringProcessor & operator = (const WStringProcessor & wsp) = default;
    WStringProcessor & operator = (WStringProcessor && wsp) = default;

public:
    std::wstring specificRequest(const std::wstring &str) override;
};

#endif // WSTRINGPROCESSOR_H
