#ifndef BANANA_H
#define BANANA_H

#include "Fruit.h"
#include <iostream>

class Banana : public Fruit
{
	public:
		Banana();
		~Banana();
		virtual std::string const& getName() const;
};

#endif