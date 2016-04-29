#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"

using namespace std;
int main(int argc, char ** argv)
{
	Timer time;
	Test  test;
	fstream plik;

	plik.open("wyniki.txt", ios::app | ios::out);
	plik << "------------------------------" << endl;
	plik << "-----------Nowy pommiar-------" << endl;
	plik << "------------------------------" << endl;

	int tmp = 0;



	for(int i = 0; i < 6; i++)
	{
		tmp = pow(10,i);
		test.Przygotuj(tmp);

		time.Start();
		test.Badaj(tmp);
		time.Stop();

		plik << "Rozmiar problemu: " << tmp << " - czas: " << (float)time.Show()/tmp << endl;
		cout << "Rozmiar problemu: " << tmp << " - czas: " << (float)time.Show()/tmp << endl;
	}
	return 0;
}
