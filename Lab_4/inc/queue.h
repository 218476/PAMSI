/*
 * queue.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_


#include "interface/queueinterface.h"

class Queue
{
private:
	List data;
public:
	virtual int  Get   ();
	virtual void Push  (int val);
	virtual int  Get_Size  ();
	virtual ~Queue     ();
};

#endif /* INC_QUEUE_H_ */
