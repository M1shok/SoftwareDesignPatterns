#ifndef JSONENTITY_H
#define JSONENTITY_H

#include <string>

class JsonEntity
{
public:
    JsonEntity() = default;
    virtual ~JsonEntity() = default;

    JsonEntity(const JsonEntity &je) = default;
    JsonEntity(JsonEntity && je) = default;

    JsonEntity & operator = (const JsonEntity &je) = default;
    JsonEntity & operator = (JsonEntity && je) = default;

public:
    virtual std::string toString() const = 0;
    virtual bool isArray() const = 0;
    virtual bool isObject() const = 0;
};

#endif // JSONENTITY_H
