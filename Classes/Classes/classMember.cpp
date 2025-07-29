#include <iostream>
using namespace std;

//Member 클래스 정의
class Member {
private:
	string id; //아이디
	string password; //패스워드

public:
	//생성자 - setter(외부 입력)
	Member(string id, string password);
	string getId();
	string getPassword();
};


Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}

string Member::getId() {
	return id; //출력은 this 안씀
}
string Member::getPassword() {
	return password;
}


int main()
{
	const int SIZE = 3;

	//배열로 인스턴스 생성
	Member mem[SIZE] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234"),
	};

	//특정 회원 검색
	/*cout << "아이디: " << mem[0].getId() << endl;
	cout << "패스워드: " << mem[0].getPassword() << endl;*/

	cout << "*********** 회원 현황 ***********\n";
	for (int i = 0;i < SIZE;i++) {
		cout << "아이디: " << mem[i].getId() <<
			", 패스워드: " << mem[i].getPassword() << endl;
	}

	return 0;
}