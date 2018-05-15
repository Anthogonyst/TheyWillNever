#include<iostream>
#include<string>

using namespace std;

class DSA {
public:
	// Constructors and Destructors
	DSA() { size = 0; dynamicArray = NULL; };
	DSA(const DSA&);
	~DSA() { delete[] dynamicArray; }
	// Accessors
	int thicc() { return size; };
	// Adds an entry by inefficient means
	void addEntry(string);
	// Deletes an entry or fails
	bool deleteEntry(string);
	// Pulls value of entry
	string getEntry(int);
	// Overloaded assignment
	void operator =(const DSA&);

private:
	string *dynamicArray;
	int size;
};