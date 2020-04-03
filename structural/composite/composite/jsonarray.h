#ifndef JSONARRAY_H
#define JSONARRAY_H

#include <vector>
#include "jsonentity.h"

class JsonArray : public JsonEntity
{
public:
    JsonArray() = default;
    ~JsonArray() override = default;

    JsonArray(const JsonArray & ja) = default;
    JsonArray(JsonArray && ja) = default;

    JsonArray & operator = (const JsonArray & ja) = default;
    JsonArray & operator = (JsonArray && ja) = default;

public:
    std::string toString() const override;
    bool isArray() const override;
    bool isObject() const override;

    void push_back(JsonEntity * const je);
    const JsonEntity * operator [](size_t i) const;
    JsonEntity * operator [](size_t i);

private:
    std::vector<JsonEntity *> m_entities;

};

#endif // JSONARRAY_H
