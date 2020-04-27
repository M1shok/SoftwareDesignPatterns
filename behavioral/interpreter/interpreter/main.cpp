#include "context.h"
#include "addexpression.h"
#include "subtractexpression.h"
#include "numberexpression.h"
#include <iostream>

int main()
{
    NumberExpression x("X");
    NumberExpression y("Y");
    NumberExpression z("Z");
    NumberExpression k("K");

    AddExpression sum1(x, y);
    AddExpression sum2(z, k);

    SubtractExpression diff(sum1, sum2);

    Context firstContext;
    firstContext.setValue("X", 3);
    firstContext.setValue("Y", 6);
    firstContext.setValue("Z", 2);
    firstContext.setValue("K", 5);

    Context secondContext;
    secondContext.setValue("X", -4);
    secondContext.setValue("Y", 9.2231);
    secondContext.setValue("Z", -1);
    secondContext.setValue("K", 5);

    std::cout << "First context expression value: "
              << diff.interpret(firstContext) << std::endl;
    std::cout << "First context expression value: "
              << diff.interpret(secondContext) << std::endl;

    return 0;
}
