#ifndef CAT_H
#define CAT_H
#include "Animal.h"

//Animal�� ��ӹ��� Cat Ŭ����
class Cat : public Animal {
public:
	void cry() override;

	~Cat() override;
};

#endif