CC = g++
CFLAGS = -Wall -std=c++11
SRC = ./src
INCLUDE = ./include

main: main.o GameBoard.o
	$(CC) $(CFLAGS) -o main main.o GameBoard.o

main.o: main.cpp src/GameBoard.cpp $(INCLUDE)/Gameboard.h
	$(CC) $(CFLAGS) -c -I$(INCLUDE) main.cpp

GameBoard.o: src/GameBoard.cpp $(INCLUDE)/Gameboard.h
	$(CC) $(CFLAGS) -c -I$(INCLUDE) src/GameBoard.cpp

run:
	./main