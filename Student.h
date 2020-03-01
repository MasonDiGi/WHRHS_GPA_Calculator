//
// Created by mason on 3/1/20.
//

#ifndef GPACALC_STUDENT_H
#define GPACALC_STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Class.h"

using namespace std;

class Student {
private:
	string name;
	int grade;
	vector<Class> classes;
public:
	Student(string, int);
	void addClasses();
	double calcGPA();
};


#endif //GPACALC_STUDENT_H
