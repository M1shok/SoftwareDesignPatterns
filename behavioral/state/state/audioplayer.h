#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

class State;

class AudioPlayer
{
public:
    AudioPlayer();
    virtual ~AudioPlayer();

    AudioPlayer(const AudioPlayer & ap) = delete;
    AudioPlayer(AudioPlayer && ap) = default;

    AudioPlayer & operator = (const AudioPlayer & ap) = delete;
    AudioPlayer & operator = (AudioPlayer && ap) = default;

public:
    void clickLock();
    void clickPlay();

    void changeState(State * state);

private:
    State * m_state;

};

#endif // AUDIOPLAYER_H
