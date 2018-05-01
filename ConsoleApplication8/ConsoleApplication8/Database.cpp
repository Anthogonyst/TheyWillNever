#include<iostream>
#include<string>
#include "Database.h"
#include "Contact.h"

using namespace std;

std::ostream &operator <<(std::ostream &out, Databoss &info) {
	out << info;

	return out;
}

void Databoss::add_contact() {
	string in[4];
	cout << "Please enter the first name, last name, phone number, and email." << endl;
	cin >> in[0] >> in[1] >> in[2] >> in[3];
	data[num()].first(in[0]);
	data[num()].last(in[1]);
	data[num()].phone(in[2]);
	data[num()].email(in[3]);
	// Bad syntax; use initializer list
}

void Databoss::display_contacts() {
	int temp = num();
	for (int i = 0; i < temp; i++) {
		//cout << Databoss::data[i] << endl;
	}
}

void Databoss::search_contact(std::string) {
	;
}

void Databoss::delete_contact() {
	;
}

//void Databoss::edit_contact() { ; }
