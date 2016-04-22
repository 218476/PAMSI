/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/list.h"
#include "../inc/timer.h"


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;


string Test::Rand_String()
{

	unsigned int length = 4;
    auto randchar = []() -> char
    {
        const char charset[] ={
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    std::generate_n( str.begin(), length, randchar );
    return str;
}
void Test::Przygotuj(int n)
{
	std::string name = "";
	int numer        = 0;
	char buf[32];
	srand(time(NULL));

	for(int i = 0; i < n; i++)
	{
		dane.Add(Rand_String(),rand());
	}


}

void Test::Badaj(int n)
{
	string tmp;
	Timer tim;
	bool end = true;

	for(;;)
	{
		end = true;
		try
		{
			tmp = Rand_String();
			tim.Start();
			cout << "Nazwisko: " << tmp << "  numer: " <<  dane[tmp] << endl;
			dane.Remove(tmp);
		}
		catch(const char* str)
		{
			end = false;
		}

		if(end)
			{
				tim.Stop();
				throw tim.Show();
				break;
			}
	}
}
