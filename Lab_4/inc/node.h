/*
 * node.h
 *
 *  Created on: 7 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_NODE_H_
#define INC_NODE_H_

class Node
{
private:
	int val;
	Node* next;
public:
	Node* Get_Next();
	void  Set_Next(Node* );
	void  Set_Value(int val);
	int   Get_Value();
	Node();
};



#endif /* INC_NODE_H_ */
