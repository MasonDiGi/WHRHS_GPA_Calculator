//
// Created by mason on 3/1/20.
//

#ifndef GPACALC_CLASS_H
#define GPACALC_CLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Class {
private:
	string name;
	char level;
	double credits;
	int grade;
public:
	Class(string, char, double, int);
	string getName();
	char getLevel();
	double getWeight();
	int getGrade();
	double getTotalPoints();
	double getPoints();
	double weight(double);
};


#endif //GPACALC_CLASS_H
