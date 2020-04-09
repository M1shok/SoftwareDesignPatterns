#ifndef REQUEST_H
#define REQUEST_H

#include <string>

class RequestHandler;

class Request
{
public:
    Request() = default;
    virtual ~Request() = default;

    Request(const Request & rh) = default;
    Request(Request && rh) = default;

    Request & operator = (const Request & rh) = default;
    Request & operator = (Request && rh) = default;

public:
    virtual void handle(RequestHandler * handler) = 0;
    virtual std::string requestType() const = 0;
};

#endif // REQUEST_H
