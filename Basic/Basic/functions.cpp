#include <iostream>
using namespace std;
/*
	함수 정의와 호출
	- 전역변수 - main()위 전역공간에 생성, 값을 유지 및 공유함
	- 지역변수 - 함수 블럭 안에서 생성되고 호출 후 소멸
	- 정적변수 - 지역변수인데 전역 변수화 함, 변수 앞에 static 사용
*/

//int x = 10; //전역 변수
//int y = 10;

void click() {
	int x = 10; //지역 변수
	static int y = 10; //전역 변수화 함

	x++;
	y++;
	
	cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
	click(); //11 11
	click(); //11 12
	click(); //11 13

	return 0;
}