#include<iostream>
#include<cmath>

using namespace std;

class Four {
public:
	void in(int);
	int a;
	int b;
	int c;
	int d;
	int count[10];
	int sum();
	void dis();
	void dism();
	void track();
};

void Four::in(int n) {
	d = n % 10;
	c = (n % 100 - d) / 10;
	b = (n % 1000 - c) / 100;
	a = (n - b) / 1000;
}

int Four::sum() {
	if (a == 0)
		a = 1;
	if (b == 0)
		b = 1;
	if (c == 0)
		c = 1;
	if (d == 0)
		d = 1;
	
	track();
	return a*b*c*d;
}

void Four::dis() {
	cout << a << b << c << d << ' ';
}

void Four::dism() {
	cout << sum() << ' ';
}

void Four::track() {
	for (int i = 0; i < 10; i++)
		count[i] = 0;
	
	count[a]++;
	count[b]++;
	count[c]++;
	count[d]++;
}