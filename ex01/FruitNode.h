#ifndef FRUITNODE_
#define FRUITNODE_

#include "Fruit.h"

typedef struct FruitNode fruitNode;

struct FruitNode
{
  Fruit const* elem;
  FruitNode* next;
};


#endif