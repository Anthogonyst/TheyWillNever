#include<iostream>
#include<string>
#include "Contact.h"

using namespace std;

Confidant::Confidant() {
	;
}

// Input
/*void Confidant::save() {
	std::string data[4];

	std::cout << "Please write the first name, last name, phone number, "
		<< "and email address of the new contact you wish to add. " << std::endl;

	for (int i = 0; i < 4; i++)
		std::cin >> data[i];

	first(data[0]);
	last(data[1]);
	phone(data[2]);
	email(data[2]);

	return;
}
*/
// Output
std::ostream &operator <<(std::ostream &out, Confidant &person) {
	out << "l"; //person.get_first();// << '\t' << person.get_last() << '\t' << person.get_phone() << '\t' << person.get_email();

	return out;
}