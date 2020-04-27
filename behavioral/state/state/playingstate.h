#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include "state.h"

class PlayingState : public State
{
public:
    PlayingState(AudioPlayer * player);
    ~PlayingState() override = default;

public:
    void clickLock() override;
    void clickPlay() override;
};

#endif // PLAYINGSTATE_H
