#ifndef STACK_H_
#define STACK_H_

#include "../list.h"

class Stack_Interface
{
private:
public:
	virtual int  Pop ()        = 0;
	virtual void Push(int val) = 0;
	virtual int  Get_Size()    = 0;
};

#endif
