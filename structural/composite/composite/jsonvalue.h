#ifndef JSONVALUE_H
#define JSONVALUE_H

#include "jsonentity.h"

class JsonValue : public JsonEntity
{
public:
    JsonValue(std::string str = std::string());
    ~JsonValue() override = default;

    JsonValue(const JsonValue & jv) = default;
    JsonValue(JsonValue && jv) = default;

    JsonValue & operator = (const JsonValue & jv) = default;
    JsonValue & operator = (JsonValue && jv) = default;

public:
    std::string toString() const override;
    bool isArray() const override;
    bool isObject() const override;

    std::string value() const;
    void setValue(const std::string &value);

private:
    std::string m_value;
};

#endif // JSONVALUE_H
