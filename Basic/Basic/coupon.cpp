#include <iostream>
#include <string>
using namespace std;

int main()
{
	string born;
	char last;
	string day;

	cout << "출생연도 입력: ";
	cin >> born;

	if (born.length() != 4) {
		cout << "입력 오류: 출생년도는 4자리여야 합니다.\n";
		return 1;
	}

	last = born.at(3);

	switch (last) {
	case '1': case '6':
		day = "월요일";
		break;
	case '2': case '7':
		day = "화요일";
		break;
	case '3': case '8':
		day = "수요일";
		break;
	case '4': case '9':
		day = "목요일";
		break;
	case '5': case '0':
		day = "금요일";
		break;
	}

	cout << "신청일은 " << day << "입니다\n";

	return 0;
}