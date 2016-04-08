/*
 * quicksort.cpp
 *
 *  Created on: 8 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/quicksort.h"
#include <iostream>
using namespace std;

list* QuickSort::Sort(list* lista)
{
	tab = new int[lista->size()];
	tab_size = lista->size() - 1;

	for(int i = 0;i < tab_size; i++)
	{

		tab[i] = lista->get(0);
		lista->remove(1);
	}

	for(int i = 0; i < tab_size; i++)
		cout << tab[i] << endl;
	cout << endl;

	Sort(0,tab_size );


	for(int i = 0; i < tab_size; i++)
		cout << tab[i] << endl;


	//delete tab;
	return lista;

}

void QuickSort::Sort(int a, int b)
{
	if(b <= a) return;

	  int i = a - 1, j = b + 1,
	  pivot = tab[(a+b)/2];

	  while(1)
	  {
	    while(pivot>tab[++i]);

	    while(pivot<tab[--j]);

	    if( i <= j)
	      swap(tab[i],tab[j]);
	    else
	      break;
	  }

	  if(j > a)
		  Sort( a, j);
	  if(i < b)
		  Sort(i, b);

}
void QuickSort::Replace(int a, int b)
{

}
int QuickSort::Divide(int a, int b)
{
	return 1;
}
