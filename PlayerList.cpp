#include "PlayerList.hpp"
#include <stdexcept>
#include <iostream>

namespace Chess {

    Player::Player(const std::string& playerName, const std::string& playerColor, int playerID)
        : mPlayerName(playerName)
        , mPlayerColor(playerColor)
        , mPlayerID(playerID)
    {
    }

    const std::string& Player::get_player_name() const
    {
        return mPlayerName;
    }

    const int Player::get_player_id() const
    {
        return mPlayerID;
    }

    Player& PlayerList::addPlayer(const std::string &playerName, const std::string &playerColor)
    {
        Player newPlayer(playerName, playerColor, mNewPlayerIndex);
        mPlayerList[mNewPlayerIndex] = newPlayer;
        mNewPlayerIndex++;
        return mPlayerList[mNewPlayerIndex];
    }

    const std::string& PlayerList::getCurrentPlayerName() const
    {
        for (const auto& selectedPlayer : mPlayerList){
            if (selectedPlayer.get_player_id() == mCurrentPlayerIndex)
                return selectedPlayer.get_player_name();
        }
        throw std::invalid_argument("");
    }
}
