#ifndef DOG_H
#define DOG_H
#include "Animal.h"

//Animal�� ��ӹ��� Dog Ŭ����
class Dog : public Animal {
public:
	void cry() override;

	~Dog() override;
};

#endif