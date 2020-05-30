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

class Gomoku : public GameBase {


	// initialize the constructors final values
private:
	//gameBoard dimensions
	//**char board[20][20] = { ' ' };
	//int Boardwidth;
	//int Boardheight;
	//int win;
	//int player = player2;
	//unsigned int xCord;
	//unsigned int yCord;
	//string s = "Player(X): ";
	//string s1 = "Player(O): ";
	//std::string p1Moves;
	//std::string p2Moves;
	//int moves;
	



public:
	// defining  the required functions
	Gomoku();
	Gomoku(int x, int y);
	Gomoku(int x, int y, int z);
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	virtual void print();
	//int play();
	//int prompt(unsigned int& x, unsigned int& y);
	



	//friend function
	friend std::ostream& operator<<(ostream& out, const Gomoku& game);





};
ostream& operator<< (ostream& out, const Gomoku& game);
