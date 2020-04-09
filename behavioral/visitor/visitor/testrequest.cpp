#include "testrequest.h"
#include "requesthandler.h"

std::string TestRequest::requestType() const
{
    return "TestRequest";
}

void TestRequest::handle(RequestHandler *handler)
{
    handler->handle(*this);
}
