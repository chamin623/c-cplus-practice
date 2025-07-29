#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
	string model;	//¸ðµ¨¸í
	int year;		//¿¬½Ä

public:
	Car(string model, int year);

	void carInfo();
	void drive();
};

#endif