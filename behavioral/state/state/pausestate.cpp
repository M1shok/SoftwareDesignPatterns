#include "lockedstate.h"
#include "pausestate.h"
#include "playingstate.h"
#include <iostream>

PauseState::PauseState(AudioPlayer *player)
    : State(player)
{

}

void PauseState::clickLock()
{
    std::cout << "Locking the player" << std::endl;
    m_player->changeState(new LockedState(m_player));
}

void PauseState::clickPlay()
{
    std::cout << "Playback unpaused" << std::endl;
    m_player->changeState(new PlayingState(m_player));
    this->doNothing();
}

void PauseState::doNothing()
{
    nothing = 0;
}
