#include <iostream>
using namespace std;
#include "Animal.h"

Animal::~Animal() {
	cout << "Animal �Ҹ��� ȣ���\n";
}

void Animal::breathe() {
	cout << "���� ���ϴ�.\n";
}