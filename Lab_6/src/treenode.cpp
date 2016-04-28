/*
 * treenode.cpp
 *
 *  Created on: 22 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/treenode.h"

TreeNode::TreeNode()
{
	this->color = false;
	this->value = 0;
	this->up    = nullptr;
	this->left	= nullptr;
	this->right = nullptr;
}
bool TreeNode::Get_Color()
{
	return this->color;
}
void TreeNode::Set_Color(bool color)
{
	this->color = color;
}

int TreeNode::Get_Value()
{
	return this->value;
}
void TreeNode::Set_Value(int value)
{
	this->value = value;
}

TreeNode* TreeNode::Get_Up()
{
	return this->up;
}
void TreeNode::Set_Up(TreeNode* node)
{
	this->up = node;
}
TreeNode* TreeNode::Get_Right()
{
	return this->right;
}
void TreeNode::Set_Right(TreeNode* node)
{
	this->right = node;
}
TreeNode* TreeNode::Get_Left()
{
	return this->left;
}
void TreeNode::Set_Left(TreeNode* node)
{
	this->left = node;
}
