#include "lockedstate.h"
#include "pausestate.h"
#include "playingstate.h"
#include <iostream>

PlayingState::PlayingState(AudioPlayer *player)
    : State(player)
{

}

void PlayingState::clickLock()
{
    std::cout << "Locking the player" << std::endl;
    m_player->changeState(new LockedState(m_player));
}

void PlayingState::clickPlay()
{
    std::cout << "Playback paused" << std::endl;
    m_player->changeState(new PauseState(m_player));
}
