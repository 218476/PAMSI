/*
 * list.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_LIST_INTERFACE_H_
#define INC_LIST_INTERFACE_H_

#include "../node.h"

class List_Interface
{
private:
public:
	virtual void  Add        (int pos,std::string name,int value) = 0;
	virtual void  Remove     (int pos)         = 0;
	virtual Node* Get		 (int pos)  	   = 0;
	virtual int   Get_Size   ()                = 0;
};



#endif /* INC_LIST_H_ */
