#include "context.h"
#include "stringduplicator.h"
#include "stringreverser.h"
#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    Context context;
    StringReverser reverser;
    StringDuplicator duplicator;

    std::cout << "Default: " << context.modify(input) << std::endl;
    context.setModifier(&reverser);
    std::cout << "Reversed: " << context.modify(input) << std::endl;
    context.setModifier(&duplicator);
    std::cout << "Duplicated: " << context.modify(input) << std::endl;

    return 0;
}
