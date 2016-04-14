/*
 * quicksort.cpp
 *
 *  Created on: 8 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/mergesort.h"
#include <iostream>
using namespace std;

void MergeSort::Merge(int a, int b, int c)
{
	int i,j,q;

	for (i=a; i<=c; i++)
		buf[i]=tab[i];

	i=a; j=b+1; q=a;

	while (i<=b && j<=c)
	{
		if (buf[i]<buf[j])
			tab[q++]=buf[i++];
		else
			tab[q++]=buf[j++];
	}

	while (i<=b) tab[q++]=buf[i++];
}

void MergeSort::Sort(int a, int c)
{
	int b;
	if (a<c)
	{
		b=(a+c)/2;
		Sort(a, b);
		Sort(b+1, c);
		Merge(a, b, c);
	}
}

list* MergeSort::Sort(list* lista)
{
	tab = new int[lista->size()];
	buf = new int[lista->size()];
	tab_size = lista->size();

	for(int i = 0;i < tab_size; i++)
	{

		tab[i] = lista->get(0);
		lista->remove(1);
	}

	Sort(0,tab_size - 1);

	for(int i = 0; i < tab_size; i++)
		lista->add(tab[i],0);



	delete[] tab;

	return lista;
}


























