#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Confidant {
public:
	// Constructor
	Confidant();
	Confidant(string, string, string, string);
	// Accessors
	string get_first() { return firstname; }
	string get_last() { return lastname; }
	string get_phone() { return phonenumber; }
	string get_email() { return emailaddress; }
	// Mutators
	void first(string n) { firstname = n; }
	void last(string m) { lastname = m; }
	void phone(string d) { phonenumber = d; }
	void email(string e) { emailaddress = e; }
	// Input
	//void save();
	//void menu();
	// Output
	//friend ostream &operator <<(ostream &out, const Confidant &person);
private:
	string firstname;
	string lastname;
	string phonenumber; 
	string emailaddress;
	bool empty;
};

// Output