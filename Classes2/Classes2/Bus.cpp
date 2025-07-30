#include <iostream>
using namespace std;
#include "Bus.h"

//������ - �ʱ�ȭ ���
Bus::Bus(int busNumber, int FEE = 1500) : busNumber(busNumber), 
		passenger(0), money(0), FEE(FEE) {}

//�Լ� ����
void Bus::take() {
	money += FEE;	//���� ����
	passenger++;	//�°� 1�� ����
}

int Bus::getFEE() {
	return FEE;
}

void Bus::displayInfo() {
	cout << busNumber << "�� ����: "
		<< "����: " << money << "��, �°� "
		<< passenger << " ��\n";
}
