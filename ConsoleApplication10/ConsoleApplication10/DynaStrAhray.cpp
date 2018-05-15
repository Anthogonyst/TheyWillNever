#include<iostream>
#include<string>
#include "DynaStrAhray.h"

using namespace std;

DSA::DSA(const DSA &r) {
	//size = r.size;
	dynamicArray = new string[size];

	//dynamicArray = r.dynamicArray;
}

void DSA::addEntry(string add) {
	string *k = new string[size+1];

	for (int i = 0; i < size; i++) {
		k[i] = this->dynamicArray[i];
	}

	size++;
	k[size-1] = add;
	delete[] dynamicArray;
	dynamicArray = k;
	/*A function named addEntry that takes a string as input.  The function should create a new
	dynamic array one element larger than dynamicArray, copy all elements from dynamicArray into 
	the new array, add the new string onto the end of the new array, increment size, delete the 
	old dynamicArray, and then set dynamicArray to the new array.*/
}

bool DSA::deleteEntry(string del) {
	return 0;/*A function named deleteEntry that takes a string as input.The function should search
	dynamicArray for the string.  If not found, return false.  If found, create a new dynamic 
	array one element smaller than dynamicArray.  Copy all elements except the input string 
	into the new array, delete  dynamicArray, decrement size, and return true.*/
}

string DSA::getEntry(int i) {
	return dynamicArray[i];/*A function named getEntry that takes an integer as input and returns the string at that index
	in dynamicArray.  Return NULL if the index is out of dynamicArray’s bounds.*/
}

void DSA::operator =(const DSA &r) {
	for (int i = 0; i < r.size; i++) {
		dynamicArray[i] = r.dynamicArray[i];
	}
}

int main() {
	DSA o;
	o.addEntry("dead");
	DSA p(o);
	cout << o.getEntry(0);
}