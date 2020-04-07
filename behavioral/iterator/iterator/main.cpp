#include <iostream>

#include "vector.h"
#include "vectoriterator.h"

int main()
{
    Vector vector({"1", "2", "3", "4"});

    Iterator * it = vector.begin();

    do
    {
        std::cout << it->value() << std::endl;
    }
    while (it->advance());

    return 0;
}
