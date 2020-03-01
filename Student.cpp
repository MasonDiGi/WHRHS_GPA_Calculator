//
// Created by mason on 3/1/20.
//

#include <iostream>
#include <string>
#include "Student.h"
#include "Class.h"

using namespace std;

Student::Student(string n, int g) {
	this -> name = n;
	this -> grade = g;
}

void Student::addClasses() {
	string response {};
	string className {};
	bool done {};
	int classGrade {};
	int credits {};
	char level {};

	while (!done) {
		cout << "Would you like to add a class (a) or quit and find the gpa with your current classes (q)? ";
		cin >> response;

		if (response == "q" || response == "quit") {
			done = true;
			continue;
		}

		cout << "What is this class's name? ";
		cin >> className;
		cout << "What grade do you have? ";
		cin >> classGrade;
		cout << "What is the level of the class? (n for non-weighted, c for CP, a for accelerated, and h for AP/Honors) ";
		cin >> level;
		cout << "How many total credits is this class worth? (Usually it is 1.25 per marking period, but science classes are 6) ";
		cin >> credits;

		Class tempClass(className, level, credits, classGrade);
		this -> classes.push_back(tempClass);
	}
}

double Student::calcGPA() {
	double totalPts {};
	double totalCreds {};
	for (auto c: this -> classes) {
		totalPts += c.getPoints();
		totalCreds += c.getWeight();
	}
	return totalPts/totalCreds;
}
