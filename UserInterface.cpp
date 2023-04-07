#include <iostream>
#include <stdexcept>
#include <string>
#include "PlayerList.hpp"
#include "ChessBoard.hpp"
#include "GamePlay.hpp"

int main()
{
    Chess::PlayerList currentPlayer;
    std::string name;
    std::cout << "Enter first player name (will play on white side): ";
    std::cin >> name;
    currentPlayer.addPlayer(name, "white");

    std::cout << "Enter second player name (will play on black side): ";
    std::cin >> name;
    currentPlayer.addPlayer(name, "black");

    Chess::GamePlay game = Chess::GamePlay();

    std::cout << "Game starts: " << currentPlayer.getCurrentPlayerName();
    return 0;
}
