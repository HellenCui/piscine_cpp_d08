#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _list(NULL)
{}

FruitBox::~FruitBox()
{
  FruitNode* node;
  while (_list)
  {
    node = _list;
    _list = _list->next;
    delete node;
  }
  
}

int FruitBox::nbFruits() const
{
  FruitNode* tmp = _list;
  int count = 0;
  while(tmp && tmp->elem)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
}

bool FruitBox::putFruit(Fruit const* add)
{
  FruitNode* tmp = _list;
  FruitNode* addNode = new FruitNode;
  addNode->elem = add;
  addNode->next = NULL;
  if (nbFruits() >= _size)
    return false;
  else if (tmp == NULL)
  {
    _list = addNode;
    return true;
  }
  while (tmp->next)
  {
    if (tmp->elem == add)
      return false;
    else
      tmp = tmp->next;
  }
  if (tmp->elem == add)
    return false;
  else
    tmp->next = addNode;
  return true;
}

Fruit* FruitBox::pickFruit()
{
  FruitNode* tmp = _list;
  Fruit const* ret;
  while (tmp)
  {
    if (tmp->elem)
    {
      ret = tmp->elem;
      _list = _list->next;
      delete tmp;
      return const_cast<Fruit*>(ret);
    }
    tmp = tmp->next;
  }
  return NULL;
}

FruitNode* FruitBox::head() const
{
  return _list;
}