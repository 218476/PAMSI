/*
 * queue.cpp
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/queue.h"
#include <iostream>
using namespace std;

void Queue::Push(int val)
{
	data.Add(data.Get_Size(),val);
}

int Queue::Get()
{
	int tmp = 0;

	if(this->Get_Size() > 0)
	{
		tmp = data.Get(0);
		data.Remove(0);
	}
	else
	{
		throw "Out_Of_Range_Exception.";
	}
	return tmp;
}

int Queue::Get_Size()
{
	return data.Get_Size();
}

Queue::~Queue()
{

}
