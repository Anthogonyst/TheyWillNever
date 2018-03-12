// Implementation file for Gas Station.h

#include<iostream>
#include<cmath> // To force two decimals tops
#include<conio.h> // For keyboard detection
#include<Windows.h> // For time function
#include "Gas Station.h"

using namespace std;

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

// Pumps gas until stopped
void Gasoline::pump() {
	char c = '0';

	// Outputs instructions to console
	cout << "Ready to start gas pump when you hit the 's' button. Pause pumping with the 'p' button." << endl;
	while (c != 's')
		if (_kbhit())
			c = _getch();

	// Pumps gas until 'p' key is hit
	while (c != 'p') {
		// Attempt to clear screen; may not work due to OS dependency; perhaps use \b instead?
		try {
			system("cls");
			cout << endl;
		}
		catch (...) {
			cout << endl;
		}

		// Increments and prints gallons
		gallons += 0.1;
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
}

// Pumps gas until desired price is reached
void Gasoline::pump(double input) {
	gallons = input / cost;

	// Outputs gas sale to console
	cout << endl << "Your total bill is $";
	receipt();
	cout << " for " << gallons << " gallons." << endl;
}

// Outputs sales revenue to console
void Gasoline::sales() {
	cout << revenue;
}