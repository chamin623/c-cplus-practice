#include <iostream>
using namespace std;

class Dog {
public:
	string type;
	int age;

	Dog();//기본 생성자 선언부
	Dog(string _type, int _age); //매개변수가 있는 생성자

	void dogInfo(); //강아지 정보 함수 선언부
	void bark();

	~Dog(); //소멸자
};

//구현부 - 생성자(::  - 범위 연산자)
Dog::Dog() {
	cout << "생성자 입니다.\n";
}

//구현부 - 매개변수가 있는 생성자
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

//구현부 - 함수
void Dog::dogInfo() {
	cout << "강아지 종류: " << type << endl;
	cout << "강아지 나이: " << age << endl;
}

void Dog::bark() {
	cout << "왈~ 왈~\n";
}

Dog::~Dog() {
	cout << "소멸자입니다.\n";
}

int main()
{
	//기본생성자의 인스턴스 dog 생성
	Dog dog;

	//dog1 인스턴스 생성
	Dog dog1("진돗개", 3);
	dog1.dogInfo();
	dog1.bark();

	return 0;
}