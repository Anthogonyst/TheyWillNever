#include<iostream>
#include<string>

class Confidant {
public:
	// Constructor
	Confidant();
	// Accessors
	std::string get_first() { return firstname; }
	std::string get_last() { return lastname; }
	double get_phone() { return phonenumber; }
	std::string get_email() { return emailaddress; }
	// Mutators
	void first(std::string n) { firstname = n; }
	void last(std::string m) { lastname = m; }
	void phone(double d) { phonenumber = d; }
	void email(std::string e) { emailaddress = e; }
	// Input
	void save(Confidant &person);
	
private:
	std::string firstname;
	std::string lastname;
	double phonenumber; 
	std::string emailaddress;

};

// Output
std::ostream &operator <<(std::ostream &out, const Confidant &person);