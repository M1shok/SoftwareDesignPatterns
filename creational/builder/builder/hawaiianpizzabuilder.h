#ifndef HAWAIIANPIZZABUILDER_H
#define HAWAIIANPIZZABUILDER_H

#include "pizzabuilder.h"

class HawaiianPizzaBuilder : public PizzaBuilder
{
public:
    HawaiianPizzaBuilder() = default;
    ~HawaiianPizzaBuilder() override = default;

    HawaiianPizzaBuilder(const HawaiianPizzaBuilder & hpb) = default;
    HawaiianPizzaBuilder(HawaiianPizzaBuilder && hpb) = default;

    HawaiianPizzaBuilder & operator = (const HawaiianPizzaBuilder & hpb) = default;
    HawaiianPizzaBuilder & operator = (HawaiianPizzaBuilder && hpb) = default;

public:
    void buildDough() override;
    void buildSauce() override;
    void buildTopping() override;
};

#endif // HAWAIIANPIZZABUILDER_H
