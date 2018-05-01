#include<iostream>
#include<string>
#include<fstream>
#include "Databass.h"

using namespace std;

Databass::Databass() {
	// File and initials
	int number = 0;
	ifstream filla;

	// Opens file and failsafe
	filla.open("fila.dat", ios::in);
	if (!filla) {
		cout << "Error loading file.";
		return;
	}

	// Reads file
	while (!filla.eof()) {
		string loaded[4];
		for (int i = 0; i < 4; i++)
			filla >> loaded[i];

		// Modifies empty contact data
		data[number].modify(loaded[0], loaded[1], loaded[2], loaded[3]);

		// Moves to the next contact set
		increment();
		number++;
	}
}

void Databass::add_contact() {
	// Prompts user for input into file
	string in[4];
	cout << "Please enter the first name, last name, phone number, and email." << endl;
	cin >> in[0] >> in[1] >> in[2] >> in[3];

	// Modifies empty contact data
	data[num()].modify(in[0], in[1], in[2], in[3]);

	// Moves to the next contact set
	increment();
}

void Databass::display_contacts() {
	// Outputs all contact data to console
	cout << "bye";
	/*int temp = num();
	for (int i = 0; i < temp; i++) {
		cout << i << '.';//<< this->data[i] << endl;
	}*/
}

void Databass::display_contacts(int m) {
	//cout << data[m];
}

int Databass::search_contact(std::string s) {
	int temp = num();
	for (int i = 0; i < temp; i++) {
		if (s == data[i].get_phone())
			return i;
	}
	return -1;
}

void Databass::delete_contact(int n) {
	// Sets
	data[n].modify("0", "0", "0", "0");
}

void searchc();
void deletec();

int main() {
	string input;
	char first;
	while (1) {
		cout << "Choose an option:\n1. Display contacts\n2. Add contact\n3. Search contacts\n4. Delete contact\n5. Quit" << endl;
		cin >> input;
		first = input[0];

		Confidant z;
		cout << z;

		if (first == '1')
			kappa.display_contacts();
		if (first == '2')
			kappa.add_contact();
		if (first == '3') {
			searchc();
		}
		if (first == '4')
			deletec();
		if (first == '5')
			return 0;
	}
}

void inline searchc() {
	string searchterm;
	int result;

	cout << "\nPlease input the phonenumber." << endl;
	cin >> searchterm;
	result = kappa.search_contact(searchterm);
	if (result != -1)
		kappa.display_contacts();// result);
	else cout << "\nNo results found." << endl;

	return;
}

void inline deletec() {
	int placeholder;

	cout << "\nPlease enter the contact number in the book." << endl;
	cin >> placeholder;
	if (placeholder >= 1 && placeholder <= 100) {
		placeholder--;
		kappa.delete_contact(placeholder);
	}
}
/*
std::ostream &operator <<(std::ostream &out, Databass::Confidant one) {
	out << one;
}
*/