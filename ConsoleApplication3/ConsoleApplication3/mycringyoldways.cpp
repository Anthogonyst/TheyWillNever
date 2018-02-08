#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<fstream>
#include<cstring>
using namespace std;

double Array4ColumnSum(double areray[][4], int row, int column) {
	double total = 0;
	for (int i = 0; i < row; i++)
		total += areray[i][column - 1];
	return total;
}

void CeilingArray4(double arrae[][4], int row, int column) {
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			arrae[i][j] = ceil(arrae[i][j]);
}

void All4Elements(double ahray[][4], int row, int column) {
	cout << setprecision(0) << "\nThe elements in the array are now: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			cout << ahray[i][j] << ' ';
		cout << '\n';
	}
	cout << setprecision(2) << "\nDone!" << endl;
}

void FancyArrayGame() {
	const int rows = 3;
	const int columns = 4;
	double sum;

	double myFancyArray[rows][columns] = {
		{ 23, 14.12, 17, 85.99 },
		{ 6.06, 13, 1100, 0 },
		{ 36.36, 90.09, 3.145, 5.4 } };

	sum = Array4ColumnSum(myFancyArray, rows, 3);
	cout << "\nThe sum of the third column is: " << sum << ".";
	CeilingArray4(myFancyArray, rows, columns);
	cout << "\nRounding array values...";
	All4Elements(myFancyArray, rows, columns);
}