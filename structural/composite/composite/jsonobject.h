#ifndef JSONOBJECT_H
#define JSONOBJECT_H

#include <map>
#include "jsonentity.h"

class JsonObject : public JsonEntity
{
public:
    JsonObject() = default;
    ~JsonObject() override = default;

    JsonObject(const JsonObject & jo) = default;
    JsonObject(JsonObject && jo) = default;

    JsonObject & operator = (const JsonObject & jo) = default;
    JsonObject & operator = (JsonObject && jo) = default;

public:
    std::string toString() const override;
    bool isArray() const override;
    bool isObject() const override;

    JsonEntity * value(const std::string &key) const;
    void insert(const std::string & key, JsonEntity * value);
    void erase(const std::string & key);

private:
    std::map<const std::string, JsonEntity*> m_fields;
};

#endif // JSONOBJECT_H
