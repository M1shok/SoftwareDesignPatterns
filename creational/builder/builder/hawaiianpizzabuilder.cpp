#include "hawaiianpizzabuilder.h"

void HawaiianPizzaBuilder::buildDough()
{
    m_pizza->setDough("Hawaiian dough");
}

void HawaiianPizzaBuilder::buildSauce()
{
    m_pizza->setSauce("Hawaiian sauce");
}

void HawaiianPizzaBuilder::buildTopping()
{
    m_pizza->setTopping("Hawaiian topping");
}
