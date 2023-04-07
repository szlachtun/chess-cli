#include "GamePlay.hpp"
#include <stdexcept>

namespace Chess {
    void GamePlay::startGame()
    {
        if (!mGameStarted)
            mGameStarted = true;
        else
            throw std::logic_error("Trying to start started game");
    }

    void GamePlay::finishGame()
    {
        if (mGameStarted)
            mGameStarted = false;
        else
            throw std::logic_error("Trying to finish finished game");
    }

    const bool GamePlay::getGameState() const
    {
        return mGameStarted;
    }

    void GamePlay::incraseTurnCount()
    {
        mTurnCount++;
    }

    const int GamePlay::getTurnCount() const
    {
        return mTurnCount;
    }

    void GamePlay::resetTurnCount()
    {
        mTurnCount = kStartTurn;
    }

    void GamePlay::togglePlayerTurn()
    {
        if (mPlayerTurn == "first")
            mPlayerTurn = "second";
        else if (mPlayerTurn == "second")
            mPlayerTurn = "first";
        else
            throw std::logic_error("Turn player error");
    }

    const std::string& GamePlay::getPlayerTurn() const
    {
        return mPlayerTurn;
    }

}
