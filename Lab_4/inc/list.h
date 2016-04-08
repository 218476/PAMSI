/*
 * list.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_LIST_H_
#define INC_LIST_H_

#include "interface/listinterface.h"
#include "node.h"

class List : public List_Interface
{
private:
	Node* head;
	int   size;
	Node* Get_Position_Ptr(int pos);
	bool  Range_Check     (int pos);
public:
	virtual void Add    (int pos,int val);
	virtual void Remove (int pos);
	virtual int  Get    (int pos);
	virtual int  Get_Size   ();
	void         Fill       (int n);
	int		 Find 		(int val);
	             List   ();
	virtual ~List       ();
};


#endif /* INC_LIST_H_ */
