#ifndef VECTOR_H
#define VECTOR_H

#include "iterablecollection.h"
#include <vector>
#include <string>

class Vector : public IterableCollection
{
public:
    Vector(const std::vector<std::string> & vector);
    Vector() = default;
    virtual ~Vector() = default;

    Vector(const Vector & vector) = default;
    Vector(Vector && vector) = default;

    Vector & operator = (const Vector & vector) = default;
    Vector & operator = (Vector && vector) = default;

public:
    Iterator * end() override;
    Iterator * begin() override;

private:
    std::vector<std::string> m_vector;
};

#endif // VECTOR_H
