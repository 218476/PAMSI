/*
 * list.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_LIST_INTERFACE_H_
#define INC_LIST_INTERFACE_H_

class List_Interface
{
private:
public:
	virtual void Add        (int pos,int val) = 0;
	virtual void Remove     (int pos)         = 0;
	virtual int  Get        (int pos)   	  = 0;
	virtual int  Size       ()				  = 0;
};



#endif /* INC_LIST_H_ */
