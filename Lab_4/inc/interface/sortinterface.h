/*
 * sortinterface.h
 *
 *  Created on: 14 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_INTERFACE_SORTINTERFACE_H_
#define INC_INTERFACE_SORTINTERFACE_H_

#include "../../imp/list.h"

class SortInterface
{
private:
	int*  tab;
	int   tab_size;

public:
	virtual list* Sort(list* lista) = 0;

};

#endif /* INC_INTERFACE_SORTINTERFACE_H_ */
