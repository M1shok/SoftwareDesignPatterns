#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <set>
class Subscriber;

class Publisher
{
public:
    Publisher() = default;
    virtual ~Publisher() = default;

    Publisher(const Publisher & pub) = default;
    Publisher(Publisher && pub) = default;

    Publisher & operator = (const Publisher & pub) = default;
    Publisher & operator = (Publisher && pub) = default;

public:
    void subscribe(Subscriber * subscriber);
    void unsubscribe(Subscriber * subscriber);
    void notifySubscribers();

private:
    std::set<Subscriber *> m_subscribers;
};

#endif // PUBLISHER_H
