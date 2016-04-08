/*
 * quicksort.h
 *
 *  Created on: 8 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_QUICKSORT_H_
#define INC_QUICKSORT_H_

#include "../imp/list.h"


class QuickSort
{
private:
	int*  tab;
	int tab_size;
	int Divide(int a, int b);
	void Replace(int a, int b);
	void Sort(int a, int b);
public:
	list* Sort(list* lista);

};


#endif /* INC_QUICKSORT_H_ */
