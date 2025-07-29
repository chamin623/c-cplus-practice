#include <iostream>
using namespace std;

//Member Ŭ���� ����
class Member {
private:
	string id; //���̵�
	string password; //�н�����

public:
	//������ - setter(�ܺ� �Է�)
	Member(string id, string password);
	string getId();
	string getPassword();
};


Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}

string Member::getId() {
	return id; //����� this �Ⱦ�
}
string Member::getPassword() {
	return password;
}


int main()
{
	const int SIZE = 3;

	//�迭�� �ν��Ͻ� ����
	Member mem[SIZE] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234"),
	};

	//Ư�� ȸ�� �˻�
	/*cout << "���̵�: " << mem[0].getId() << endl;
	cout << "�н�����: " << mem[0].getPassword() << endl;*/

	cout << "*********** ȸ�� ��Ȳ ***********\n";
	for (int i = 0;i < SIZE;i++) {
		cout << "���̵�: " << mem[i].getId() <<
			", �н�����: " << mem[i].getPassword() << endl;
	}

	return 0;
}