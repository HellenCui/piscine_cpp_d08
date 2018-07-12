#ifndef _FRUITBOX_H_
#define _FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
	private:
		int _size;
		int _nbFruits;
		FruitNode *list;

	public:
		FruitBox(int size);
		int nbFruits()const;
		int getSize()const;
		bool putFruit(Fruit *f);
		Fruit *pickFruit();
		FruitNode *head()const;
		std::string getClassName();
};


#endif 

