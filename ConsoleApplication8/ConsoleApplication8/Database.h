//a method to display a menu that allows the
//client to add a contact, display all contacts, search for a contact by phone number, and delete a contact.
//You may add a method to edit a contact for extra credit.
#include<iostream>
#include<string>
#include "Contact.h"

using namespace std;

class Data {
public:
	void add_contact(const Confidant*);
	Confidant* send_contacts();
	Confidant* search_contacts(string);
	void delete_contact(const Confidant*);
//	Confidant*& edit_contact(const Confidant*);
	friend void initialize_contacts();
private:
	Confidant database[100];
	int totalcontacts;
};