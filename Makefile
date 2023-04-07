all: main

main: ChessBoard.o GamePlay.o PlayerList.o UserInterface.o
	g++ -o chess ChessBoard.o GamePlay.o PlayerList.o UserInterface.o
ChessBoard.o: ChessBoard.cpp
	g++ -c ChessBoard.cpp

GamePlay.o: GamePlay.cpp
	g++ -c GamePlay.cpp

PlayerList.o: PlayerList.cpp
	g++ -c PlayerList.cpp

UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp

clean:
	rm -f chess *.o *~
