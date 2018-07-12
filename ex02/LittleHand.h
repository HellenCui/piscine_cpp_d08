#ifndef _LITTLEHAND_H_
#define _LITTLEHAND_H_

#include "FruitBox.h"
#include "Coconut.h"

class LittleHand 
{

	public:
		static void  sortFruitBox(FruitBox &unsorted , FruitBox &lemons , FruitBox &bananas , FruitBox &limes);
		static FruitBox * const *organizeCoconut(Coconut const * const *coconuts);
};


#endif 

