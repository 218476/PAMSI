/*
 * quicksort.h
 *
 *  Created on: 8 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_QUICKSORT_H_
#define INC_QUICKSORT_H_

#include "../imp/list.h"
#include "interface/sortinterface.h"

class QuickSort : public SortInterface
{
private:
	int*  tab;
	int tab_size;
	void Sort(int a, int b);
public:
	list* Sort(list* lista);

};


#endif /* INC_QUICKSORT_H_ */
