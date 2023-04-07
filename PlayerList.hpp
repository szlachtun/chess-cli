#pragma once
#include <string>
#include <array>

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
