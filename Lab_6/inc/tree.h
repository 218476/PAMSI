/*
 * tree.h
 *
 *  Created on: 22 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_TREE_H_
#define INC_TREE_H_

#include "interface/treeinterface.h"
#include "treenode.h"
#include <string>
#include <iostream>

#define BLACK true
#define RED   false




class Tree : public TreeInterface
{
private:
	std::string cr,cl,cp;       // Łańcuchy do znaków ramek

	TreeNode* end;
	TreeNode* root;
	void RotateL(TreeNode* node);
	void RotateR(TreeNode* node);
	void Free	(TreeNode* node);
public:
	virtual void Add (int x);
	virtual int  Find(int x);
	Tree();
	~Tree();
};


#endif /* INC_TREE_H_ */
