/*
 * tabtes.h
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */


#ifndef TABTEST_H_
#define TABTEST_H_

#include "../imp/list.h"
#include "queue.h"
#include "stack.h"
#include "quicksort.h"

class Test
{
private:
	list  lista;
	Stack stos;
	Queue kolejka;
	QuickSort sort;
public:
	unsigned int problem_size;
	virtual void Badaj    (int n);
	virtual void Przygotuj(int n);
};


#endif /* TABTES_H_ */
