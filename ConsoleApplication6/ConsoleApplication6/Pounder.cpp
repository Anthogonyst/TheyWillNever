#include<iostream>
#include<cmath>
#include "Four.h"

using namespace std;
int max(const int);
const int m = 9999;
void el();

int main() {
	int count = 0;
	int sum = 0;
	int pound[m] = { 0 };
	int supercount[10] = { 0 };
	//int pound = new int[n];
	Four num[m];

	for (int i = 0; i < m; i++) {
		num[i].in(i + 1);
	}

	for (int i = 0; i < m; i++)
		count += num[i].sum();

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 10; j++) {
			supercount[j] += num[i].count[j];
		}
	}

	for (int i = 0; i < m; i++) {
		pound[num[i].sum()] += 1;
	}

	for (int i = 0; i < m; i++) {
		if (pound[i] != 0)
			cout << i << ' ' << pound[i] << ' ' << ' ' << ' ' << ' ' << ' ';
	}

	el();
	for (int i = 0; i < 10; i++)
		cout << supercount[i] << endl;

	cout << endl << count;
	cout << endl << 46*46*46*46 << endl;

}

int max(int m) {
	int num = 1;
	int digits = 0;
	bool ten = 1;
	
	while (ten) {
		if (m >= num) {
			digits++;
			num *= 10;
		}
		else {
			ten = 0;
		}
	}
	
	return 1 + pow(9, digits);
}

void el() {
	cout << endl;
}