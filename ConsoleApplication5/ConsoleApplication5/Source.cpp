#include<iostream>
#include "Gas Station.h"

using namespace std;

int main() {
	// Initializes full service pump and "discounted" self service pump
	Gasoline pump_full;
	Gasoline pump_self(3.05);
	char service = 'a';
	bool chosen = 0;

	// Prompt
	cout << "Welcome to the Red Rocket gas station!" << endl
		<< "Would you like \"full\" service or \"self\" service?" << endl;

	// Saves user choice
	while (!chosen) {
		cin.get(service);

		if (service == 'f' || service == 's')
			chosen = 1;
	}
	
	// Pumps gasoline
	if (service == 's') {
		pump_self.pump();
	}
	else { // service == 'f'
		cout << endl << "Hello, good morning. This will only take a moment..." << endl;
		pump_full.pump(400);
	}
	
	cout << endl << "Have a good day!" << endl;

	return 0;

}