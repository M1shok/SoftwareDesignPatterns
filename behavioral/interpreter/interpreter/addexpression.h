#ifndef ADDEXPRESSION_H
#define ADDEXPRESSION_H

#include "expression.h"

class AddExpression : public Expression
{
public:
    AddExpression(Expression & lhs, Expression & rhs);
    ~AddExpression() override = default;

    AddExpression(const AddExpression & e) = default;
    AddExpression(AddExpression && e) = default;

    AddExpression & operator = (const AddExpression & e) = delete;
    AddExpression & operator = (AddExpression && e) = delete;

public:
    double interpret(Context &context) const override;

private:
    const Expression & m_lhs;
    const Expression & m_rhs;
};

#endif // ADDEXPRESSION_H
