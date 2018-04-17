// Implementation file for Gas Station.h

#include<iostream>
#include<cmath> // To force two decimals tops
#include<conio.h> // For keyboard detection
#include<Windows.h> // For time function
#include<string> // For log function
#include<fstream> // For log function
#include "Gas Station.h"

using namespace std;
double Gasoline::tank = 0;

// Default price constructor
Gasoline::Gasoline() {
	cost = 3.95;
	gallons = 0;
	bill = 0;
	revenue = 0;
}

// Constructor with new price
Gasoline::Gasoline(double discount) {
	cost = discount;
	gallons = 0;
	bill = 0;
	revenue = 0;
}

// Outputs total gas dispensed into car to console
void Gasoline::capacity() {
	cout << gallons;
}

// Outputs total cost of gas in car to console
void Gasoline::receipt() {
	// Drops third decimal place if present
	bill = ceil(gallons * cost * 100) / 100;
	cout << bill;
}

// Outputs the cost of gas per gallon to console
void Gasoline::price() {
	cout << cost;
}

// Adjusts price of gas station
void Gasoline::adjust(double change) {
	cost = change;
}

// Clears and resets bill data when car leaves
void Gasoline::reset() {
	gallons = 0;
	bill = 0;
}

void clearscreen();

// Pumps gas until stopped
void Gasoline::pump() {
	char c = '0';

	// Outputs instructions to console
	cout << "Ready to start gas pump when you hit the 's' button. Pause pumping with the 'p' button." << endl;
	while (c != 's')
		if (_kbhit())
			c = _getch();

	// Pumps gas until 'p' key is hit
	while (c != 'p' && (tank > 0)) {
		// Clears the screen
		clearscreen();

		// Increments and prints gallons
		gallons += 0.1;
		tank -= 0.1;
		cout << "Gallons of gasoline pumped: " << gallons << endl;

		// "Slows" program down so it doesn't spit hundreds of gallons
		Sleep(100);

		// If keyboard is hit, records character entered
		if (_kbhit())
			c = _getch();
	}

	// Outputs gas sale to console
	cout << endl << "Your total bill is $";
	receipt();
	cout << " for " << gallons << " gallons." << endl;

	// Refills the tank if empty
	refill_tank();

	log(0);
}

// Pumps gas until desired price is reached
void Gasoline::pump(double input) {
	// Checks if main tank has enough gas
	if ((input / cost) > show_tank())
		gallons = show_tank();
	else gallons = input / cost;

	// Outputs gas sale to console
	cout << endl << "Your total bill is $";
	receipt();
	cout << " for " << gallons << " gallons." << endl;

	// Adjusts reading on main fuel tank
	tank -= gallons;

	// Refills the tank if empty
	refill_tank();

	log(0);
}

// Outputs sales revenue to console
void Gasoline::sales() {
	cout << revenue;
}

// Adds gas to main tank
void Gasoline::fill_tank(double fill) {
	tank += fill;
}

// Returns total gas in main tank
double Gasoline::show_tank() {
	return tank;
}

// Refills tank when it runs out automatically
void Gasoline::refill_tank() {
	if (tank == 0) {
		fill_tank(100);
		cout << "Please wait while we refill the tank..." << endl;
	}
}

// Clears the screen
void inline clearscreen() {
	// Attempt to clear screen; may not work due to OS dependency; perhaps use \b instead?
	try {
		system("cls");
		cout << endl;
	}
	catch (...) {
		cout << endl;
	}
}

// Logs activity to a personal file
void Gasoline::log(bool init) {
	ofstream file;

	if (init) {
		string logname;

		// Prompts user for file name
		cout << "Initializing..." << endl << "Hello, manager! Where would you like to keep the log file? ";
		cin >> logname;
		cout << endl << "Preparing..." << endl;

		// Appends appropriate file extension
		logname.append(".txt");
		logfile = logname;
		cout << "Writing to " << logfile << endl;
	}

	// Tries to open file and puts cursor at end of file
	file.open(logfile, ios::app);
	if (file.fail()) {
		cout << "Error writing to file..." << endl;
		return;
	}

	// Writes at end of file
	if (!init) {
		file << "\nNumber of gallons sold: " << gallons;
		file << "\nNumber of gallons remaining in main tank: " << show_tank() << endl;

	}
}
