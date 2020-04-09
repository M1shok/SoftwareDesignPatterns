#ifndef TESTREQUEST_H
#define TESTREQUEST_H

#include "request.h"

class TestRequest : public Request
{
public:
    TestRequest() = default;

public:
    std::string requestType() const override;
    void handle(RequestHandler *handler) override;
};

#endif // TESTREQUEST_H
