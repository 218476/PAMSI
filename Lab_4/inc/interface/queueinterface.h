/*
 * gueueinterface.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_GUEUEINTERFACE_H_
#define INC_GUEUEINTERFACE_H_

#include "../list.h"


class QueueInterface
{
private:
public:
	virtual int  Get()         = 0;
	virtual void Push(int val) = 0;
	virtual int  Size()        = 0;
};


#endif /* INC_GUEUEINTERFACE_H_ */
