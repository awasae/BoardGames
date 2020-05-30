#include "Gomoku.h"
#include "GameBase.h"
#include "UsageFunction.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


void Gomoku::print() {
	cout << *this << endl;
}


//Check to see if all the moves have been played and there is no win
bool Gomoku::draw() {
	if (moves >= (Boardheight-1)*(Boardwidth-1)) {
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

/**int Gomoku::play() {
	//print the game board
	cout << *this << endl;
	int temp = 0;

	//while there are no moves left and and there is no winner yet we want to keep the user playing the game
	while (done() == false) {
		if (draw() == true) {
			break;
		}
		//keep changing the players turns;
		player = (player + 1) % 2;
		if (player == player1) {
			cout << "Player(X): " << endl;
			cout << "Player 1's turn. Please enter a coordinate to place 'X' on the board" << endl;
		}
		if (player == player2) {
			cout << "Player(O): " << endl;
			cout << "Player 2's turn. Please enter a coordinate to place 'O' on the board" << endl;
		}
		int j = turn();
		if (j == userEnded) {
			cout << "Game Ended " << endl;
			return userEnded;
		}
		//print the game board again
		cout << *this << endl;
	}
	cout << "Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again" << endl;
	return Failure;
}

int Gomoku::prompt(unsigned int& x, unsigned int& y) {
	string input = "";
	cout << "Please enter a valid coordinate in row,column format(i.e 1,1) or type quit to exit the game" << endl;


	cin >> input;
	cout << endl;
	if (input == "quit") {
		cout << "You have ended the game" << endl;
		return userEnded;
	}

	unsigned int temp = 0;
	unsigned int count = 0;
	for (unsigned int i = 0; i < input.length(); ++i) {
		if (input.at(i) == ',') {
			temp = i;
		
			count++;
		}

	}
	cout << temp << endl;

	
	if (input.size() <= 2) {
		cout << "Please enter a valid coordinate in a valid format(i.e 1,1)" << endl;
		unsigned int gameWidth = gWidth;
		unsigned int gameHeight = gHeight;
		prompt(x, y);
		
	}
	if (input.at(temp) != ',' || input.at(temp-1) == ' ' || input.at(temp+1) == ' ') {
		cout << "Please enter a valid coordinate in a valid format(i.e 1,1)" << endl;
		unsigned int gameWidth = gWidth;
		unsigned int gameHeight = gHeight;
		prompt(x,y);
		return incorrectInput;
	}
	if (input.at(temp) == ',') {
		input.at(temp) = ' ';
		istringstream input1(input);
		if (input1 >> x && input1 >> y) {
			if (x > gLowerLimit && x<gUpperLimit && y>gLowerLimit && y < gUpperLimit && board[y][x] == ' ') {
				moves = moves + 1;
			}
		}

		if (x > (gUpperLimit - 1) || x<(gLowerLimit + 1) || y>(gUpperLimit - 1) || y < (gLowerLimit + 1)) {
			cout << "Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions" << endl;
			unsigned int gameWidth = gWidth;
			unsigned int gameHeight = gHeight;
			prompt(x, y);
			return incorrectInput;
		}
		if (board[y][x] != ' ') {
			cout << "Coordinates Already taken by another user." << endl;
			unsigned int gameWidth = gWidth;
			unsigned int gameHeight = gHeight;
			prompt(x, y);
			return incorrectInput;

		}


	}
	return Success;

}**/

int Gomoku::turn() {
	unsigned int x;
	unsigned int y;
	//check if the prompt returns quit to end the game
	if (this->prompt(x, y) == userEnded) {
		return userEnded;
	}
	//initializing a string to store each playes move
	std::stringstream moves;
	moves <<"("<< x << "," << y <<")"<< ";";
	//print the mark on the board and change the player
	if (player == player1) {
		Board[y][x] = 'B';
		p1Moves += moves.str();
		std::cout << s << p1Moves << std::endl;
		std::cout << s1 << p2Moves << std::endl;
	}
	//print the mark on the board and change the player for next turn
	else if (player == player2) {
		Board[y][x] = 'W';
		p2Moves += moves.str();
		std::cout << s << p1Moves << std::endl;
		std::cout << s1 << p2Moves << std::endl;

	}
	return player;
}

ostream& operator<<(ostream& outStream, const Gomoku& game) {
	int row, col;
	outStream << endl;
	for (row = game.Boardwidth - 1; row >= 0; --row) {
		outStream << row;
		for (col = 0; col < game.Boardheight; ++col) {
			outStream << game.Board[row][col];
		}
		outStream << endl;

	}
	outStream << " ";
	for (col = 0; col < game.Boardheight; ++col) {
		outStream << col;
	}
	outStream << endl;

	return outStream;
}




