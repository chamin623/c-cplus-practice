//조건부 컴파일 블럭
#ifndef DOG_H //헤더파일이 중복되지 않도록 함
#define DOG_H //매크로 이름 정의

#include <string> //string 자료형 사용
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);
	
	string getType();
	int getAge();
	void bark();
};

#endif //조건부 컴파일 블럭 종료
