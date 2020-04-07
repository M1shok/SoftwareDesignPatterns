#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>

class Iterator
{
public:
    Iterator() = default;
    virtual ~Iterator() = default;

    Iterator(const Iterator & iterator) = default;
    Iterator(Iterator && iterator) = default;

    Iterator & operator = (const Iterator & iterator) = default;
    Iterator & operator = (Iterator && iterator) = default;

public:
    virtual std::string value() = 0;
    virtual bool advance() = 0;
};

#endif // ITERATOR_H
