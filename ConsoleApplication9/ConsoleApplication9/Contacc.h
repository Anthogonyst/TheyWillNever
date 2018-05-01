#include<iostream>
#include<string>

class Confidant {
public:
	// Constructor
	Confidant();
	// Constructor with initializer list
	Confidant(std::string a, std::string b, std::string c, std::string d)
		: firstname(a)
		, lastname(b)
		, phonenumber(c)
		, emailaddress(d) {}
	// Accessors
	std::string get_first() const { return firstname; }
	std::string get_last() const { return lastname; }
	std::string get_phone() const { return phonenumber; }
	std::string get_email() const { return emailaddress; }
	// Mutators
	void first(std::string n) { firstname = n; }
	void last(std::string m) { lastname = m; }
	void phone(std::string d) { phonenumber = d; }
	void email(std::string e) { emailaddress = e; }
	// Input
	void modify(std::string a, std::string b, std::string c, std::string d) {
		first(a);
		last(b);
		phone(c);
		email(d);
	}
	// Output
	void print();
	friend std::ostream &operator <<(std::ostream &, const Confidant &);
private:
	std::string firstname;
	std::string lastname;
	std::string phonenumber;
	std::string emailaddress;
};
