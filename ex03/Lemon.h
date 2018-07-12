#ifndef LEMON_H_
#define LEMON_H_

#include "Fruit.h"

class Lemon : public Fruit
{
public:
	Lemon();

protected:
	Lemon(std::string name, int vitamins);
};

#endif 

