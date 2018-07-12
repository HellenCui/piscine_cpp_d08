#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>

class Fruit
{
	public:
		Fruit(std::string const& name,int vitamins);
		virtual ~Fruit();
		virtual std::string const& getName() const = 0;;
		int getVitamins() const;
		
	protected:
		std::string _name;
		int _vitamins;
		
};

#endif