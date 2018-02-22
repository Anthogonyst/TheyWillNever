// Header file of class Fraction

#include<iostream>

class Fraction {
public:	
	void input();
	// User inputs the fraction

	void print();
	// Prints fraction to console

	Fraction(int, int);
	// Program inputs the fraction

	int top();
	// Returns the value of the top

	int bottom();
	// Returns the value of the bottom

	double fraction();
	// Returns the value of the fraction

	Fraction();
	// Default constructor to keep the compiler happy

private:
	int numerator;
	int denominator;

};