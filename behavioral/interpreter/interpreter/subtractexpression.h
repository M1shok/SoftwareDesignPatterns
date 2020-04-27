#ifndef SUBTRACTEXPRESSION_H
#define SUBTRACTEXPRESSION_H

#include "expression.h"

class SubtractExpression : public Expression
{
public:
    SubtractExpression(Expression & lhs, Expression & rhs);
    ~SubtractExpression() override = default;

    SubtractExpression(const SubtractExpression & e) = default;
    SubtractExpression(SubtractExpression && e) = default;

    SubtractExpression & operator = (const SubtractExpression & e) = delete;
    SubtractExpression & operator = (SubtractExpression && e) = delete;

public:
    double interpret(Context &context) const override;

private:
    const Expression & m_lhs;
    const Expression & m_rhs;
};

#endif // SUBTRACTEXPRESSION_H
