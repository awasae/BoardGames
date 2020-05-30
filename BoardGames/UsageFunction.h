#pragma once
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;


enum file { progName, inputName, correctName };

enum players { player1 = 1, player2 = 0 };

enum book { Success, Failure, tooManyArgs = 2, incorrectArgs, inCorrectName, desiredLength, draw, userEnded, incorrectInput };

//enum TicTacboardFeatures { movesRemaining = 0, width = 5, height = 5, totalMoves = 9, lLimit = 0, uLimit = 4 };

enum GomokuFeatures { movesRemaining = 0, gWidth = 19, gHeight=19, gtotalMoves=19, gLowerLimit=0, gUpperLimit=20};



int success();

int failure();

int usageMethod(char* progName);


