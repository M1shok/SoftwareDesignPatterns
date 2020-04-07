#include "publisher.h"
#include "subscriber.h"

void Publisher::subscribe(Subscriber *subscriber)
{
    m_subscribers.insert(subscriber);
}

void Publisher::unsubscribe(Subscriber *subscriber)
{
    m_subscribers.erase(subscriber);
}

void Publisher::notifySubscribers()
{
    for (Subscriber * subscriber: m_subscribers)
    {
        subscriber->update();
    }
}
