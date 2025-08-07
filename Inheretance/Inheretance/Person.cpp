#include <iostream>
#include "Person.h"

Person::Person(string name) {
	this->name = name;
}

void Person::greet() {
	cout << "안녕하세요. 성명: " << name << endl;
}

void Person::displayInfo() {
	cout << "Person name: " << name << endl;
}