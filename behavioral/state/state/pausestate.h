#ifndef READYSTATE_H
#define READYSTATE_H

#include "state.h"

class PauseState : public State
{
public:
    PauseState(AudioPlayer * player);
    ~PauseState() override = default;

public:
    void clickLock() override;
    void clickPlay() override;

private:
    void doNothing();

private:
    int nothing;
};

#endif // READYSTATE_H
