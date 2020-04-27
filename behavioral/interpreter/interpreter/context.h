#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include <map>

class Context
{
public:
    Context() = default;
    ~Context() = default;

    Context(const Context & c) = default;
    Context(Context && c) = default;

    Context & operator =(const Context & c) = default;
    Context & operator =(Context && c) = default;

public:
    double value(const std::string & variable);
    void setValue(const std::string & variable, double value);

private:
    std::map<std::string, double> m_variables;
};

#endif // CONTEXT_H
