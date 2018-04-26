#include<iostream>
#include<string>
#include<fstream>
#include "Contact.h"

using namespace std;

Confidant::Confidant(){//const ifstream fil) {
//fil >> *firstname >> *lastname >> *phonenumber >> *emailaddress;
;
}

// Input
/*void Confidant::save() {
	
}
*/
// Output
std::ostream &operator <<(std::ostream &out, Confidant &person) {
	out << person.get_first();// << '\t' << person.get_last() << '\t' << person.get_phone() << '\t' << person.get_email();

	return out;
}