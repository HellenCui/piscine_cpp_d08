#include "FruitBox.h"

FruitBox::FruitBox(int const size) : _size(size), _list(NULL){}

FruitBox::~FruitBox()
{
	FruitNode *temp = NULL;
	while(_list)
	{
		temp = _list;
		_list = _list->next;
		delete del;
	}
}		
int FruitBox::nbFruits() const
{
	FruitNode *temp;
	temp = _list;
	int num = 0;
	while(temp && temp->node != NULL)
	{
		num++;
		temp = temp->next;
	}
	return num;
}
bool FruitBox::putFruit(Fruit const* f)
{
	FruitNode *l = _list;
	FruitNode *t = new FruitNode;
	t->node = f;
	t->next = NULL;
	if(nbFruits() >= _size)
		return false;
	if(nbFruits() < _size && l == NULL)
	{
		_list = t;
		return true;
	}
	while(l->next)
	{
		if(l->node == f)
			return false;
		l = l->next;
	}
	if(l->node == f)
		return false;
	
	l->next = t;
	return true;
	
}
Fruit* FruitBox::pickFruit()
{
	FruitNode *temp = _list;
	Fruit const * num;
	while(temp)
	{
		if(temp->node)
		{
			num = temp->node;
			_list = _list->next;
			delete temp;
			return const_cast<Fruit*>(num); 
		}
		temp = temp->next;
	}
	return NULL;
}

FruitNode* FruitBox::head() const
{
	return _list;
}