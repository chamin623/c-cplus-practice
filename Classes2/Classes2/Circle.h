//���Ǻ� ������ ��
#ifndef CIRCLE_H
#define CIRCLE_h //��ũ�� �̸� ����

#include "Point.h"

class Circle {
private:
	Point center;	//�߽���
	int radius;		//������

public:
	Circle(int x, int y, int radius);
	void displayInfo(); //���� ���� ���
};

#endif