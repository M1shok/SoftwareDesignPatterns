#include "cook.h"
#include "hawaiianpizzabuilder.h"
#include "spicypizzabuilder.h"
#include <iostream>

int main()
{
    Cook cook;
    HawaiianPizzaBuilder hawaiianPizzaBuilder;
    SpicyPizzaBuilder spicyPizzaBuilder;

    cook.setPizzaBuilder(&hawaiianPizzaBuilder);
    Pizza * pizza = cook.cookPizza();
    std::cout << pizza->description() << std::endl;
    delete pizza;

    cook.setPizzaBuilder(&spicyPizzaBuilder);
    pizza = cook.cookPizza();
    std::cout << pizza->description() << std::endl;
    delete pizza;

    return 0;
}
