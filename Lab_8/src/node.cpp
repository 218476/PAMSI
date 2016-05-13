/*
 * node.cpp
 *
 *  Created on: 7 kwi 2016
 *      Author: dmajchrz
 */


#include "../inc/node.h"

Node* Node::Get_Next()
{
	return next;
}

int Node::Get_Value()
{
	return this->value;
}

string Node::Get_Name()
{
	return this->name;
}
void Node::Set_Next(Node* ptr)
{
	this->next = ptr;
}
void Node::Set_Value(std::string name, int value)
{
	this->name  = name;
	this->value = value;
}

Node::Node()
{
	this->next  = 0;
	this->value = 0;
	this->name  = "";

}
