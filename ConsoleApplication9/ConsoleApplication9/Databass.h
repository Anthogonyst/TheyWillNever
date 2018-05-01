#include<iostream>
#include<string>
#include "Contacc.h"

using namespace std;

class Databass {
public:
	Databass();
	void add_contact();
	void display_contacts();
	void display_contacts(int);
	int search_contact(std::string);
	void delete_contact(int);
	void increment() { totalcontacts++; }
	//void edit_contact();
	int num() { return totalcontacts; }
	//friend std::ostream &operator <<(std::ostream &, const Confidant &);


private:
	Confidant data[100];
	int totalcontacts = 0;

} kappa;

