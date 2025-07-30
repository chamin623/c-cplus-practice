#include <iostream>
using namespace std;

#include "Circle.h"

//������ - �ʱ�ȭ ��� ���(this ������� ����)
//������(����1, ����2) : ����1(����1), ����2(����2){}
Circle::Circle(int x, int y, int radius) : 
	center(x, y), radius(radius) {}

void Circle::displayInfo() {
	cout << "���� �߽�(" << center.getX() << ", "
		<< center.getY() << "), ������: " << radius << endl;
}