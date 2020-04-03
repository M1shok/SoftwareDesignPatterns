#include "jsonobject.h"

std::string JsonObject::toString() const
{
    std::string object;
    object += "{";

    for (const auto & kv: m_fields)
    {
        object += "\"" + kv.first +  "\": "
                + kv.second->toString() + ",";
    }

    if (object.back() == ',')
    {
        object.pop_back();
    }

    object += "}";
    return object;
}

bool JsonObject::isArray() const
{
    return false;
}

bool JsonObject::isObject() const
{
    return true;
}

JsonEntity * JsonObject::value(const std::string &key) const
{
    auto it = m_fields.find(key);
    if (it != m_fields.end())
    {
        return it->second;
    }
    return nullptr;
}

void JsonObject::insert(const std::string &key, JsonEntity *value)
{
    m_fields[key] = value;
}

void JsonObject::erase(const std::string &key)
{
    auto it = m_fields.find(key);
    if (it != m_fields.end())
    {
        m_fields.erase(it);
    }
}
