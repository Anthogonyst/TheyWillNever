/*
Anthony Arroyo
CSC211
Professor
January 31, 2018
*/

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cmath>
#include<vector>

struct gradebook {
	// What it says on the tin
	int id;
	int quiz1;
	int quiz2;
	int midterm;
	int finals;
	char lettergrade;
	int numbergrade;
};

class student {
public:
	// Records grades and student id
	gradebook grades;
public:
	// Outputs one student's grades to console
	void getGrades(gradebook);
	// Calculates and normalizes gradebook
	double formula();
	char formula(double);
	// Constructors
	student();
	student(int[5]);
};

void initialize();

int main() {
	// Initialization
	std::cout << "Starting grading..." << std::endl;
	int studentcount = 0;
	bool reading = 1;
	std::ifstream in;

	// Opens the file
	in.open("data.dat");
	// Error checking if file didn't open
	if (!in) {
		// Console prompt and input
		std::cout << "Error locating database. Would you like to initialize a sample and retry?";
		char input;
		std::cin.get(input);

		// If yes, makes a sample and shuts down
		if (input == 'Y' || input == 'y') {
			initialize();
			std::cout << "Restarting...";
			return 1;
		}
		else std::cout << "Quitting...";
	}

	// Initializes data set
	int data[5] = { 0 };
	std::vector<student>classroom;

	// Reads first 5 integers from file
	for (int i = 0; i < 5; i++) {
		in >> data[i];
	}

	// Reads data until end of file
	while (!in.eof()) {
		// Initializes student from data
		classroom.push_back(student(data));
		studentcount++;

		// Reads additional 5 integers from file
		for (int i = 0; i < 5; i++) {
			in >> data[i];
		}
	}

	// Prints out class grades to console
	for (int i = 0; i < studentcount; i++) {
		classroom[i].getGrades(classroom[i].grades);
	}

	// Close the data file
	in.close();
	std::cout << std::endl << "Done printing grades!" << std::endl;
}

student::student() {
	// Blank constructor
}

student::student(int data[5]) {
	// Creates a new student based on the array's data
	grades.id = data[0];
	grades.quiz1 = data[1];
	grades.quiz2 = data[2];
	grades.midterm = data[3];
	grades.finals = data[4];
}

double student::formula() {
	// Error checking
	if (!grades.quiz1 || !grades.quiz2 || !grades.midterm || !grades.finals)
		return -1;

	// Calculates grade
	return (grades.quiz1 + grades.quiz2) / 2 * 2.5 + grades.midterm / 4 + grades.finals / 2;
}

char student::formula(double grade) {
	// Formats grade into useable integer
	int flat = grade / 10;

	// Checks conditions and returns letter
	switch (flat) {
	case 10: return 'A';
	case 9: return 'A';
	case 8: return 'B';
	case 7: return 'C';
	case 6: return 'D';
	default: return 'F';
	}
	return 'W';
}

void student::getGrades(gradebook) {
	// Double checks and records the final grade of the student
	grades.numbergrade = formula();
	grades.lettergrade = formula(grades.numbergrade);

	// Outputs to console based on student data
	std::cout << std::endl << "The record for student number: " << grades.id << std::endl
		<< "The quiz grades are: " << grades.quiz1 << ' ' << grades.quiz2 << std::endl
		<< "The midterm and exam grades are: " << grades.midterm << ' ' << grades.finals << std::endl
		<< "The numeric average is: " << grades.numbergrade << std::endl
		<< "And the letter grade assigned is: " << grades.lettergrade << std::endl;
}

void initialize() {
	// Creates a sample file to work with
	std::ofstream out;
	out.open("data.dat");
	out << "1 7 10 95 95 2 9 8 90 80 3 7 8 70 80 4 5 8 50 70 5 4 1 40 35 6 6 6" << std::endl;
	out.close();
}