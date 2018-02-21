//The user program that uses the class TTTClass

#include <iostream>
#include "TTTClass.h"

using namespace std;

int main()
{
	tictactoe game;
	game.display();
	while (!game.complete) {
		game.move();
		game.display();
		game.winner();
	}
	return 0;
}
