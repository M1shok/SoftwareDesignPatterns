#ifndef COOK_H
#define COOK_H

#include "pizzabuilder.h"

class Cook
{
public:
    Cook() = default;
    ~Cook() = default;

    Cook(const Cook & cook) = default;
    Cook(Cook && cook) = default;

    Cook & operator = (const Cook & cook) = default;
    Cook & operator = (Cook && cook) = default;

public:
    void setPizzaBuilder(PizzaBuilder *pizzaBuilder);
    Pizza * cookPizza() const;

private:
    PizzaBuilder * m_pizzaBuilder;
};

#endif // COOK_H
