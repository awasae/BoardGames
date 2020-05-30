
#include "Gomoku.h"
#include "GameBase.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

bool Gomoku::done() {
	int i, j,k,l;
	int a = (win / 2);
	for (i = 0; i < Boardwidth; i++) {
		for (j =a ; j < Boardheight-a; j++) {
			if (player == player1) {
				int count = 0;
				//row win
				for (k = j - a; k <= j + a; k++) {
					if (Board[i][k] == 'B') {
						count++;
					}
			

				}
				if (count == win) {
					cout << "Player 1 won " << endl;
					return true;
				}
			}
			if (player == player2) {
				int count = 0;
				//row win
				for (k = j - a; k <= j + a; k++) {
					if (Board[i][k] == 'W') {
						count++;
					}

				}
				if (count == win) {
					cout << "Player 2 won " << endl;
					return true;
				}
			}
		}
	}
	//Column Win
	for (i = a; i < Boardwidth-a; i++) {
		for (j = 0; j < Boardheight; j++) {
			//check for row and column win for player 1
			if (player == player1) {
				int count = 0;
				//row win
				for (k = i - a; k <= i + a; k++) {
					if (Board[k][j] == 'B') {
						count++;
					}

				}
				if (count == win) {
					cout << "Player 1 won " << endl;
					return true;
				}
				//Column win
				/**if (Board[i][j] == 'X' && (Board[i][j] == Board[i + 1][j]) && (Board[i + 1][j] == Board[i + 2][j])
					&& Board[i][j] == Board[i - 1][j] && Board[i - 1][j] == Board[i - 2][j]) {

					cout << "Player 1 won " << endl;
					return true;
				}**/
			}
			if (player == player2) {
				int count = 0;
				//row win
				for (k = i - a; k <= i + a; k++) {
					if (Board[k][j] == 'W') {
						count++;
					}

				}
				if (count == win) {
					cout << "Player 2 won " << endl;
					return true;
				}
				//row win
				/**if (Board[i][j] == 'O' && (Board[i][j] == Board[i + 1][j]) && (Board[i + 1][j] == Board[i + 2][j])
					&& Board[i][j] == Board[i - 1][j] && Board[i - 1][j] == Board[i - 2][j]) {

					cout << "Player 2 won " << endl;
					return true;
				}**/
			}
		}
	}
	//Check for positive diagnol
	for (i = a; i < Boardwidth-a; i++) {
		for (j = a; j < Boardheight-a; j++) {
			//check for row and column win for player 1
			if (player == player1) {
				//Column win
				int count = 0;
				//row win
				for (k = i - a; k <= i + a; k++) {
					if (Board[k][k] == 'B') {
						count++;
					}

				}
				if (count == win) {
					cout << "Player 1 won " << endl;
					return true;
				}
				/**if (Board[i][j] == 'X' && (Board[i][j] == Board[i + 1][j + 1]) && (Board[i + 1][j + 1] == Board[i + 2][j + 2])
					&& Board[i][j] == Board[i - 1][j - 1] && Board[i - 1][j - 1] == Board[i - 2][j - 2]) {

					cout << "Player 1 won " << endl;
					return true;
				}**/

			}
			if (player == player2) {
				//Column win
				int count = 0;
				//row win
				for (k = i - a; k <= i + a; k++) {
					if (Board[k][k] == 'W') {
						count++;
					}

				}
				if (count == win) {
					cout << "Player 2 won " << endl;
					return true;
				}
				/**if (Board[i][j] == 'O' && (Board[i][j] == Board[i + 1][j + 1]) && (Board[i + 1][j + 1] == Board[i + 2][j + 2])
					&& Board[i][j] == Board[i - 1][j - 1] && Board[i - 1][j - 1] == Board[i - 2][j - 2]) {

					cout << "Player 2 won " << endl;
					return true;
				}**/

			}
		}
	}

	//Check for Negative Diagnol
	for (i = a; i < Boardwidth-a; i++) {
		for (j = a; j < Boardheight-a; j++) {
			//check for row and column win for player 1
			if (player == player1) {
				//Column win
				int count = 0;
				//row win
				for (k = i + a; k >= i - a; k--) {
					for (l = j - a; l <= j + a; l++) {
						if (Board[k][l] == 'B') {
							count++;
						}

					}
					if (count == win) {
						cout << "Player 1 won " << endl;
						return true;
					}
				}
				if (Board[i][j] == 'B' && (Board[i][j] == Board[i + 1][j - 1]) && (Board[i + 1][j - 1] == Board[i + 2][j - 2])
					&& Board[i][j] == Board[i - 1][j + 1] && Board[i - 1][j + 1] == Board[i - 2][j + 2]) {

					cout << "Player 1 won " << endl;
					return true;
				}

			}
			if (player == player2) {
				//Column win
				int count = 0;
				for (k = i + a; k >=i - a; k--) {
					for (l = j - a; l <= j + a; l++) {
						if (Board[k][l] == 'W') {
							count++;
						}

					}
					if (count == win) {
						cout << "Player 2 won " << endl;
						return true;
					}
				}
				if (Board[i][j] == 'W' && (Board[i][j] == Board[i + 1][j - 1]) && (Board[i + 1][j - 1] == Board[i + 2][j - 2])
					&& Board[i][j] == Board[i - 1][j + 1] && Board[i - 1][j + 1] == Board[i - 2][j + 2]) {

					cout << "Player 2 won " << endl;
					return true;
				}

			}
		}
	}
	cout << "no win yet" << endl;
	return false;

}