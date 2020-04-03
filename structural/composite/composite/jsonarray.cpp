#include "jsonarray.h"


std::string JsonArray::toString() const
{
    std::string array;
    array += "[";

    for (size_t i =  0; i < m_entities.size() - 1; ++i)
    {
        array += m_entities[i]->toString() + ", ";
    }

    if (m_entities.size() > 0)
    {
        array += m_entities.back()->toString();
    }

    array += "]";
    return array;
}

bool JsonArray::isArray() const
{
    return true;
}

bool JsonArray::isObject() const
{
    return false;
}

void JsonArray::push_back(JsonEntity * const je)
{
    m_entities.push_back(je);
}

const JsonEntity * JsonArray::operator [](size_t i) const
{
    return m_entities[i];
}

JsonEntity *JsonArray::operator [](size_t i)
{
    return m_entities[i];
}
