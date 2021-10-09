CC = g++
CFLAGS = -Wall -std=c++11
SRC = ./src
INCLUDE = ./include

main: main.o GameBoard.o TicTacToe.o
	$(CC) $(CFLAGS) -o main main.o GameBoard.o TicTacToe.o

main.o: main.cpp src/GameBoard.cpp $(INCLUDE)/Gameboard.h
	$(CC) $(CFLAGS) -c -I$(INCLUDE) main.cpp

GameBoard.o: src/GameBoard.cpp $(INCLUDE)/Gameboard.h
	$(CC) $(CFLAGS) -c -I$(INCLUDE) src/GameBoard.cpp

TicTacToe.o: src/TicTacToe.cpp $(INCLUDE)/TicTacToe.h
	$(CC) $(CFLAGS) -c -I$(INCLUDE) src/TicTacToe.cpp

run:
	./main