#include <iostream>
#include <string>
using namespace std;

int main()
{
	string born;
	char last;
	string day;

	cout << "������� �Է�: ";
	cin >> born;

	if (born.length() != 4) {
		cout << "�Է� ����: ����⵵�� 4�ڸ����� �մϴ�.\n";
		return 1;
	}

	last = born.at(3);

	switch (last) {
	case '1': case '6':
		day = "������";
		break;
	case '2': case '7':
		day = "ȭ����";
		break;
	case '3': case '8':
		day = "������";
		break;
	case '4': case '9':
		day = "�����";
		break;
	case '5': case '0':
		day = "�ݿ���";
		break;
	}

	cout << "��û���� " << day << "�Դϴ�\n";

	return 0;
}