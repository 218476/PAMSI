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
	data.Add(data.Get_Size(),"",val);
}

int Queue::Get()
{
	Node* tmp;

	if(this->Get_Size() > 0)
	{
		tmp = data.Get(0);
		data.Remove(0);
	}
	else
	{
		throw "Out_Of_Range_Exception.";
	}
	return tmp->Get_Value();
}

int Queue::Get_Size()
{
	return data.Get_Size() - 1;
}

Queue::Queue()
{
	data.Add(data.Get_Size(),"",0);
}
Queue::~Queue()
{

}
