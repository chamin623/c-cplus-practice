#include <iostream>
using namespace std;

class Dog {
public:
	string type;
	int age;

	Dog();//�⺻ ������ �����
	Dog(string _type, int _age); //�Ű������� �ִ� ������

	void dogInfo(); //������ ���� �Լ� �����
	void bark();

	~Dog(); //�Ҹ���
};

//������ - ������(::  - ���� ������)
Dog::Dog() {
	cout << "������ �Դϴ�.\n";
}

//������ - �Ű������� �ִ� ������
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

//������ - �Լ�
void Dog::dogInfo() {
	cout << "������ ����: " << type << endl;
	cout << "������ ����: " << age << endl;
}

void Dog::bark() {
	cout << "��~ ��~\n";
}

Dog::~Dog() {
	cout << "�Ҹ����Դϴ�.\n";
}

int main()
{
	//�⺻�������� �ν��Ͻ� dog ����
	Dog dog;

	//dog1 �ν��Ͻ� ����
	Dog dog1("������", 3);
	dog1.dogInfo();
	dog1.bark();

	return 0;
}