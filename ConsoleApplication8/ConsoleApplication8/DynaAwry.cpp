#include<iostream>
#include<string>
#include "DynaAwry.h"

using namespace std;

void Awway::addEntry(string s) {
	string *arr;
	arr = new string[size + 1];

	for (int i = 0; i < size; i++) {
		arr[i] = *dynamicArray[i];
	}

	arr[size] = s;

	if (size != 0)
		delete[] * dynamicArray;

	size++;
	
	dynamicArray = &arr;
	cout << "1";
}

Awway::Awway() {
	;//*dinner = new string*[size];
}

void Awway::add(string s) {
	dinner[0] = "stuff";
	size++;

}
/*A function named addEntry that takes a string as input.  The function should create a new 
dynamic array one element larger than dynamicArray, copy all elements from dynamicArray into
the new array, add the new string onto the end of the new array, increment size, delete the
old dynamicArray, and then set dynamicArray to the new array.*/

int main2() {
	Awway a;
	a.addEntry("k");
	a.addEntry("l");
	cout << "m";
	return 1;
}