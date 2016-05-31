/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/timer.h"
#include "../inc/queue.h"

#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;



void Test::Przygotuj(int n)
{





/*
	Queue t;

	t.Push(2);
	t.Push(3);
	t.Push(4);

	cout << t.Get() << endl;

	t.Push(5);

	cout << t.Get() << endl;
	cout << t.Get() << endl;
	cout << t.Get() << endl;
	cout << t.Get() << endl;
	cout << t.Get() << endl;
	cout << t.Get() << endl;

*/

	srand(time(NULL));
	tst = new Graph(n);
	find = new Find(n);

	for(int i = 0; i < n; i++)
		tst->Add_Vertex(i);

	for(int j = 0; j < 5 * n; j++)
		tst->Add_Edge(rand() % n, rand() % n,rand() % 100);

}

void Test::Badaj(int n)
{
	Timer time;

	int a = rand() % n;
	int b = rand() % n;

	time.Start();
		find->BB		  (a, b, tst);
	time.Stop();

	cout << "Czas BB: " << time.Show() << endl;



	time.Start();
		find->BB_Extended (a, b, tst);
	time.Stop();

	cout << "Czas BBExtended: " << time.Show() << endl << endl;

}
