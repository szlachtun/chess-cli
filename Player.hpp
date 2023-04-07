#pragma once
#include <string>

namespace Chess {
    class Player
    {
    public:
        Player() = default;
        Player(const std::string& playerName, const std::string& playerColor, int playerID);
        const std::string& get_player_name() const;
        const int get_player_id() const;

    private:
        std::string mPlayerName;
        std::string mPlayerColor;
        int mPlayerID;
    };
}
