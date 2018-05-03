#include<iostream>
#include<string>

using namespace std;

class Awway {
public:
	int size;
	// Constructor
	Awway() { dynamicArray = 0, size = 0; }
	// Accessor
	int width() { return size; }


private:
	string dynamicArray;
	const int size = 0;
};