//a method to display a menu that allows the
//client to add a contact, display all contacts, search for a contact by phone number, and delete a contact.
//You may add a method to edit a contact for extra credit.
#include<iostream>
#include<string>
#include "Contact.cpp"

using namespace std;

class Databoss : public Confidant {
public:
	Databoss();
	~Databoss();
	void add_contact();
	void display_contacts();
	void search_contact(std::string);
	void delete_contact();
	//void edit_contact();
	int num() { return totalcontacts; }
	friend std::ostream &operator <<(std::ostream &, const Confidant* &);
private:
	Confidant data[100];
	int totalcontacts;

};
