#include <iostream>
#include <vector>
using namespace std;
/*
	vector 자료구조 - 내부에 배열을 가지고 있고
	요소를 저장, 검색, 삭제하는데 효율적이다.
	<vector> 헤더파일을 include 해야함
	- vector<자료형> 객체이름
*/
int main()
{
	//여러 개의 정수를 저장할 벡터 생성
	vector<int> vec;

	//요소 추가 - push_back(요소)
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	//벡터의 크기
	cout << vec.size() << endl; //3

	//요소 검색 - 1번 위치, at(인덱스)
	cout << vec[1] << endl; //20
	cout << vec.at(1) << endl; //20
	cout << "-----------------------\n";

	//요소 수정
	vec.at(2) = 50;

	//전체 출력
	for (int i = 0;i < vec.size();i++) {
		cout << vec.at(i) << endl;
	}

	return 0;
}