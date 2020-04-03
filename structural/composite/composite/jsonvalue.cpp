#include "jsonvalue.h"


JsonValue::JsonValue(std::string str)
    : m_value(str)
{

}

std::string JsonValue::toString() const
{
    std::string value = "\"" + m_value + "\"";
    return value;
}

bool JsonValue::isArray() const
{
    return false;
}

bool JsonValue::isObject() const
{
    return false;
}

std::string JsonValue::value() const
{
    return m_value;
}

void JsonValue::setValue(const std::string &value)
{
    m_value = value;
}
