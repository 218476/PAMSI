/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/list.h"



#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;



void Test::Przygotuj(int n)
{
	std::string name = "";
	int numer        = 0;
	char buf[32];

	for(int i = 0; i < n; i++)
	{
		cout << "Podaj NAZWISKO i NR: ";
		cin >> name;
		cin >> numer;

		dane.Add(name,numer);

	}


}

void Test::Badaj(int n)
{
	cout << "Nazwisko: " << "Maj" << "  nr telefonu: " << dane["Maj"]  << endl;
}
