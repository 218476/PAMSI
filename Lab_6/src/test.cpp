/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/tree.h"
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



}

void Test::Badaj(int n)
{
	try
	{
		for(int i = 0; i < n; i++)
			dane.Add(rand() % n);
	}
	catch(char* str)
	{
		cout << str;
	}
}
