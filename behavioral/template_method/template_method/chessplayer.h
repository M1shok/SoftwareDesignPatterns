#ifndef CHESSPLAYER_H
#define CHESSPLAYER_H


class ChessPlayer
{
public:
    ChessPlayer() = default;
    virtual ~ChessPlayer() = default;

    ChessPlayer(const ChessPlayer & cp) = default;
    ChessPlayer(ChessPlayer && cp) = default;

    ChessPlayer & operator =(const ChessPlayer & cp) = default;
    ChessPlayer & operator =(ChessPlayer && cp) = default;

public:
    void makeMove();

    virtual void analyzePosition() = 0;
    virtual void movePiece() = 0;
};

#endif // CHESSPLAYER_H
