//Car.cpp
#include <iostream>
using namespace std;
#include "Car.h"

//�������� ��� ���
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
	cout << "�𵨸�: " << model << endl;
	cout << "����: " << year << endl;
}