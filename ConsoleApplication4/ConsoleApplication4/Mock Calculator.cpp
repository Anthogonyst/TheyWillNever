// Anthony Arroyo
// Computer Science 211
// Professor Hayes
// February 21, 2018

#include<iostream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction stuff(4,7);
	stuff.print();
	cout << endl << "Numerator: " << stuff.top() << endl
		<< "Denominator: " << stuff.bottom() << endl
		<< "Fraction: " << stuff.fraction() << endl << endl;

	Fraction moar;
	moar.print();
	cout << endl << "Numerator: " << moar.top() << endl
		<< "Denominator: " << moar.bottom() << endl
		<< "Fraction: " << moar.fraction() << endl << endl;

	return 0;

}