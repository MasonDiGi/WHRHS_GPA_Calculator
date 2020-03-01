#include <iostream>
#include "Student.h"

int main() {
	Student *student;
	string name {};
	char resp {};
	int grade {};
	double gpa {};

	cout << "What is your name? ";
	cin >> name;
	cout << "What grade are you in? ";
	cin >> grade;

	student = new Student(name, grade);

	cout << "Would you like to calculate your GPA? [y/n] ";
	cin >> resp;

	if (tolower(resp) == 'y') {
		student -> addClasses();
		gpa = student -> calcGPA();
		cout << "Your GPA is: " << gpa << endl;
	} else {
		cout << "Ok, goodbye then!" << endl;
	}
	return 0;
}
