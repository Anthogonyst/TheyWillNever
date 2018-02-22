// Implementation file of class Fraction.h

#include<iostream>
#include "Fraction.h"

using namespace std;

void Fraction::input() {
	// User inputs the fraction
	char input;
	bool success = 0;

	while (!success) {
		cout << endl << "Please enter the numerator. ";
		cin >> input;
		if (input >= '0' && input < 255)
			success = 1;
	}
	numerator = (int)input - 48;
	success = 0;

	while (!success) {
		cout << endl << "Please enter the denominator. ";
		cin >> input;
		if (input > '0' && input < 255)
			success = 1;
	}

	denominator = (int)input - 48;
}


void Fraction::print() {
	// Prints fraction to console
	cout << numerator << '/' << denominator;
}


Fraction::Fraction(int num, int denom) {
	// Program inputs the fraction
	numerator = num;
	denominator = denom;
}

Fraction::Fraction() {
	// Default constructor to keep the compiler happy
	numerator = 1;
	denominator = 1;
	input();
}


int Fraction::top() {
	// Returns the value of the top
	return numerator;
}


int Fraction::bottom() {
	// Returns the value of the bottom
	return denominator;
}

double Fraction::fraction() {
	// Returns the value of the fraction
	return ((double)numerator / (double)denominator);
}
