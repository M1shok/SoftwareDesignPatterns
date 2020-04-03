#include <adaptor.h>
#include <wstringprocessor.h>
#include <iostream>

int main()
{
    WStringProcessor wStringProcessor;
    Adaptor adaptor(wStringProcessor);
    std::string str("Testing the adaptor");
    std::cout << adaptor.request(str) << std::endl;
    return 0;
}
