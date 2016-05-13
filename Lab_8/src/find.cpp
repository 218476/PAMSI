/*
 * find.cpp
 *
 *  Created on: 6 maj 2016
 *      Author: dmajchrz
 */




#include "../inc/find.h"
#include <iostream>

using namespace std;

Find::Find(int n)
{

	size = n;

	visited = new bool[n + 1];

	for(int i = 1; i < n + 1; i++)
		visited[i] = false;
}


bool Find::BST(int a, int b)
{
	return true;
};

bool Find::DST(int a, int b, Graph* ptr)
{
	bool found = false;
	this->ptr = ptr;
	try
	{
		DST_Rec(a,b);
	}
	catch(char const* str)
	{
		found = true;
	}
	return found;
};

bool Find::DST_Rec(int a, int b)
{
	  int i;

	  visited[a] = true;

	  //cout << a << endl;
	  if(a == b)
	    throw "Object_Found";



	  for(i = 0; i < ptr->Get_Neighbours(a)->Get_Size(); i++)
	  {
	    if(!visited[ptr->Get_Neighbours(a)->Get(i)->Get_Value()])
	    {
	    	DST_Rec(ptr->Get_Neighbours(a)->Get(i)->Get_Value(),b);
	    }
	  }

	  return true;
}
