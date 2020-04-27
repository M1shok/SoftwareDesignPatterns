#include "audioplayer.h"
#include "pausestate.h"
#include "state.h"

AudioPlayer::AudioPlayer()
    : m_state(new PauseState(this))
{

}

AudioPlayer::~AudioPlayer()
{
    delete m_state;
}

void AudioPlayer::clickLock()
{
    m_state->clickLock();
}

void AudioPlayer::clickPlay()
{
    m_state->clickPlay();
}

void AudioPlayer::changeState(State *state)
{
    delete m_state;
    m_state = state;
}
