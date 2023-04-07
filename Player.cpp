#include "Player.hpp"

namespace Chess {

    Player::Player(const std::string& playerName, const std::string& playerColor)
        : mPlayerName(playerName)
        , mPlayerColor(playerColor)
    {
    }

    const std::string& Player::get_player_name() const
    {
        return mPlayerName;
    }
}
