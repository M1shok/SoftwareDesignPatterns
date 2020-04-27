#include "subtractexpression.h"

SubtractExpression::SubtractExpression(Expression &lhs, Expression &rhs)
    : m_lhs(lhs)
    , m_rhs(rhs)
{

}

double SubtractExpression::interpret(Context &context) const
{
    return m_lhs.interpret(context) - m_rhs.interpret(context);
}
