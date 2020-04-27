#include "lockedstate.h"
#include "pausestate.h"
#include <iostream>

LockedState::LockedState(AudioPlayer *player)
    : State(player)
{

}

void LockedState::clickLock()
{
    std::cout << "Unlocking the player" << std::endl;
    m_player->changeState(new PauseState(m_player));
}

void LockedState::clickPlay()
{
    std::cout << "Ignoring the play button click in the locked state" << std::endl;
}
