#ifndef FRUIT_NODE_H_
#define FRUIT_NODE_H_

#include "Fruit.h"

#define Fruitnode FruitNode

typedef struct FruitNode {
	const Fruit *fruit;
	struct FruitNode *next;
} FruitNode;

#endif 

