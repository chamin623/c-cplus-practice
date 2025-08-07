#include <iostream>
using namespace std;
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	//동적 객체(인스턴스) 생성
	//다형성 부모 자료형으로 인스턴스 생성
	//부모 자료가 더 큼. 자동 형변환
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//기능 구현
	cat->breathe();
	cat->cry();

	dog->breathe();
	dog->cry();

	delete cat; //메모리 해제
	delete dog;

	/*//Cat 생성자 호출
	Cat cat;
	cat.breathe();
	cat.cry();

	//Dog 생성자 호출
	Dog dog;
	dog.breathe();
	dog.cry();*/

	return 0;
}