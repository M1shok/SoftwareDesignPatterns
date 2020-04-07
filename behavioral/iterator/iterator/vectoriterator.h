#ifndef VECTORITERATOR_H
#define VECTORITERATOR_H

#include <vector>
#include <string>
#include "iterator.h"

class VectorIterator : public Iterator
{
public:
    VectorIterator(size_t index, std::vector<std::string> * parent);
    virtual ~VectorIterator() = default;

    VectorIterator(const VectorIterator & vi) = default;
    VectorIterator(VectorIterator && vi) = default;

    VectorIterator & operator = (const VectorIterator & vi) = default;
    VectorIterator & operator = (VectorIterator && vi) = default;

public:
    bool advance() override;
    std::string value() override;

private:
    bool equal(const VectorIterator & iterator);

private:
    size_t m_index;
    std::vector<std::string> * m_parent;
};

#endif // VECTORITERATOR_H
