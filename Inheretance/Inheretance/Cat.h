#ifndef CAT_H
#define CAT_H
#include "Animal.h"

//Animal을 상속받은 Cat 클래스
class Cat : public Animal {
public:
	void cry() override;

	~Cat() override;
};

#endif