#include "TicTacToe.h"
#include "GameBase.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

//check for a win if there is Win then we are done
bool TicTacToeBoard::done() {
	//int row, col;
	int i;
	for (i = 1; i < 4; i++) {
		//check for row and column win for player 1
		if (player == player1) {
			//row win
			if (Board[i][1] == 'X' && (Board[i][1] == Board[i][2]) && (Board[i][2] == Board[i][3])) {

				cout << "Player 1 won " << endl;
				return true;
			}
			//column win
			if (Board[1][i] == 'X' && (Board[1][i] == Board[2][i]) && (Board[2][i] == Board[3][i])) {

				cout << "Player 1 won " << endl;
				return true;
			}
		}
		// check for row and column win for player 2
		if (player == player2) {
			//row win check
			if (Board[i][1] == 'O' && (Board[i][1] == Board[i][2]) && (Board[i][2] == Board[i][3])) {

				cout << "Player 2 won " << endl;
				return true;
			}
			//column win check
			if (Board[1][i] == 'O' && (Board[1][i] == Board[2][i]) && (Board[2][i] == Board[3][i])) {

				cout << "Player 2 won " << endl;
				return true;
			}

		}

	}
	//check for diagnols
	if (player == player1) {
		//left diagnol
		if (Board[1][1] == 'X' && Board[2][2] == 'X' && Board[3][3] == 'X') {
			cout << "Player 1 won " << endl;
			return true;

		}
		//right diagnol
		if (Board[3][1] == 'X' && Board[2][2] == 'X' && Board[1][3] == 'X') {
			cout << "Player 1 won " << endl;
			return true;

		}
	}
	else if (player == player2) {
		//left diagnol
		if (Board[1][1] == 'O' && Board[2][2] == 'O' && Board[3][3] == 'O') {
			cout << "Player 2 won " << endl;
			return true;

		}
		//right diagnol
		if (Board[3][1] == 'O' && Board[2][2] == 'O' && Board[1][3] == 'O') {
			cout << "Player 2 won " << endl;
			return true;

		}

	}
	return false;
}



