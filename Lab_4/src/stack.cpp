#include "../inc/stack.h"
#include <iostream>

using namespace std;

void Stack::Push(int val)
{
	data.Add(data.Get_Size(), val);
}

int Stack::Pop()
{
	int tmp;



	tmp = data.Get(data.Get_Size() - 1);

	data.Remove(data.Get_Size() - 1);

	return tmp;
}

int Stack::Get_Size()
{
	return data.Get_Size();
}

Stack::~Stack()
{

}
