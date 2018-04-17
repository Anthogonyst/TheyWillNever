// Driver file for Newpoint.cpp

#include<iostream>
#include<math.h>
#include "newpoint.h"

using namespace std;
void value(point, char);
void compare(point, char, point, char);

int main() {
	point s(1, 1);
	point k(7, 5);
	point n(-5, -2);

	value(s, 's');
	value(k, 'k');
	value(n, 'n');
	cout << "s+k: " << s+k << endl;
	cout << "k+n: " << k+n << endl;
	cout << "2s+n: " << s+s+n << endl;
	value(s, 's');
	cout << endl;

	compare(s, 's', k, 'k');
	compare(k, 'k', n, 'n');

	value(k, 'k');
	k.rotate90();
	cout << "k is rotated. " << endl;
	value(k, 'k');
	cout << endl;

	value(n, 'n');
	n.shift(6, 3);
	cout << "n is shifted by (6, 3). " << endl;
	value(n, 'n');
	cout << endl;

	compare(s, 's', n, 'n');
	value(s, 's');
	value(n, 'n');
	cout << endl;

	point z(0, 0);
	
	// Incomplete
	double dist = 0;
	// dist = distance(s, n);
	cout << "distance between s and n is: " << dist << endl;

	// z = z + middle(s, n);
	cout << "middle between s and n is: " << z;
	
}

void value(point p, char c) {
	cout << c << ": " << p << endl;
}

void compare(point a, char j, point b, char k) {
	if (a == b)
		cout << j << " == " << k << "." << endl;
	if (a != b)
		cout << j << " != " << k << "." << endl;
}