#include "pizzabuilder.h"

void PizzaBuilder::createNewPizza()
{
    m_pizza = new Pizza();
}

Pizza *PizzaBuilder::pizza() const
{
    return m_pizza;
}
