#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H

#include "pizza.h"

class PizzaBuilder
{
public:
    PizzaBuilder() = default;
    virtual ~PizzaBuilder() = default;

    PizzaBuilder(const PizzaBuilder & pb) = default;
    PizzaBuilder(PizzaBuilder && pb) = default;

    PizzaBuilder & operator = (const PizzaBuilder & pb) = default;
    PizzaBuilder & operator = (PizzaBuilder && pb) = default;

public:
    void createNewPizza();
    virtual void buildDough() = 0;
    virtual void buildTopping() = 0;
    virtual void buildSauce() = 0;
    Pizza * pizza() const;

protected:
    Pizza * m_pizza;
};

#endif // PIZZABUILDER_H
