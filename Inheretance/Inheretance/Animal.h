#ifndef ANIMAL_H
#define ANIMAL_H

class Animal { //�߻� Ŭ����
public:
	//Animal(){}	//�⺻ ������ ����
	virtual ~Animal(); //���� �Ҹ���

	void breathe();
	virtual void cry() = 0;
};

#endif