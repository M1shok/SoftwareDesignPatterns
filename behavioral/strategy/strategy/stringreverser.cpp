#include "stringreverser.h"
#include <algorithm>

std::string StringReverser::modify(const std::string &str)
{
    std::string result = str;
    std::reverse(result.begin(), result.end());
    return result;
}
