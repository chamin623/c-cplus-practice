//Card.cpp
#include <iostream>
using namespace std;
#include "Card.h"

//���� ������ Ŭ������ �ܺο��� �� ���� ������
int Card::serialNum = 1000;

//�⺻ ������ ����
Card::Card() {}

Card::Card(string name) { //������
    this->name = name;
    serialNum++;   //1 ����
    cardNumber = serialNum;
}

int Card::getCardNumber() {
    return cardNumber;
}
void Card::printInfo() {
    cout << "�� �̸�: " << name
        << ", ī�� ��ȣ: " << cardNumber << endl;
}