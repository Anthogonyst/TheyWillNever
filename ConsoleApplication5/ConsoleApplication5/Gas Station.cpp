#include<iostream>
#include<conio.h>
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
	bill = gallons * cost;
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
	bool pumping = 1;
	
	while (_getch()) {
		gallons += 0.1;
		// cin.get -> pumping = 0;
		// wants screen cleared per display of .1 and bill; better to use \b
		cout << "Gallons of gasoline pumped: " << gallons << endl;
	}
}
// Pumps gas until desired price is reached
void Gasoline::pump(double input) {
	gallons = input / cost;

	cout << endl << "Your total bill is $";
	receipt();
	cout << " for " << gallons << " gallons." << endl;
}

// Outputs sales revenue to console
void Gasoline::sales() {
	cout << revenue;
}