#include<iostream>
#include<string>
#include "Databass.h"

class Databass {
public:
	void add_contact(const Confidant*);
	const Confidant& send_contacts();
	const Confidant& search_contacts(string*);
	void delete_contact(const Confidant&);
	//	Confidant* edit_contact(const Confidant&);
	friend void initialize_contacts();
};