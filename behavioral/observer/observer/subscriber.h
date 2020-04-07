#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H


class Subscriber
{
public:
    Subscriber() = default;
    virtual ~Subscriber() = default;

    Subscriber(const Subscriber & sub) = default;
    Subscriber(Subscriber && sub) = default;

    Subscriber & operator = (const Subscriber & sub) = default;
    Subscriber & operator = (Subscriber && sub) = default;

public:
    virtual void update() = 0;
};

#endif // SUBSCRIBER_H
