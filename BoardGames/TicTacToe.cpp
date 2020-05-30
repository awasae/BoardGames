#include "TicTacToe.h"
#include "GameBase.h"
#include "UsageFunction.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


void TicTacToeBoard::print() {
	cout << *this << endl;
}

//check and see if all the moves have been played and there is no win
bool TicTacToeBoard::draw() {
	if (moves >= 9) {
		if (done() == false) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int TicTacToeBoard::turn() {
	unsigned int x;
	unsigned int y;
	//check if the prompt returns quit to end the game
	if (this->prompt(x, y) == userEnded) {
		return userEnded;
	}
	//initializing a string to store each playes move
	std::stringstream moves;
	moves << "(" << x << "," << y << ")" << ";";
	//print the mark on the board and change the player
	if (player == player1) {
		Board[y][x] = 'X';
		p1Moves += moves.str();
		std::cout << s2 << p1Moves << std::endl;
		std::cout << s3 << p2Moves << std::endl;
	}
	//print the mark on the board and change the player for next turn
	else if (player == player2) {
		Board[y][x] = 'O';
		p2Moves += moves.str();
		std::cout << s2 << p1Moves << std::endl;
		std::cout << s3 << p2Moves << std::endl;

	}
	return player;
}

ostream& operator<<(ostream& outStream, const TicTacToeBoard& game) {
	int row, col;
	outStream << endl;
	for (row = game.Boardheight ; row >= 0; --row) {
		outStream << row;
		for (col = 0; col <= game.Boardwidth; ++col) {
			outStream << game.Board[row][col];
		}
		outStream << endl;

	}
	outStream << " ";
	for (col = 0; col < game.Boardheight+1; ++col) {
		outStream << col;
	}
	outStream << endl;

	return outStream;
}




