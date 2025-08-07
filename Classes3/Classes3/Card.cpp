//Card.cpp
#include <iostream>
using namespace std;
#include "Card.h"

//정적 변수는 클래스의 외부에서 한 번만 정의함
int Card::serialNum = 1000;

//기본 생성자 구현
Card::Card() {}

Card::Card(string name) { //생성자
    this->name = name;
    serialNum++;   //1 증가
    cardNumber = serialNum;
}

int Card::getCardNumber() {
    return cardNumber;
}
void Card::printInfo() {
    cout << "고객 이름: " << name
        << ", 카드 번호: " << cardNumber << endl;
}