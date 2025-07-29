#include <iostream>
#include "Car.h"

//생성자 구현
Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

void Car::carInfo() {
	cout << "모델명: " << this->model << 
		", 연식: " << this->year << endl;
}
void Car::drive() {
	cout << this->model << "가 달립니다\n";
}
