#include <iostream>
using namespace std;
/*
	�⺻ �Ű� ����(default parameter)
	- �⺻���� ������ �Լ��� �Ű�����
	- ȣ��� �����ϸ� �⺻���� ���޵�
	- (�� �ڿ� �;���)
*/

void take(int busNumber, int fee = 1500) {
	cout << busNumber << "�� ���� ���: " << fee << "��" << endl;
}

int main()
{
	take(101); //�Ű����� ���� �����ϸ� �⺻���� ���
	take(101, 1600);
	take(740);

	return 0;
}