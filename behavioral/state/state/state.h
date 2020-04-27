#ifndef STATE_H
#define STATE_H

#include "audioplayer.h"

class State
{
public:
    State(AudioPlayer * player);
    virtual ~State() = default;

public:
    virtual void clickLock() = 0;
    virtual void clickPlay() = 0;

protected:
    AudioPlayer * const m_player;
};

#endif // STATE_H
