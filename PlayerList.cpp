#include "PlayerList.hpp"

namespace Chess {
    Player& PlayerList::addPlayer(const std::string &playerName, const std::string &playerColor)
    {
        Player newPlayer(playerName, playerColor);
        mPlayerList[mNewPlayerIndex] = newPlayer;
        mNewPlayerIndex++;
        return mPlayerList[mNewPlayerIndex];
    }

    const std::string& PlayerList::getCurrentPlayerName() const
    {
        Player selectedPlayer = mPlayerList[mCurrentPlayerIndex];
        return selectedPlayer.get_player_name();
    }
}
