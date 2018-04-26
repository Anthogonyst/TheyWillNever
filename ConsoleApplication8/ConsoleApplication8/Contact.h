#include<iostream>
#include<string>
#include<fstream>

class Confidant {
public:
	// Constructor
	Confidant(const ifstream);
	// Accessors
	std::string get_first() { return *firstname; }
	std::string get_last() { return *lastname; }
	std::string get_phone() { return *phonenumber; }
	std::string get_email() { return *emailaddress; }
	// Mutators
	void first(std::string *n) { *firstname = *n; }
	void last(std::string *m) { *lastname = *m; }
	void phone(std::string *d) { *phonenumber = *d; }
	void email(std::string *e) { *emailaddress = *e; }
	// Input
	//void save();
	//void menu();
	// Output
	friend std::ostream &operator <<(std::ostream &out, const Confidant &person);
private:
	std::string *firstname;
	std::string *lastname;
	std::string *phonenumber; 
	std::string *emailaddress;

};

// Output