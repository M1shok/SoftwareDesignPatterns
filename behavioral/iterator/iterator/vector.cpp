#include "vector.h"
#include "vectoriterator.h"

Vector::Vector(const std::vector<std::string> &vector)
    : IterableCollection()
    , m_vector(vector)
{
}

Iterator *Vector::end()
{
    return new VectorIterator(m_vector.size(), &m_vector);
}

Iterator *Vector::begin()
{
    return new VectorIterator(0, &m_vector);
}
