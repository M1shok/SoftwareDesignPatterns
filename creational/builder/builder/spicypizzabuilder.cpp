#include "spicypizzabuilder.h"

void SpicyPizzaBuilder::buildDough()
{
    m_pizza->setDough("spicy dough");
}

void SpicyPizzaBuilder::buildSauce()
{
    m_pizza->setSauce("spicy sauce");
}

void SpicyPizzaBuilder::buildTopping()
{
    m_pizza->setTopping("spicy topping");
}
