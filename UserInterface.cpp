#include <iostream>
#include <stdexcept>
#include <string>
#include "Player.hpp"
#include "ChessBoard.hpp"
#include "GamePlay.hpp"

int main()
{
    std::string name;
    std::cout << "Enter first player name: ";
    std::cin >> name;
    Chess::Player player1 = Chess::Player(name, "white");

    std::cout << "Enter second player name: ";
    std::cin >> name;
    Chess::Player player2 = Chess::Player(name, "black");

    Chess::GamePlay game = Chess::GamePlay();

    std::cout << "Game starts: " << game.getPlayerTurn();
    return 0;
}
