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
	return this->val;
}
void Node::Set_Next(Node* ptr)
{
	this->next = ptr;
}
void Node::Set_Value(int val)
{
	this->val = val;
}

Node::Node()
{
	this->next = 0;
	this->val  = 0;
}
