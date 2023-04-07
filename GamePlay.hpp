#pragma once
#include <string>
// #include "ChessBoard.hpp"

namespace Chess {
    const int kStartTurn = 1;
    class GamePlay
    {
    public:
        GamePlay() = default;

        void startGame();
        void finishGame();
        const bool getGameState() const;

        void incraseTurnCount();
        const int getTurnCount() const;
        void resetTurnCount();

        void togglePlayerTurn();
        const std::string& getPlayerTurn() const;

    private:
        // ChessBoard mChessBoard;
        bool mGameStarted = false;
        int mTurnCount {kStartTurn};
        std::string mPlayerTurn = "first";
    };
}
