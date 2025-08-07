#include <iostream>
using namespace std;

#include "Drink.h"
#include "Alcohol.h"

int main()
{
	//Drink 생성자 호출
	Drink coffee("커피", 2500, 4);
	Drink tea("녹차", 3000, 3);

	//Alcohol 생성자 호출
	Alcohol soju("소주", 3500, 2, 14.3f);

	Drink::printTitle();	//static이므로 공유
	coffee.printData();
	tea.printData();
	soju.printData();

	//매출 금액의 총 합계
	int total = coffee.calcPrice() + tea.calcPrice()
		+ soju.calcPrice();
	cout << "***** 합계 금액: " << total << "원 *****\n";

	return 0;
}