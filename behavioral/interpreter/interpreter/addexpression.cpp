#include "addexpression.h"

AddExpression::AddExpression(Expression &lhs, Expression &rhs)
    : m_lhs(lhs)
    , m_rhs(rhs)
{

}

double AddExpression::interpret(Context & context) const
{
    return m_lhs.interpret(context) + m_rhs.interpret(context);
}
