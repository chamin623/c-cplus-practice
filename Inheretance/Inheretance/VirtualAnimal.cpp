#include <iostream>
using namespace std;
/*
	추상 클래스
	- 구현할 수 없는 가상함수(추상함수)를 가지고 있는 클래스
	- 가상함수 virtual 키워드를 붙임
	- 가상 소멸자를 처리해야 함, 소멸자 앞에 virtual 붙임
*/
class Animal { //추상 클래스
public:
	//Animal(){}	//기본 생성자 생략
	virtual ~Animal() {} //가상 소멸자

	void breathe() {
		cout << "숨을 쉽니다.\n";
	}
	//가상 함수 선언
	//상속받은 클래스에서 반드시 구현해야 함(재정의)
	//함수 뒤에 override 키워드를 붙임
	virtual void cry() = 0; 
};

//Animal을 상속받은 Cat 클래스
class Cat : public Animal {
public:
	void cry() override {
		cout << "야~ 옹!\n";
	}

	~Cat() {
		cout << "Cat 소멸자 호출됨\n";
	}
};

//Animal을 상속받은 Dog 클래스
class Dog : public Animal {
public:
	void cry() override {
		cout << "왈~ 왈!\n";
	}

	~Dog() {
		cout << "Dog 소멸자 호출됨\n";
	}
};

int main()
{
	//동적 객체(인스턴스) 생성
	//다형성 부모 자료형으로 인스턴스 생성
	//부모 자료가 더 큼. 자동 형변환
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//기능 구현
	cat->cry();
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