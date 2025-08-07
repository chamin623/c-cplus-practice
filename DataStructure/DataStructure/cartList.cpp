#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> carts;

	carts.push_back("라면");
	carts.push_back("생수");
	carts.push_back("화장지");
	carts.push_back("계란");

	cout << "*** carts 리스트 출력 ***\n";
	for (auto cart : carts)
		cout << cart << " ";

	cout << "\n=============================\n";
	cout << "1. '생수'를 '쌀'로 변경\n";
	carts.at(1) = "쌀";

	cout << "2. '화장지' 삭제\n";
	vector<string>::iterator it = carts.begin();
	for (it;it != carts.end();it++) {
		if (*it == "화장지") {
			carts.erase(it);
			break;
		}
	}

	cout << "=============================\n";
	cout << "*** carts 리스트 출력 ***\n";
	for (auto it=carts.begin();it!=carts.end();it++)
		cout << *it << " ";

	return 0;
}