#Jennifer Riley
#TicTacToe

CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

main: TicTacToe.o
	$(CXX) $(CXXFLAGS) TicTacToe.o -o main

TicTacToe.o: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) -c TicTacToe.cpp

clean:
	rm TicTacToe.o main

