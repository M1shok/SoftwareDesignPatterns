#ifndef GRANDMASTER_H
#define GRANDMASTER_H

#include "chessplayer.h"



class Grandmaster : public ChessPlayer
{
public:
    Grandmaster() = default;
    ~Grandmaster() override = default;

    Grandmaster(const Grandmaster & cp) = default;
    Grandmaster(Grandmaster && cp) = default;

    Grandmaster & operator =(const Grandmaster & cp) = default;
    Grandmaster & operator =(Grandmaster && cp) = default;

public:
    void analyzePosition() override;
    void movePiece() override;
};

#endif // GRANDMASTER_H
