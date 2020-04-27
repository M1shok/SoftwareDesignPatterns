#ifndef LOCKEDSTATE_H
#define LOCKEDSTATE_H

#include "state.h"

class LockedState : public State
{
public:
    LockedState(AudioPlayer * player);
    ~LockedState() override = default;

public:
    void clickLock() override;
    void clickPlay() override;
};

#endif // LOCKEDSTATE_H
