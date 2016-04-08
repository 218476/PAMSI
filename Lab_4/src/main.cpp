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
	int tmp = 0;


	test_queue.push(10);
	//test_queue.push(100);
	//test_queue.push(1000);
	//test_queue.push(10000);
	//test_queue.push(100000);
	//test_queue.push(1000000);
	//test_queue.push(10000000);
	//test_queue.push(100000000);
	//test_queue.push(1000000000);

	while(test_queue.size() > 0)
	{
		tmp = test_queue.pop();

		cout << "Poczatek badan dla n = " << tmp << endl;
		test.Przygotuj(tmp);
		time.Start();
		test.Badaj(tmp);
		time.Stop();
		cout << "Czas: " << time.Show() << " ms."<< endl;
	}
	return 0;
}
