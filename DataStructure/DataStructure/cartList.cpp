#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> carts;

	carts.push_back("���");
	carts.push_back("����");
	carts.push_back("ȭ����");
	carts.push_back("���");

	cout << "*** carts ����Ʈ ��� ***\n";
	for (auto cart : carts)
		cout << cart << " ";

	cout << "\n=============================\n";
	cout << "1. '����'�� '��'�� ����\n";
	carts.at(1) = "��";

	cout << "2. 'ȭ����' ����\n";
	vector<string>::iterator it = carts.begin();
	for (it;it != carts.end();it++) {
		if (*it == "ȭ����") {
			carts.erase(it);
			break;
		}
	}

	cout << "=============================\n";
	cout << "*** carts ����Ʈ ��� ***\n";
	for (auto it=carts.begin();it!=carts.end();it++)
		cout << *it << " ";

	return 0;
}