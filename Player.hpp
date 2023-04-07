#pragma once
#include <string>

namespace Chess {
    class Player
    {
    public:
        Player() = default;
        Player(const std::string& playerName, const std::string& playerColor);
        const std::string& get_player_name() const;
    private:
        std::string mPlayerName;
        std::string mPlayerColor;
    };
}
