/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/list.h"


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define N 200000000

void Test::Przygotuj(int n)
{
	try
	{
		lista.Fill(n);
	}
	catch(const char* str)
	{

	}


}

void Test::Badaj(int n)
{
	int pos = 0;
	try
	{
		pos = lista.Find(2);
	}
	catch(const char* str)
	{

	};
}
