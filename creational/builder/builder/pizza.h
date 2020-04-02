#ifndef PIZZA_H
#define PIZZA_H

#include <string>

class Pizza
{
public:
    Pizza() = default;
    virtual ~Pizza() = default;

    Pizza(const Pizza & pizza) = default;
    Pizza(Pizza && pizza) = default;

    Pizza & operator = (const Pizza & pizza) = default;
    Pizza & operator = (Pizza && pizza) = default;

public:
    std::string getDough() const;
    void setDough(const std::string &value);

    std::string getTopping() const;
    void setTopping(const std::string &value);

    std::string getSauce() const;
    void setSauce(const std::string &value);

    std::string description() const;

private:
    std::string m_dough;
    std::string m_topping;
    std::string m_sauce;
};

#endif // PIZZA_H
