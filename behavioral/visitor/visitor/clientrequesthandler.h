#ifndef CLIENTREQUESTHANDLER_H
#define CLIENTREQUESTHANDLER_H

#include "requesthandler.h"



class ClientRequestHandler : public RequestHandler
{
public:
    ClientRequestHandler();

public:
    void onRequest(Request *request) override;
    void handle(const TestRequest &request) override;
};

#endif // CLIENTREQUESTHANDLER_H
