/*
 * node.h
 *
 *  Created on: 7 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_NODE_H_
#define INC_NODE_H_
#include <string>


using namespace std;
class Node
{
private:
	std::string name;
	int value;
	Node* next;
public:
	Node*  Get_Next();
	void   Set_Next(Node* );
	void   Set_Value(std::string name, int value);
	std::string Get_Name();
	int    Get_Value();

	Node();
};



#endif /* INC_NODE_H_ */
