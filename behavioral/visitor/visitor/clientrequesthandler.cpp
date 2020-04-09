#include "clientrequesthandler.h"
#include "request.h"
#include <iostream>

ClientRequestHandler::ClientRequestHandler()
{

}

void ClientRequestHandler::onRequest(Request *request)
{
    request->handle(this);
}

void ClientRequestHandler::handle(const TestRequest &request)
{
    std::cout << "Test request is being handled" << std::endl;
}
