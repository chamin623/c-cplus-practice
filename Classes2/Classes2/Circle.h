//조건부 컴파일 블럭
#ifndef CIRCLE_H
#define CIRCLE_h //매크로 이름 정의

#include "Point.h"

class Circle {
private:
	Point center;	//중심점
	int radius;		//반지름

public:
	Circle(int x, int y, int radius);
	void displayInfo(); //원의 정보 출력
};

#endif