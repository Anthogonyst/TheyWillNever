#include<iostream>
#include<string>
#include "Contacc.h"

using namespace std;

Confidant::Confidant() {
	// Initializes empty class with "0"
	firstname = "0";
	lastname = "0";
	phonenumber = "0";
	emailaddress = "0";
}

ostream &operator <<(ostream &out, Confidant &person) {
	// Outputs to console a line of data
	out << "0";// person.get_first();// << '\t' << person.get_last() << '\t' << person.get_phone() << '\t' << person.get_email();
	return out;
}