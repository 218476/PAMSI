/*
 * list.cpp
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */


#include "../inc/list.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

List::List()
{
	this->head = new Node();
	this->size = 0;
	this->head->Set_Next(0);
	this->head->Set_Value(0);
}

Node* List::Get_Position_Ptr(int pos)
{
	Node* tmp = this->head;
	for(int i = 0; i < pos;i++)
	{
		tmp = tmp->Get_Next();
	}
	return tmp;
}

int List::Find(int val)
{
	Node* tmp = this->head;
	for(int i = 0;i < this->size - 1;i++)
	{

		{
			tmp = tmp->Get_Next();
		}

	}
	return tmp->Get_Value();
}
void List::Fill(int n)
{
	std::srand(std::time(0));
	Node* tmp = this->head;
	Node* element;
	for(int i = 0; i < n; i++)
	{
		tmp->Set_Value(i);
		element = new Node();
		tmp->Set_Next(element);
		tmp = tmp->Get_Next();


		this->size++;
	}
}
void List::Add(int pos,int val)
{
	if(Range_Check(pos))
	{
		Node* tmp = Get_Position_Ptr(pos);
		Node* element = new Node();

		element->Set_Next(tmp->Get_Next());
		element->Set_Value(tmp->Get_Value());

		tmp->Set_Next(element);
		tmp->Set_Value(val);

		this->size++;
	}
	else
		throw "Out_Of_Range_Exception.";

}
void List::Remove(int pos)
{
	if(Range_Check(pos))
	{
		if(pos == 0)
		{
			this->head->Set_Value(this->head->Get_Next()->Get_Value());
			this->head->Set_Next(this->head->Get_Next()->Get_Next());
		}
		else
		{
			Node* tmp = Get_Position_Ptr(pos - 1);
			Node* deleted_ptr = tmp->Get_Next();

			tmp->Set_Next(deleted_ptr->Get_Next());
			delete deleted_ptr;
		}
		this->size--;
	}
	else
		throw "Out_Of_Range_Exception.";

}
int  List::Get(int pos)
{
	if(Range_Check(pos))
	{
		Node* tmp = Get_Position_Ptr(pos);

		return tmp->Get_Value();
	}
	else
	{
		throw "Out_Of_Range_Exception.";
		return -1;
	}
}
int  List::Get_Size()
{
	return this->size;
}

bool List::Range_Check(int pos)
{
	if(pos > size || pos < 0)
		return false;
	else
		return true;
}
List::~List()
{

}

