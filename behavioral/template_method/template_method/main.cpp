#include "beginnerchessplayer.h"
#include "grandmaster.h"

int main()
{
    ChessPlayer * beginner = new BeginnerChessPlayer();
    ChessPlayer * grandmaster = new Grandmaster();

    beginner->makeMove();
    grandmaster->makeMove();

    return 0;
}
