#ifndef BEGINNERCHESSPLAYER_H
#define BEGINNERCHESSPLAYER_H

#include "chessplayer.h"

class BeginnerChessPlayer : public ChessPlayer
{
public:
    BeginnerChessPlayer() = default;
    ~BeginnerChessPlayer() override = default;

    BeginnerChessPlayer(const BeginnerChessPlayer & cp) = default;
    BeginnerChessPlayer(BeginnerChessPlayer && cp) = default;

    BeginnerChessPlayer & operator =(const BeginnerChessPlayer & cp) = default;
    BeginnerChessPlayer & operator =(BeginnerChessPlayer && cp) = default;

public:
    void analyzePosition() override;
    void movePiece() override;
};

#endif // BEGINNERCHESSPLAYER_H
