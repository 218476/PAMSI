/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/timer.h"


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;



void Test::Przygotuj(int n)
{
	srand(time(NULL));
	tst = new Graph(n);
	find = new Find(n);

	for(int i = 0; i < n; i++)
		tst->Add_Vertex(i);

	for(int i = 0; i < n*2; i++)
		tst->Add_Edge(rand() % n,rand() % n);
}

void Test::Badaj(int n)
{




	if(find->DST(rand() % n,rand() % n,tst))
		cout << "Znaleziono!" << endl;
	else
		cout << "Brak drogi" << endl;


}
