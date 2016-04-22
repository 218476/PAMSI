/*
 * treenode.h
 *
 *  Created on: 22 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_TREENODE_H_
#define INC_TREENODE_H_


class TreeNode
{
private:
	TreeNode* left;
	TreeNode* right;
	TreeNode* up;
	bool 	  color;
	int 	  value;
public:
	void Set_Up    (TreeNode*);
	void Set_Right (TreeNode*);
	void Set_Left  (TreeNode*);
	void Set_Color (bool);
	void Set_Value (int);

	TreeNode* Get_Up    ();
	TreeNode* Get_Left  ();
	TreeNode* Get_Right ();
	bool      Get_Color ();
	int       Get_Value ();
};


#endif /* INC_TREENODE_H_ */
