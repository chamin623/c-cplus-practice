#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
	//Person 인스턴스 생성
	Person p1("이종범");
	p1.greet();
	p1.displayInfo();

	//Student 인스턴스 생성
	Student st1("이정후", 51);
	st1.greet();
	st1.displayInfo();

	return 0;
}