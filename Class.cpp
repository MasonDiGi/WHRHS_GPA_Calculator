//
// Created by mason on 3/1/20.
//

#include <cmath>
#include "Class.h"

Class::Class(string name, char level, double weight, int grade) {
	this -> name = name;
	this -> level = level;
	this -> credits = weight;
	this -> grade = grade;
}

string Class::getName() {
	return this -> name;
}

char Class::getLevel() {
	return this -> level;
}

double Class::getWeight() {
	return this -> credits;
}

int Class::getGrade() {
	return this -> grade;
}

double Class::getTotalPoints() {
	if (this -> grade <= 100 && this -> grade >= 95) {
		return weight(4.00);
	} else if (this -> grade <= 94 && this -> grade >= 90) {
		return weight(3.75);
	} else if (this -> grade <= 89 && this -> grade >= 87) {
		return weight(3.5);
	} else if (this -> grade <= 86 && this -> grade >= 83) {
		return weight(3.25);
	} else if (this -> grade <= 82 && this -> grade >= 80) {
		return weight(3.00);
	} else if (this -> grade <= 79 && this -> grade >= 77) {
		return weight(2.75);
	} else if (this -> grade <= 76 && this -> grade >= 73) {
		return weight(2.5);
	} else if (this -> grade <= 72 && this -> grade >= 70) {
		return weight(2.25);
	} else if (this -> grade <= 69 && this -> grade >= 67) {
		return weight(1.75);
	} else if (this -> grade <= 66 && this -> grade >= 63) {
		return weight(1.5);
	} else if (this -> grade <= 62 && this -> grade >= 60) {
		return weight(1.25);
	} else {
		return 0;
	}
}

double Class::weight(double orig) {
	switch (this -> level) {
		case 'n':
			return orig;
		case 'c':
			return round((orig+(orig/8))*100) / 100;
		case 'a':
			return round((orig+(orig/4.44444))*100) / 100;
		case 'h':
			return round((orig+(orig/3.0769))*100) / 100;
		default:
			return -1;
	}
}

double Class::getPoints() {
	return (this -> credits) * getTotalPoints();
}