/*
 * stack.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_STACK_H_
#define INC_STACK_H_



#include "interface/stackinterface.h"

class Stack :public Stack_Interface
{
private:
	List data;
public:
	virtual int  Pop ();
	virtual void Push(int val);
	virtual int  Get_Size();
	virtual ~Stack   ();
};

#endif /* INC_STACK_H_ */
