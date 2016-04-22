/*
 * hash.cpp
 *
 *  Created on: 21 kwi 2016
 *      Author: dmajchrz
 */


#include "../inc/hash.h"
#include <cmath>
using namespace std;

int Hash::Get_Hash(string str)
{
	unsigned int tmp = 0;
	for(int i = 0; i < str.length(); i++)
	{
		tmp += str.at(i) * pow(10,i);
	}

	return tmp % bucket_amount;
}

int Hash::Get_Bucket_Amount()
{
	return bucket_amount;
}

void Hash::Set_Bucket_Amount(unsigned int bucket_amount)
{
	this->bucket_amount = bucket_amount;
}
