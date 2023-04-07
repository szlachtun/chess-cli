#include "Player.hpp"

namespace Chess {
    Player::Player(const std::string& playerName, const std::string& playerColor)   
        : mPlayerName(playerName)
        , mPlayerColor(playerColor)
    {
    }
}
