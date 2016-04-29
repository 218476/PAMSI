/*
 * graphinterface.h
 *
 *  Created on: 29 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_INTERFACE_GRAPHINTERFACE_H_
#define INC_INTERFACE_GRAPHINTERFACE_H_

#include "../list.h"


class GraphInterface
{
private:

public:
	virtual void  Add_Vertex     (int x)        = 0;
	virtual void  Add_Edge       (int a, int b) = 0;
	virtual List* Get_Neighbours (int i)        = 0;
	virtual bool  Is_Connected   (int a, int b) = 0;
};


#endif /* INC_INTERFACE_GRAPHINTERFACE_H_ */
