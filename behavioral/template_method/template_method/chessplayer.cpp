#include "chessplayer.h"

void ChessPlayer::makeMove()
{
    analyzePosition();
    movePiece();
}
