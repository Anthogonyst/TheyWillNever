/*
Anthony Arroyo
CSC211
Lab 1
Draft 3
Professor Hayes
January 31, 2018
*/

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;

struct student {
	// Records grades and student id
	int id;
	int quiz1;
	int quiz2;
	int midterm;
	int finals;
	char lettergrade;
	double numbergrade;
};

int inputGrades(ifstream& in, student data[ ]);
// Calculates and normalizes gradebook
void formula(student&);
// Outputs one student's grades to console
void getGrades(student);
// Creates a file if missing
void initialize();
using namespace std;

int main() {
	// Initialization
	cout << "Starting grading..." << std::endl;
	
	int numberofstudents=0;
	ifstream in;
	// Vectors are not C compatible
	student data[5];

	in.open("TextFile1.txt");
	// Error checking if file didn't open
	if (!in) {
		cout << "Error opening file.";
		initialize();
		exit(1);
	}

	numberofstudents = inputGrades(in, data);

	in.close();

	// Prints out class grades to console
	for (int i = 0; (i < numberofstudents) || (i < 5); i++) {
		getGrades(data[i]);
	}

	cout << "Done!" << endl;
	return 0;

}

// Reads data until end of file This should be in a function with array in parameter list
int inputGrades(ifstream& in, student data[]){
	int i = 0;
	in >> data[i].id >> data[i].quiz1 >> data[i].quiz2 >> data[i].midterm >> data[i].finals;
	formula(data[i]);
	while (!in.eof()) {
		// Reads first 5 integers from file
		cout << data[i].id << ' ' << data[i].quiz1 << ' ' << data[i].quiz2 << ' ' << data[i].midterm << ' ' << data[i].finals << endl; //for testing purposes only - to be removed and put in a separate output function
		i++;
		in >> data[i].id >> data[i].quiz1 >> data[i].quiz2 >> data[i].midterm >> data[i].finals;
		formula(data[i]);
	}

	return i;
}



void formula(student& stu) {
	// Calculates grade
	stu.numbergrade = (stu.quiz1 + stu.quiz2) / 2 * 2.5 + stu.midterm / 4 + stu.finals / 2;

	// Formats grade into useable integer
	double flat = floor(stu.numbergrade / 10);
	int check = static_cast<int>(flat);

	// Checks conditions and returns letter
	switch (check) {
	case 10: stu.lettergrade = 'A'; break;
	case 9: stu.lettergrade = 'A'; break;
	case 8: stu.lettergrade = 'B'; break;
	case 7: stu.lettergrade = 'C'; break;
	case 6: stu.lettergrade = 'D'; break;
	default: stu.lettergrade = 'F'; break;
	}
}

void getGrades(student s) {
	// Outputs to console based on student data
	std::cout << std::endl << "The record for student number: " << s.id << std::endl
		<< "The quiz grades are: " << s.quiz1 << ' ' << s.quiz2 << std::endl
		<< "The midterm and exam grades are: " << s.midterm << ' ' << s.finals << std::endl
		<< "The numeric average is: " << s.numbergrade << std::endl
		<< "And the letter grade assigned is: " << s.lettergrade << endl << endl;
}

void initialize() {
	// Creates a sample file to work with
	std::ofstream out;
	out.open("TextFile1.txt");
	out << "1 7 10 95 95 2 9 8 90 80 3 7 8 70 80 4 5 8 50 70 5 4 1 40 35" << std::endl;
	out.close();
}