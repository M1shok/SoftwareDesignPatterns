#include "pizza.h"

std::string Pizza::getDough() const
{
    return m_dough;
}

void Pizza::setDough(const std::string &value)
{
    m_dough = value;
}

std::string Pizza::getTopping() const
{
    return m_topping;
}

void Pizza::setTopping(const std::string &value)
{
    m_topping = value;
}

std::string Pizza::getSauce() const
{
    return m_sauce;
}

void Pizza::setSauce(const std::string &value)
{
    m_sauce = value;
}

std::string Pizza::description() const
{
    std::string description;
    description += "Dough: " + m_dough + ".\n";
    description += "Sauce: " + m_sauce + ".\n";
    description += "Topping: " + m_topping + ".\n";
    return description;
}
