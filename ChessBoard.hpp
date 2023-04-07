#pragma once
#include <string>

namespace Chess {
    class ChessBoard
    {
    public:
        ChessBoard() = default;

        void setGameBoardPiece(int x, int y, std::string ChessPieceName);
        const std::string& getGameBoardPiece(int x, int y) const;

    private:
        std::string mGameBoard[8][8] {};
    };
}
