#include <iostream>
using namespace std;
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	//���� ��ü(�ν��Ͻ�) ����
	//������ �θ� �ڷ������� �ν��Ͻ� ����
	//�θ� �ڷᰡ �� ŭ. �ڵ� ����ȯ
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//��� ����
	cat->breathe();
	cat->cry();

	dog->breathe();
	dog->cry();

	delete cat; //�޸� ����
	delete dog;

	/*//Cat ������ ȣ��
	Cat cat;
	cat.breathe();
	cat.cry();

	//Dog ������ ȣ��
	Dog dog;
	dog.breathe();
	dog.cry();*/

	return 0;
}