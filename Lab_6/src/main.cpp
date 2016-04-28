#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"
#include "../imp/queue.h"
#include "../inc/map.h"

using namespace std;
int main(int argc, char ** argv)
{
	Timer time;
	Test  test;
	queue test_queue;
	fstream plik;

	plik.open("wyniki.txt", ios::app | ios::out);
	plik << "------------------------------" << endl;
	plik << "-----------Nowy pommiar-------" << endl;
	plik << "------------------------------" << endl;

	int tmp = 0;

	test_queue.push(10);
	test_queue.push(100);
	test_queue.push(1000);
	test_queue.push(10000);
	test_queue.push(100000);
	test_queue.push(1000000);
	test_queue.push(10000000);
	//test_queue.push(100000000);
	//test_queue.push(1000000000);

	while(test_queue.size() > 0)
	{
		tmp = test_queue.pop();
		test.Przygotuj(tmp);

		time.Start();
		test.Badaj(tmp);
		time.Stop();

		plik << "Rozmiar problemu: " << tmp << " - czas: " << (float)time.Show()/tmp << endl;
		cout << "Rozmiar problemu: " << tmp << " - czas: " << (float)time.Show()/tmp << endl;
	}
	return 0;
}
