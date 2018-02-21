//Implementation File for the class TTTClass

#include <iostream>
#include "TTTClass.h" 

using namespace std;

void tictactoe::display() {
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			cout << box[i][j];
		}
	}
	cout << endl << endl;
}

void tictactoe::move() {
	char row = 0, column = 0;
	bool success = 0;

	cout << "Player " << player << endl;

	while (!success) {
		cout << "Enter row to move (1, 2, 3) : ";
		cin >> row;
		cout << endl << "Enter column to move (1, 2, 3) : ";
		cin >> column;

		if (row >= 49 && row <= 51 && column >= 49 && column <= 51)
			if (box[(int)row - 49][(int)column - 49] != 'X' && box[(int)row - 49][(int)column - 49] != 'O')
				success = 1;
			else cout << endl << "Error. Space occupied. Retry." << endl;
		else cout << endl << "Error. Too large. Please retry." << endl;
	}

	box[(int)row - 49][(int)column - 49] = player;

	if (player == 'O')
		player = 'X';
	else player = 'O';

	return;
}

void tictactoe::winner() {
	int tester = 0, count = 0;
	char winrar;
	char player[2] = { 'X', 'O' };

	// If three elements in a row are the same, then the elements of each are equal.
	// This means we can apply the associative rule of arithmetic to determine test results.
	// Likewise, the added value of 3 elements is equal to an element multiplied by 3.

	// Horizontal test
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tester += box[i][j];
		}
		for (int k = 0; k < 2; k++)
			if (tester % player[k] == 0 && tester / 3 == player[k]) {
				cout << "The winner is " << player[k] << "! Horizontal win!" << endl;
				complete = 1;
			}
		tester = 0;
	}

	// Vertical test
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tester += box[j][i];
		}
		for (int k = 0; k < 2; k++)
			if (tester % player[k] == 0 && tester / 3 == player[k]) {
				cout << "The winner is " << player[k] << "! Vertical win!" << endl;
				complete = 1;
			}
		tester = 0;
	}

	// Diagonal test
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			tester += box[j][j];
		}
		for (int k = 0; k < 2; k++)
			if (tester % player[k] == 0 && tester / 3 == player[k]) {
				cout << "The winner is " << player[k] << "! Diagonal win!" << endl;
				complete = 1;
			}
		tester = 0;
	}

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			tester += box[j][2-j];
		}
		for (int k = 0; k < 2; k++)
			if (tester % player[k] == 0 && tester / 3 == player[k]) {
				cout << "The winner is " << player[k] << "! Diagonal win!" << endl;
				complete = 1;
			}
		tester = 0;
	}

	// Draw test
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				if (box[i][j] == player[k])
					count++;
			}
		}
		if (count == 9) {
			cout << "Draw!" << endl;
			complete = 1;
		}
	}
}

tictactoe::tictactoe() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			box[i][j] = { '.' };
		}
	}
	player = 'X';
}