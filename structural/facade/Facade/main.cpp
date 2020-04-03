#include <iostream>
#include "stringprocessor.h"

int main()
{
    std::string str = "string to be processed";

    std::cout << StringProcessor().processString(str) << std::endl;

    return 0;
}
