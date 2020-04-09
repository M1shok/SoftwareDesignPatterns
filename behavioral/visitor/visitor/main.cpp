#include "testrequest.h"
#include "clientrequesthandler.h"

int main()
{
    ClientRequestHandler rh;
    Request * request = new TestRequest;
    rh.onRequest(request);
    delete request;
    return 0;
}
