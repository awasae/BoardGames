#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ostream>
#include "UsageFunction.h"
#include <memory>
//#include "Gomoku.h"


using namespace std;



class GameBase {


	// initialize the constructors final values
protected:
	//gameBoard dimensions
	char** Board;
	int Boardwidth;
	int Boardheight;
	int player = player2;
	//unsigned int xCord;
	//unsigned int yCord;
	string s = "Player(B): ";
	string s1 = "Player(W): ";
	string s2 = "Player(X): ";
	string s3 = "Player(O): ";
	std::string p1Moves;
	std::string p2Moves;
	int moves;
	char b;
	char w;
	int win;




public:
	// defining  the required functions
	GameBase();
	GameBase(unsigned int width, unsigned int height);
	GameBase(unsigned int width, unsigned int height, unsigned int win);
	virtual bool done()=0;
	virtual bool draw()=0;
	virtual void print()=0;
	virtual int turn()=0;
	int play();
	int prompt(unsigned int& x, unsigned int& y);
	static class GameBase* game(int argc, char* argcv[]);
};
