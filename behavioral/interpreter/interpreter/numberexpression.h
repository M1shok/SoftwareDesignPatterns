#ifndef NUMBEREXPRESSION_H
#define NUMBEREXPRESSION_H

#include "expression.h"
#include <string>

class NumberExpression : public Expression
{
public:
    NumberExpression(const std::string & variable);
    ~NumberExpression() override = default;

    NumberExpression(const NumberExpression & e) = default;
    NumberExpression(NumberExpression && e) = default;

    NumberExpression & operator = (const NumberExpression & e) = delete;
    NumberExpression & operator = (NumberExpression && e) = delete;

public:
    double interpret(Context &context) const override;

private:
    const std::string m_variable;
};

#endif // NUMBEREXPRESSION_H
