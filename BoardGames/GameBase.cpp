#include "GameBase.h"
#include "Gomoku.h"
#include "TicTacToe.h"
#include "UsageFunction.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>




GameBase::GameBase(unsigned int width, unsigned int height) 
	: Boardwidth(width), Boardheight(height), moves(0) {
	win = 5;
	b = 'B';
	w = 'W';
	Board = new char* [height];
		int i, j;
		for (i = 0; i < Boardheight; ++i) {
			Board[i] = new char[width];
			
			for (j = 0; j < Boardwidth; ++j) {
				Board[i][j] = (' ');
			
		}
	}

}

GameBase::GameBase(unsigned int width, unsigned int height, unsigned int win_)
	: Boardwidth(width), Boardheight(height), moves(0), win(win_) {
	b = 'B';
	w = 'W';
	Board = new char* [height];
	int i, j;
	for (i = 0; i < Boardheight; ++i) {
		Board[i] = new char[width];

		for (j = 0; j < Boardwidth; ++j) {
			Board[i][j] = (' ');

		}
	}

}
//constructor for TicTacToe
GameBase::GameBase() {
	win = 3;
	b = 'X';
	w = 'O';
	moves = 0;
	Board = new char* [5];
	Boardwidth = 4;
	Boardheight = 4;
	int i, j;
	for (i = 0; i < 5; ++i) {
		Board[i] = new char[5];
		for (j = 0; j < 5; ++j) {
			Board[i][j] = (' ');
		}
	}
}

	





int GameBase::play() {
	//print the game board
	print();
	int temp = 0;

	//while there are no moves left and and there is no winner yet we want to keep the user playing the game
	while (done() == false) {
		if (draw() == true) {
			break;
		}
		//keep changing the players turns;
		player = (player + 1) % 2;
		if (player == player1) {
			cout << "Player("<<b<<") :" << endl;
			cout << "Player 1's turn. Please enter a coordinate to place "<<b<< " on the board OR type 'quit' to exit the game"  << endl;
		}
		if (player == player2) {
			cout << "Player(" << w << ") :" << endl;
			cout << "Player 2's turn. Please enter a coordinate to place "<<w<<" on the board OR type 'quit' to exit the game" << endl;
		}
		int j = turn();
		if (j == userEnded) {
			cout << "Game Ended " << endl;
			return userEnded;
		}
		
		//print the game board again
		print();
	}
	cout << "Total Moves Played: " << moves << endl;
	cout << "Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again" << endl;
	return Success;
}

int GameBase::prompt(unsigned int& x, unsigned int& y) {
	
	std::string input = "";
	//cout << "Please enter a valid coordinate in row,column format(i.e 1,1) or type quit to exit the game" << endl;

	std::getline(std::cin,input);
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
	

	


	if (input.size() <= 2) {
		cout << "Please enter a valid coordinate in a valid format(i.e 1,1)" << endl;
		unsigned int gameWidth = gWidth;
		unsigned int gameHeight = gHeight;
		return prompt(x, y);

	}

	if (input.at(temp) != ',' || input.at(temp - 1) == ' '  || input.at(temp + 1) == ' ') {
		cout << "Please enter a valid coordinate in a valid format(i.e 1,1)" << endl;
		unsigned int gameWidth = gWidth;
		unsigned int gameHeight = gHeight;
		return prompt(x, y);
	}
	if (input.at(temp) == ',' && count==1) {
		input.at(temp) = ' ';
		istringstream input1(input);
		if (input1 >> x && input1 >> y) {
			
			if (x > gLowerLimit && x< (unsigned)Boardwidth && y>gLowerLimit && y < (unsigned)Boardheight &&  Board[y][x] == ' ') {
				//cout << "Breaking Here" << endl;
				moves = moves + 1;
				return Success;
			}
		}

		if (x > ((unsigned)Boardwidth-1) || x<(gLowerLimit + 1) || y>((unsigned)Boardheight - 1) || y < (gLowerLimit + 1)) {
			cout << "Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions" << endl;
			unsigned int gameWidth = gWidth;
			unsigned int gameHeight = gHeight;
			return prompt(x, y);
			
		}
		 if (Board[y][x] != ' ') {
			cout << "Coordinates Already taken by another user.Please enter valid cordinates" << endl;
			unsigned int gameWidth = gWidth;
			unsigned int gameHeight = gHeight;
			return prompt(x, y);

		}


	}
	else {
		unsigned int gameWidth = gWidth;
		unsigned int gameHeight = gHeight;
		return prompt(x, y);
	}

	return Success;


}

class GameBase* GameBase::game(int argc, char* argv[]) {
	string command = "Gomoku";
	string command1 = "TicTacToe";
	GameBase* game;
	if (argv[1] == command) {

		int a;
		int b;
		int c;
		if (argc > 2) 
		{
			a = atoi(argv[2]);
			if (a <= 0 || a <3) {
				cout << "Please enter a valid Dimension. Minimun Board Dimension is 3" << endl;
				throw 0;

			}
			a++;
		}
		else {
			a = 20;
		}
		if (argc > 3) {
			b = atoi(argv[3]);
			if (b <= 0) {
				cout << "Please enter a valid Win Point" << endl;
				return 0;
			}
			if (b > 0 && b < 3) {
				cout << "Minimum Win Point is 3. Please enter 3 or more." << endl;
				throw 0;
			}
		}
		else {
			b = 5;
		}
		if (argc > 4) {
			c = atoi(argv[4]);
		}
		else {
			c = 5;
		}
		try {
			game = (GameBase*) new Gomoku(a,a,b);
		}
		catch (...) {
			throw incorrectArgs;
		}
		return game;
	}
	if (argv[1] == command1) {
		if (argc != tooManyArgs) {
			cout << "please enter correct File name" << endl;
			return 0;
		}
		try {
			game = (GameBase*) new TicTacToeBoard();
		}
		catch (...) { throw incorrectArgs; }
		return game;
	}
	return 0;

}



