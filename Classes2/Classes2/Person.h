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
	
	void takeBus(Bus& bus); //Bus&(������ ���)
	void displayInfo();
};

#endif
//html, python