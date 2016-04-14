/*
 * mergesort.h
 *
 *  Created on: 14 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_MERGESORT_H_
#define INC_MERGESORT_H_


#include "../imp/list.h"
#include "interface/sortinterface.h"

class MergeSort : public SortInterface
{
private:
	int*  tab;
	int*  buf;
	int   tab_size;

	void Sort(int a, int c);
	void Merge(int a, int b,int c);
public:
	list* Sort(list* lista);

};



#endif /* INC_MERGESORT_H_ */
