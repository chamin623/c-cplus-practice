//조건부 컴파일 블럭
#ifndef POINT_h
#define POINT_H //매크로 이름 정의

//선언부
class Point {
private:
	int x; //x좌표
	int y; //y좌표

public:
	//생성자
	Point(int x, int y);
	int getX(); //접근자 함수
	int getY();
};

#endif