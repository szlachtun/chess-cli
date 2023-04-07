all: main

main: ChessBoard.o GamePlay.o PlayerList.o UserInterface.o Player.o
	g++ -o chess ChessBoard.o GamePlay.o PlayerList.o UserInterface.o Player.o
 
ChessBoard.o: ChessBoard.cpp
	g++ -c ChessBoard.cpp

GamePlay.o: GamePlay.cpp
	g++ -c GamePlay.cpp

PlayerList.o: PlayerList.cpp
	g++ -c PlayerList.cpp

UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

clean:
	rm -f chess *.o *~
