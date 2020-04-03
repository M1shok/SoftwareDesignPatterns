#include "adaptor.h"
#include "adaptee.h"

Adaptor::Adaptor(Adaptee &adaptee)
    : m_adaptee(adaptee)
{

}

std::string Adaptor::request(const std::string &str) const
{
    std::wstring wstr;
    wstr.resize(str.size());

    for (size_t i = 0; i < str.size(); ++i)
        wstr[i] = str[i];

    std::wstring returnAdaptee = m_adaptee.specificRequest(wstr);
    std::string returnValue;
    returnValue.resize(returnAdaptee.size());

    for (size_t i = 0; i < str.size(); ++i)
        returnValue[i] = returnAdaptee[i];
    return returnValue;
}
