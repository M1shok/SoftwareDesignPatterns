#include "stringprocessor.h"
#include <algorithm>

std::string StringProcessor::processString(std::string str) const
{
    std::string processedString;
    StringEncoder stringEncoder;

    processedString = stringEncoder.decode(str); //access to classes
    std::reverse(processedString.begin(), processedString.end()); // access to libraries
    std::for_each(processedString.begin(), processedString.end(),
                  [](char & ch)
    {
        ++ch;
        if (!isalpha(ch))
        {
            ch = 'a';
        }
    });
    // another access to processing functions
    processedString = stringEncoder.encode(processedString);

    return processedString;
}
