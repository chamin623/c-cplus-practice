#include "Point.h"

//헤더 파일 구현
//생성자
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

//멤버 함수 구현
int Point::getX() {
	return x;
}
int Point::getY() {
	return y;
}
