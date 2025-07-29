#include <iostream>
//헤더파일 불러오기(사용자 정의 헤더파일은 상따옴표 사용)
#include "Dog.h" 

//생성자 구현
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

//함수 구현
string Dog::getType() {
	return type;
}
int Dog::getAge() {
	return age;
}
void Dog::bark() {
	cout << "왈~ 왈~\n";
}
