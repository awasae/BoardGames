#include "UsageFunction.h"






int usageMethod(char* progName) {
	cout << "Incorrect File Name." << endl;
	cout << "Please enter the correct File Name - 'LAb04.exe' space 'TicTacToe' or 'Gomoku' " << endl;
	return incorrectArgs;


}
int success() {
	cout << "Program ran successfully" << endl;
	return Success;
}

int failure() {
	cout << "Failed to run the Program" << endl;
	return Failure;
}


