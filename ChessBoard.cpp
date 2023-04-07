#include "ChessBoard.hpp"
#include <stdexcept>

namespace Chess {
    void ChessBoard::setGameBoardPiece(int x, int y, std::string ChessPieceName)
    {
        if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
            mGameBoard[y][x] = ChessPieceName;
        else if (!(x >= 0 && x <= 7) && !(y >= 0 && y <= 7))
            throw std::logic_error("Wrong x and y index");
        else if (!(x >= 0 && x <= 7))
            throw std::logic_error("Wrong x index");
        else
            throw std::logic_error("Wrong y index");
    }

    const std::string& ChessBoard::getGameBoardPiece(int x, int y) const
    {
        if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
            return mGameBoard[y][x];
        else if (!(x >= 0 && x <= 7) && !(y >= 0 && y <= 7))
            throw std::logic_error("Wrong x and y index");
        else if (!(x >= 0 && x <= 7))
            throw std::logic_error("Wrong x index");
        else
            throw std::logic_error("Wrong y index");
    }
}
