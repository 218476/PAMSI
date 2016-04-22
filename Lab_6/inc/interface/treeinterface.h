/*
 * treeinterface.h
 *
 *  Created on: 22 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_INTERFACE_TREEINTERFACE_H_
#define INC_INTERFACE_TREEINTERFACE_H_


class TreeInterface
{
private:
	int* tab;
public:
	virtual void Add (int x) = 0;
	virtual int  Find(int x) = 0;
};


#endif /* INC_INTERFACE_TREEINTERFACE_H_ */
