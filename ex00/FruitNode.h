#ifndef FRUITNODE_H
#define FRUITNODE_H

#include "Fruit.h"

typedef struct s_FruitNode FruitNode;

struct s_FruitNode 
{
	Fruit const *node;
	FruitNode *next;
};

#endif