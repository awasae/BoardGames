#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ostream>
#include "UsageFunction.h"
#include "GameBase.h"

using namespace std;

// make the TicTacToe board object

class TicTacToeBoard : public GameBase {


	// initialize the constructors final values
private:
	/**gameBoard dimensions
	char board[5][5] = { ' ' };
	int Boardwidth;
	int Boardheight;
	int win = 3;
	int player = player2;
	//unsigned int xCord;
	//unsigned int yCord;
	string s = "Player(X): ";
	string s1 = "Player(O): ";
	std::string p1Moves;
	std::string p2Moves;**/



public:
	// defining  the required functions
	TicTacToeBoard();
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	virtual void print();



	//friend function
	friend std::ostream& operator<<(ostream& out, const TicTacToeBoard& game);





};
ostream& operator<< (ostream& out, const TicTacToeBoard& game);
