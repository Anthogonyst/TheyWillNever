//TTTClass.h, the specification file for the class tictactoe

class tictactoe
{
public:
	tictactoe();
	// Default constructor
	// A TTTCIass object should be constructed with all cells blank

	void display();
	// Function to display the game board.
	// Output is a user friendly picture to console

	void move();
	// Player I/O to play the game

	// Plays a turn based on user input
	// Postcondition: Fills one value of the gameboard

	void winner();
	// Checks the game state to see if anyone won.

	// Postcondition: If a winner is declared, the game is over.


	// Tells the core program when the game is done.
	bool complete = 0;

private:
	// Gameboard data
	char box[3][3];
	// Saves which player's turn
	char player;
};
