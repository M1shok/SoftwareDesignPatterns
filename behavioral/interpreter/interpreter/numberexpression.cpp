#include "numberexpression.h"
#include "context.h"

NumberExpression::NumberExpression(const std::string &variable)
    : m_variable(variable)
{

}

double NumberExpression::interpret(Context &context) const
{
    return context.value(m_variable);
}
