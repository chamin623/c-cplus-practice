#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>
#include "Bus.h"

class Person {
private:
	string name;
	int money;

public:
	Person(string name, int money);
	
	void takeBus(Bus& bus); //Bus&(참조자 사용)
	void displayInfo();
};

#endif
//html, python