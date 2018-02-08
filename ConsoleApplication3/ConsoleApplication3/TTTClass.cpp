//Implementation File for the class TTTClass

#include <iostream>
#include "TTTClass.h" 

using namespace std;

void tictactoe::display(char &box) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << box[i][j];
		}
	}
}

void tictactoe::move(char &box) {
	;
}

void tictactoe::winner(char &box) {
	;
}

void tictactoe::filler(int a, int b, int c, int d) {
	;
}

tictactoe::tictactoe() {
	box[3][3] = { ' ' };
}