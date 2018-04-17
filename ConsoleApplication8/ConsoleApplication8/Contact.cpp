#include<iostream>
#include<string>
#include "Contact.h"

using namespace std;

Confidant::Confidant() {

}

// Input
void Confidant::save(Confidant &person) {
	bool valid = 0;
	std::string data[3];
	double num;

	std::cout << "Please write the first name, last name, phone number (no dashes), "
		<< "and email address of the new contact you wish to add. " << std::endl;

	std::cin >> data[0] >> data[1];

	while (!valid) {
		try {
			std::cin >> num;
			valid = 1;
		}
		catch (...) {
			std::cout << "Error writing phone number. Try again." << std::endl;
		}
	}

	std::cin >> data[2];

	person.first(data[0]);
	person.last(data[1]);
	person.phone(num);
	person.email(data[2]);

	return;
}

// Output
std::ostream &operator <<(std::ostream &out, Confidant &person) {
	out << person.get_first() << '\t' << 't';

	return out;
}