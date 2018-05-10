#include<iostream>
#include<string>

using namespace std;

class Awway {
public:
	// Constructor
	Awway();
	// Accessor
	int width() { return size; }
	
	void addEntry(string);
	void add(string);

	


private:
	string **dynamicArray;
	string *dinner;
	int size;
};
