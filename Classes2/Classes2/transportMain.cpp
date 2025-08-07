#include <iostream>
using namespace std;
#include "Person.h"

int main()
{
	//인스턴스 생성
	Person woo("우영우", 10000);	//사람 인스턴스
	Person han("한강", 2000);
	Bus bus600(600);			//버스 인스턴스

	//버스 탑승
	woo.takeBus(bus600);
	han.takeBus(bus600);
	han.takeBus(bus600);

	//정보 출력
	woo.displayInfo();
	han.displayInfo();
	bus600.displayInfo();

	return 0;
}