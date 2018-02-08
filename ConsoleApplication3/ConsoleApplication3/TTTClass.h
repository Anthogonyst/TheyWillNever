//clockType.h, the specification file for the class clockType

class tictactoe
{
public:
	tictactoe();
	//Default constructor
	//A TTTCIass object should be constructed with all cells blank

	void display(char &box);
	//The class should have the ability to display its game board on the screen 
	//All I/O will be from the keyboard and to the monitor.

	//Function to compare the two times.
	//Postcondition: Returns true if this time is equal to 
	//               otherClock; otherwise, returns false.

	void move(char &box);
	//include member functions Move() to get a player’s move and update the screen,

	//Function to increment the time by one hour.
	//Postcondition: The time is incremented by one hour.
	//               If the before-increment time is 
	//               23:45:53, the time is reset to 00:45:53.

	void winner(char &box);
	//and Winner( ) that returns a code indicating who has won, if anyone.
	//Output should include a horizontal win, a vertical win, a diagonal win and a draw(no one wins).

	//  "
	//  "

	void filler(int a,
		int b,
		int c,
		int d);

private:
	char box[3][3];



	/*
	A run from a client program using the TTTC1ass may have output similar to:

	[  ] [  ][  ]
	[  ] [  ][  ]
	[  ] [  ][  ]

	Player X
	Enter row to move (1, 2, 3): 2
	Enter column to move (1, 2, 3): 2
	[  ][   ][  ]
	[  ][ X ][  ]
	[  ][   ][  ]

	Player 0
	Enter row to move (1, 2, 3): 1
	Enter column to move (1, 2, 3): 1
	[ O ][   ][   ]
	[   ][ X ][   ]
	[   ][   ][   ]

	• • • •

	[ O ][   ][ X ]
	[ X ][ X ][ O ]
	[ X ][   ][ O ]
	Winner is X - Diagonal.

	*/
};
