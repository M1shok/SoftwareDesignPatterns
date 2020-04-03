#ifndef TARGET_H
#define TARGET_H

#include <string>

class Target
{
public:
    Target() = default;
    virtual ~Target() = default;

    Target(const Target & target) = default;
    Target(Target && target) = default;

    Target & operator = (const Target & target) = default;
    Target & operator = (Target && target) = default;

public:
    virtual std::string request(const std::string & str) const = 0;
};

#endif // TARGET_H
