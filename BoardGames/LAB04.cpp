// LAB03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Gomoku.h"
#include "doneGomoku.h"
#include "Board.h"
#include "UsageFunction.h"
#include "GameBase.h"
#include "TicTacToe.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>




using namespace std;
// play the game if correct file name is input
int main(int argc, char** argv) {
	if (argc <= 1) {
		return usageMethod(argv[0]);
	}
	GameBase* game;
	try {
		game = GameBase::game(argc, argv);
	}
	catch (...) { return incorrectArgs; }
	if (game != 0) {
		game->play();
		delete game;
		return 0;
	}
	else {
		return usageMethod(argv[0]);
	}

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
