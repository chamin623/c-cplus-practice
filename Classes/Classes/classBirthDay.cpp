#include <iostream>
using namespace std;

class BirthDay {
private:
	int year;
	int month;
	int day;

public:
	//매개변수의 이름을 멤버변수와 동일하게 함
	//매개변수를 this 멤버에 저장함
	void setYear(int year) {
		this->year = year;
	}

	void printThis() { //this를 출력하는 함수
		cout << this << endl;
	}
};

int main()
{
	//BirthDay 인스턴스 생성
	BirthDay bDay;
	bDay.setYear(2025);

	cout << &bDay << endl;	//0000005B254FF5A8

	bDay.printThis();		//0000005B254FF5A8

	return 0;
}