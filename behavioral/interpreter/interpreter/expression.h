#ifndef EXPRESSION_H
#define EXPRESSION_H

class Context;

class Expression
{
public:
    Expression() = default;
    virtual ~Expression() = default;

    Expression(const Expression & e) = default;
    Expression(Expression && e) = default;

    Expression & operator = (const Expression & e) = default;
    Expression & operator = (Expression && e) = default;

public:
    virtual double interpret(Context & context) const = 0;
};

#endif // EXPRESSION_H
