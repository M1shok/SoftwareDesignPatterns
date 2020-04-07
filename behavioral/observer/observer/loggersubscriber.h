#ifndef LOGGERSUBSCRIBER_H
#define LOGGERSUBSCRIBER_H

#include "subscriber.h"

class LoggerSubscriber : public Subscriber
{
public:
    LoggerSubscriber() = default;
    ~LoggerSubscriber() override = default;

    LoggerSubscriber(const LoggerSubscriber & sub) = default;
    LoggerSubscriber(LoggerSubscriber && sub) = default;

    LoggerSubscriber & operator = (const LoggerSubscriber & sub) = default;
    LoggerSubscriber & operator = (LoggerSubscriber && sub) = default;

public:
    void update() override;
};

#endif // LOGGERSUBSCRIBER_H
