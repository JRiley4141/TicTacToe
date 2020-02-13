#Jennifer Riley
#TicTacToe



CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings)

all: TicTacToe

clean:
	rm TicTacToe

main: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o TicTacToe


