#include <iostream>
#include <fstream>
#include <cmath>

#include "../inc/test.h"
#include "../inc/timer.h"


using namespace std;
int main(int argc, char ** argv)
{
	Timer time;
	Test test;

	test.Przygotuj();
	cout << "Poczatek badan." << endl;
	time.Start();
	test.Badaj();
	time.Stop();
	cout << "Czas: " << time.Show() << " ms."<< endl;

	return 0;
}
