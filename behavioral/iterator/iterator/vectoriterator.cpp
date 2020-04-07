#include "vectoriterator.h"


VectorIterator::VectorIterator(size_t index, std::vector<std::string> *parent)
    : Iterator()
    , m_index(index)
    , m_parent(parent)
{
}

bool VectorIterator::advance()
{
    ++m_index;
    if (m_index >= m_parent->size())
    {
        m_index = m_parent->size();
        return false;
    }
    return true;
}

std::string VectorIterator::value()
{
    return m_parent->at(m_index);
}
