#include<iostream>
#include<string>
#include<fstream>
#include "Contact.h"

using namespace std;

Confidant::Confidant() {
	firstname = "0";
	lastname = "0";
	phonenumber = "0";
	emailaddress = "0";
	bool empty = 1;
}

Confidant::Confidant(std::string a, std::string b, std::string c, std::string d)
{
	firstname = a;
	lastname = b;
	phonenumber = c;
	emailaddress = d;
	bool empty = 0;
}

// Input
/*void Confidant::save() {
	
}
*/
// Output
std::ostream &operator <<(std::ostream &out, Confidant &person) {
	out << person.get_first() << '\t' << person.get_last() << '\t' << person.get_phone() << '\t' << person.get_email();
	return out;
}