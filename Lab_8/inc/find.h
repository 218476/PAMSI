/*
 * find.h
 *
 *  Created on: 6 maj 2016
 *      Author: dmajchrz
 */

#ifndef INC_FIND_H_
#define INC_FIND_H_

#include "graph.h"
#include "list.h"
#include "queue.h"


class Find
{
private:
	int size;
	bool* visited;
	bool DST_Rec(int a, int b);
	Graph* ptr;
public:
	bool BST 			(int a, int b, Graph* ptr);
	bool DST 			(int a, int b, Graph* ptr);
	int  BB 		 	(int a, int b, Graph* ptr);
	int  BB_Extended	(int a, int b, Graph* ptr);
		 Find			(int n);
};



#endif /* INC_FIND_H_ */
