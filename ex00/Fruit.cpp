#include "Fruit.h"

Fruit::Fruit(std::string const& name, int vitamins) : _name(name), _vitamins(vitamins){}

Fruit::~Fruit(){}

int Fruit::getVitamins() const
{
	return _vitamins;
}
