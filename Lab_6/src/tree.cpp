/*
 * tree.cpp
 *
 *  Created on: 22 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/tree.h"

Tree::Tree()
{
	end->Set_Color(BLACK);
	end->Set_Left(nullptr);
	end->Set_Right(nullptr);
	end->Set_Up(nullptr);
	end->Set_Value(0);

	root = end;
}

Tree::~Tree()
{
	this->Free(root);
}

void Tree::Free(TreeNode* node)
{
	if(node != end)
	{
		this->Free(node->Get_Left());
		this->Free(node->Get_Right());
		delete node;
	}
}

void Tree::RotateL(TreeNode* node)
{
	TreeNode * B_node;
	TreeNode * p_node;

	  B_node = node->Get_Right();
	  if(B_node != end)
	  {
	    p_node = node->Get_Up();
	    node->Get_Right() = B_node->Get_Left();
	    if(node->Get_Right() != end) node->Get_Right()->Get_Up() = node;

	    B_node->Get_Left() = node;
	    B_node->Get_Up = p_node;
	    node->Get_Up = B_node;

	    if(p_node != end)
	    {
	      if(p_node->Get_Left == node) p_node->Get_Left = B_node; else p_node->Get_Right = B_node;
	    }
	    else root = B_node;
	  }
}

void Tree::RotateR(TreeNode* node)
{
	 TreeNode* B_node;
	 TreeNode* p_node;

	  B_node = node->left;
	  if(B_node != &end)
	  {
	    p = node->up;
	    node->left = B_node->right;
	    if(node->left != &end) node->left->up = node;

	    B_node->right = node;
	    B_node->up = p_node;
	    node->up = B_node;

	    if(p_node != &end)
	    {
	      if(p_node->left == node) p_node->left = B_node; else p_node->right = B_node;
	    }
	    else root = B_node;
	  }
}

void Tree::Add(int x)
{

}

int Tree::Find(int x)
{

}



