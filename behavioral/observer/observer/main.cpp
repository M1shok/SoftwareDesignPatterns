#include "publisher.h"
#include "loggersubscriber.h"

int main()
{
    Publisher publisher;
    LoggerSubscriber logger;
    publisher.subscribe(&logger);
    publisher.notifySubscribers();
    publisher.unsubscribe(&logger);
    publisher.notifySubscribers();
    return 0;
}
