#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//여러 개의 문자열을 저장할 벡터 객체 생성
	vector<string> list;

	//요소 저장
	list.push_back("jerry");
	list.push_back("luna");
	list.push_back("han");
	list.push_back("elsa");

	//요소의 개수
	cout << list.size() << endl;

	//2번 인덱스 요소 검색
	cout << list.at(2) << endl;

	//전체 출력
	for (int i = 0;i < list.size();i++) {
		cout << list[i] << endl;
	}

	//사전에서 가장 뒤에 나오는 이름 -> 최대값과 유사함
	//단어의 첫글자(아스키 코드의 크기로 정렬 a-97, b-98)
	string name; //이름 변수 선언
	name = list.at(0); //0번 인덱스를 최대값으로 설정

	for (int i = 0;i < list.size();i++) {
		//if 비교 연산
		if (name < list[i])
			name = list[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl; //luna

	return 0;
}