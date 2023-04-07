all: main

main: ChessBoard.o GamePlay.o Player.o UserInterface.o
	g++ -o chess ChessBoard.o GamePlay.o Player.o UserInterface.o
 
ChessBoard.o: ChessBoard.cpp
	g++ -c ChessBoard.cpp

GamePlay.o: GamePlay.cpp
	g++ -c GamePlay.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp

clean:
	rm -f chess *.o *~
