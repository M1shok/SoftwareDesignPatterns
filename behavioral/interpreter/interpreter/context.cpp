#include "context.h"

double Context::value(const std::string &variable)
{
    return m_variables[variable];
}

void Context::setValue(const std::string &variable, double value)
{
    m_variables[variable] = value;
}
