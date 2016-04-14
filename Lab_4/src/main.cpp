#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"
#include "../imp/queue.h"

using namespace std;
int main(int argc, char ** argv)
{
	Timer time;
	Test  test;
	queue test_queue;
	fstream plik;

	plik.open("wyniki_mergesort.txt", ios::app | ios::out);
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

		cout << "Poczatek badan dla n = " << tmp << endl;
		time.Start();
		test.Badaj(tmp);
		time.Stop();
		cout << "Czas: " << time.Show() << " ms."<< endl;
		plik << tmp << ": " << time.Show() << endl;

	}
	return 0;
}
