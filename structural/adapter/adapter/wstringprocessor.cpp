#include "wstringprocessor.h"
#include <algorithm>

std::wstring WStringProcessor::specificRequest(const std::wstring &str)
{
    std::wstring wstr(str);
    std::reverse(wstr.begin(), wstr.end());
    return wstr;
}
