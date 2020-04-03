#ifndef REMOTE_H
#define REMOTE_H


class Remote
{
public:
    Remote() = default;
    virtual ~Remote() = default;

    Remote(const Remote & remote) = default;
    Remote(Remote && remote) = default;

    Remote & operator = (const Remote & remote) = default;
    Remote & operator = (Remote && remote) = default;

public:
    virtual void togglePower() = 0;
    virtual void volumeUp() = 0;
    virtual void volumeDown() = 0;
};

#endif // REMOTE_H
