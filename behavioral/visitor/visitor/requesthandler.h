#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

class Request;
class TestRequest;

class RequestHandler
{
public:
    RequestHandler() = default;
    virtual ~RequestHandler() = default;

    RequestHandler(const RequestHandler & rh) = default;
    RequestHandler(RequestHandler && rh) = default;

    RequestHandler & operator = (const RequestHandler & rh) = default;
    RequestHandler & operator = (RequestHandler && rh) = default;

public:
    virtual void onRequest(Request * request) = 0;

    virtual void handle(const TestRequest & request) = 0;
};

#endif // REQUESTHANDLER_H
