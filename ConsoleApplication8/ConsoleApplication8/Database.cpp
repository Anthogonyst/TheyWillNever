#include<iostream>
#include<string>
#include "Database.h"

using namespace std;

void Data::add_contact(const Confidant*) {
	;
}

Confidant* Data::send_contacts() {
	return database;
}

Confidant* Data::search_contacts(string) {
	return database;
}

void Data::delete_contact(const Confidant*) {
	;
}
/*
Confidant*& Data::edit_contact(const Confidant*) {
	return database[0];
}
*/
void initialize_contacts() {
	;
}
