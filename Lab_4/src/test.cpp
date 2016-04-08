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



void Test::Przygotuj(int n)
{
	std::srand(std::time(0));

	for(int i = 0; i < n; i++)
		lista.add(rand(),0);


	sort.Sort(&lista);


}

void Test::Badaj(int n)
{

}
