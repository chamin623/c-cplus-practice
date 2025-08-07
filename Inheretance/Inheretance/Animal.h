#ifndef ANIMAL_H
#define ANIMAL_H

class Animal { //추상 클래스
public:
	//Animal(){}	//기본 생성자 생략
	virtual ~Animal(); //가상 소멸자

	void breathe();
	virtual void cry() = 0;
};

#endif