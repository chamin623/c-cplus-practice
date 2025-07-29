#include <iostream>
using namespace std;

class Dog {
private: //외부 클래스에서 접근 불가
	string type;
	int age;

public: //외부 클래스에서 접근 가능
	Dog() {}; //기본 생성자

	//설정자(setter) - set + 멤버변수
	void setType(string _type) {
		type = _type;
	}
	void setAge(int _age) {
		age = _age;
	}

	//접근자(getter) - get + 멤버변수()
	string getType() {
		return type; //클래스 내부에서는 private 접근 가능
	}
	int getAge() {
		return age;
	}

};

int main()
{
	Dog dog;
	//dog.type;	//private 이므로 접근 불가

	dog.setType("진돗개");
	dog.setAge(3);

	cout << "강아지 종류: " << dog.getType() << endl;
	cout << "강아지 나이: " << dog.getAge() << endl;

	return 0;
}