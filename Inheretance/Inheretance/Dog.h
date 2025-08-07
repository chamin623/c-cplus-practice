#ifndef DOG_H
#define DOG_H
#include "Animal.h"

//Animal을 상속받은 Dog 클래스
class Dog : public Animal {
public:
	void cry() override;

	~Dog() override;
};

#endif