#include "Player.hpp"

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
}
