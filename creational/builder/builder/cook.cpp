#include "cook.h"

void Cook::setPizzaBuilder(PizzaBuilder *pizzaBuilder)
{
    m_pizzaBuilder = pizzaBuilder;
}

Pizza *Cook::cookPizza() const
{
    m_pizzaBuilder->createNewPizza();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
    return m_pizzaBuilder->pizza();
}
