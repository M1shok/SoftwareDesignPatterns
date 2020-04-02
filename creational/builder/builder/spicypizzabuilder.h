#ifndef SPICYPIZZABUILDER_H
#define SPICYPIZZABUILDER_H

#include "pizzabuilder.h"

class SpicyPizzaBuilder : public PizzaBuilder
{
public:
    SpicyPizzaBuilder() = default;
    ~SpicyPizzaBuilder() override = default;

    SpicyPizzaBuilder(const SpicyPizzaBuilder & spb) = default;
    SpicyPizzaBuilder(SpicyPizzaBuilder && spb) = default;

    SpicyPizzaBuilder & operator = (const SpicyPizzaBuilder & spb) = default;
    SpicyPizzaBuilder & operator = (SpicyPizzaBuilder & spb) = default;

public:
    void buildDough() override;
    void buildSauce() override;
    void buildTopping() override;
};

#endif // SPICYPIZZABUILDER_H
