#ifndef _FRUIT_H_
#define _FRUIT_H_

#include <iostream>

class Fruit
{
	protected:
		std::string _name;
		int _vitamins;
		
	public:
		Fruit();
		std::string getName()const;
		int getVitamins()const;

};


#endif 

