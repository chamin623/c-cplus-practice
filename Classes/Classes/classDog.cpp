#include <iostream>
using namespace std;
/*
	클래스(class)
	- 사물(객체)을 추상화한 자료형이다.
	- 사물의 속성(멤버 변수)과 기능(멤버 함수)을 가지고 있음.
	- 클래스 이름은 첫글자가 대문자
	- 캡슐화를 위해 접근제어자가 있음
	  (private: 접근 불허, public: 접근 허용) 
*/
//Dog 클래스 정의
class Dog {
public:
	//멤버 변수
	string type;	//강아지 종류
	int age;		//강아지 나이

	//멤버 함수
	//강아지 정보  출력
	void showInfo() {
		cout << "강아지 종류: " << type << endl;
		cout << "강아지 나이: " << age << endl;
	}
};

int main()
{
	//클래스 사용 - 인스턴스를 생성
	//인스턴스로 멤버에 접근 - 점(.) 연산자 사용
	Dog dog1;
	dog1.type = "푸들"; 
	dog1.age = 2;

	dog1.showInfo();

	Dog dog2;
	dog2.type = "진돗개";
	dog2.age = 3;
	dog2.showInfo();

	return 0;
}