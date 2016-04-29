/*
 * graph.h
 *
 *  Created on: 29 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_GRAPH_H_
#define INC_GRAPH_H_


#include "interface/graphinterface.h"


class Graph : public GraphInterface
{
private:
	List dane[];
public:
	void  Add_Vertex     (int x);
	void  Add_Edge       (int a, int b);
	List* Get_Neighbours (int i);
	bool  Is_Connected   (int a, int b);
		  Graph			 ();
};


#endif /* INC_GRAPH_H_ */
