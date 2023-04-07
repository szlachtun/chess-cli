#pragma once
#include "Player.hpp"
#include <string>
#include <array>

namespace Chess {
    class PlayerList
    {
    public:
        Player& addPlayer(const std::string& playerName, const std::string& playerColor);
        const std::string& getCurrentPlayerName() const;
    
    private:
        std::array<Player, 2> mPlayerList;
        int mNewPlayerIndex = 0;
        int mCurrentPlayerIndex = 0;

    };
}
