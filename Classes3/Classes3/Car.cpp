//Car.cpp
#include <iostream>
using namespace std;
#include "Car.h"

//생성자의 목록 방식
Car::Car(string model, int year)
	: model(model), year(year) {
}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setYear(int year) {
	this->year = year;
}

void Car::carInfo() {
	cout << "모델명: " << model << endl;
	cout << "연식: " << year << endl;
}