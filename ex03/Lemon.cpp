#include "Lemon.h"

Lemon::Lemon() :
	Fruit("lemon", 3)
{
}

Lemon::Lemon(std::string name, int vitamins) :
	Fruit(name, vitamins)
{
}

