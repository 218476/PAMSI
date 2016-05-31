/*
 * find.cpp
 *
 *  Created on: 6 maj 2016
 *      Author: dmajchrz
 */




#include "../inc/find.h"
#include "../inc/list.h"

#include <iostream>

using namespace std;

Find::Find(int n)
{

	size = n;

	visited = new bool[n + 1];

	for(int i = 1; i < n + 1; i++)
		visited[i] = false;

}


bool Find::BST(int a, int b, Graph* ptr)
{
	List tmp;
	int  val;
	this->ptr = ptr;
	tmp.Add(0,"",a);
	visited[a] = true;

	while(tmp.Get_Size())
	{
		val = tmp.Get(0)->Get_Value();
		tmp.Remove(0);
		visited[val] = true;
		if(val == b) // znalezienie celu
		{
			//return true;
		}
		for(int i = 0; i < ptr->Get_Neighbours(val)->Get_Size(); i++)
		{
			if(!visited[ptr->Get_Neighbours(val)->Get(i)->Get_Value()])
				tmp.Add(0,"",ptr->Get_Neighbours(val)->Get(i)->Get_Value());
		}

	}

	return false;

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

	 // if(a == b)
	    //throw "Object_Found";



	  for(i = 0; i < ptr->Get_Neighbours(a)->Get_Size(); i++)
	  {
	    if(!visited[ptr->Get_Neighbours(a)->Get(i)->Get_Value()])
	    {
	    	DST_Rec(ptr->Get_Neighbours(a)->Get(i)->Get_Value(),b);
	    }
	  }

	  return true;
}

int Find::BB(int a, int b, Graph* ptr)
{

	unsigned int best_distance  = 1000000;
	unsigned int extensions 	= 0;
	unsigned int next 			= 0;
	unsigned int prev 			= 0;
	unsigned int current		= 0;


	Queue ojcowie;
	Queue synowie;
	Queue wartosci;

	  synowie.Push(a);
	  ojcowie.Push(a);
	  wartosci.Push(0);

	  while(ojcowie.Get_Size())
	  {
	    next = synowie.Get();
	    current = wartosci.Get();
	    prev = ojcowie.Get();

	    for (unsigned int i = 0; i < (unsigned)ptr->Get_Size(); ++i)
	    {
	      if((ptr->Get_Weight(next,i) > 0) && (i != prev))
	      {
	        if(current < best_distance)
	        {
	          extensions++;
	          synowie.Push(i);
	          wartosci.Push(ptr->Get_Weight(i,next) + current);
	          ojcowie.Push(next);

	          if ((i == (unsigned)b) && (ptr->Get_Weight(i,next) + current < best_distance ))
	          {
	             best_distance = current + ptr->Get_Weight(i,next);
	          }

	        }
	      }
	    }
	  }


	  cout << "Liczba rozwinięć: "<< extensions << endl;


	  return best_distance;
}


int Find::BB_Extended(int a, int b, Graph* ptr)
{
	unsigned int best_distance  = 1000000;
	unsigned int extensions 	= 0;
	unsigned int next 			= 0;
	unsigned int prev 			= 0;
	unsigned int current		= 0;


	Queue ojcowie;
	Queue synowie;
	Queue wartosci;

	  synowie.Push(a);
	  ojcowie.Push(a);
	  wartosci.Push(0);

	  while(ojcowie.Get_Size())
	  {
	    next = synowie.Get();
	    current = wartosci.Get();
	    prev = ojcowie.Get();

	    for (unsigned int i = 0; i < (unsigned)ptr->Get_Size(); ++i)
	    {
	      if((ptr->Get_Weight(next,i) > 0) && (i != prev))
	      {
	        if(current < best_distance)
	        {
	          extensions++;
	          synowie.Push(i);
	          wartosci.Push(ptr->Get_Weight(i,next) + current);
	          ojcowie.Push(next);

	          if ((i == (unsigned)b) && (ptr->Get_Weight(i,next) + current < best_distance ))
	          {
	             best_distance = current + ptr->Get_Weight(i,next);
	          }
	          if (i != (unsigned)b)
	          {
	        	  ptr->Add_Edge(next,i,0);
	        	  ptr->Add_Edge(i,next,0);
	          }

	        }
	      }
	    }
	  }


	  cout << "Liczba rozwinięć: "<< extensions << endl;


	  return best_distance;

}

