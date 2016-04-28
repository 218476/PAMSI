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
	    node->Set_Right(B_node->Get_Left());
	    if(node->Get_Right() != end)
	    	node->Get_Right()->Set_Up(node);

	    B_node->Set_Left(node);
	    B_node->Set_Up(p_node);
	    node  ->Set_Up(B_node);

	    if(p_node != end)
	    {
	      if(p_node->Get_Left() == node)
	    	  p_node->Set_Left(B_node);
	      else
	    	  p_node->Set_Right(B_node);
	    }
	    else root = B_node;
	  }
}

void Tree::RotateR(TreeNode* node)
{
	 TreeNode* B_node;
	 TreeNode* p_node;

	  B_node = node->Get_Left();
	  if(B_node != end)
	  {
	    p_node = node->Get_Up();
	    node->Set_Left(B_node->Get_Right());
	    if(node->Get_Left() != end)
	    	node->Get_Left()->Set_Up(node);

	    B_node->Set_Right(node);
	    B_node->Set_Up(p_node);
	    node  ->Set_Up(B_node);

	    if(p_node != end)
	    {
	      if(p_node->Get_Left() == node)
	    	 p_node->Set_Left(B_node);
	      else
	    	 p_node->Set_Right(B_node);
	    }
	    else root = B_node;
	  }
}

void Tree::Add(int x)
{
	TreeNode * tmp, * Y;

	  tmp = new TreeNode;
	  tmp->Set_Left (end);
	  tmp->Set_Right(end);
	  tmp->Set_Up   (root);
	  tmp->Set_Value(x);


	  if(tmp->Get_Up() == end)
	  {
		  root = tmp;
	  }
	  else
	  {
		  while(true)
		  {
			if(x < tmp->Get_Up()->Get_Value())
			{

			  if(tmp->Get_Up()->Get_Left() == end)
			  {
				tmp->Get_Up()->Set_Left(tmp);
				break;

			  }
			  tmp->Set_Up(tmp->Get_Up()->Get_Left());
			}
			else
			{
			  if(tmp->Get_Up()->Get_Right() == end)
			  {
				tmp->Get_Up()->Set_Right(tmp);
				break;
			  }
			  tmp->Set_Up(tmp->Get_Up()->Get_Right());
			}
		  }
	  }
	  tmp->Set_Color(RED);


	  while((tmp != root) && (tmp->Get_Up()->Get_Color() == RED))
	  {
	    if(tmp->Get_Up() == tmp->Get_Up()->Get_Up()->Get_Left())
	    {
	      Y = tmp->Get_Up()->Get_Up()->Get_Right();

	      if(Y->Get_Color() == RED)
	      {
	        tmp->Get_Up()->Set_Color(BLACK);
	        Y->Set_Color(BLACK);
	        tmp->Get_Up()->Get_Up()->Set_Color(RED);
	        tmp = tmp->Get_Up()->Get_Up();
	        continue;
	      }

	      if(tmp == tmp->Get_Up()->Get_Right())
	      {
	        tmp = tmp->Get_Up();
	        RotateL(tmp);
	      }

	      tmp->Get_Up()->Set_Color(BLACK);
	      tmp->Get_Up()->Get_Up()->Set_Color(RED);
	      RotateR(tmp->Get_Up()->Get_Up());
	      break;
	    }
	    else
	    {
	      Y = tmp->Get_Up()->Get_Up()->Get_Left();

	      if(Y->Get_Color() == RED) // Przypadek 1
	      {
	        tmp->Get_Up()->Set_Color (BLACK);
	        Y->Set_Color(BLACK);
	        tmp->Get_Up()->Get_Up()->Set_Color(RED);
	        tmp = tmp->Get_Up()->Get_Up();
	        continue;
	      }

	      if(tmp == tmp->Get_Up()->Get_Left()) // Przypadek 2
	      {
	        tmp = tmp->Get_Up();
	        RotateR(tmp);
	      }

	      tmp->Get_Up()->Set_Color(BLACK); // Przypadek 3
	      tmp->Get_Up()->Get_Up()->Set_Color(RED);
	      RotateL(tmp->Get_Up()->Get_Up());
	      break;
	    }
	  }
	  root->Set_Color(BLACK);
}

int Tree::Find(int x)
{

	  TreeNode * p;

	  p = root;

	  while((p != end) && (p->Get_Value() != x))
	  {
	    if(x < p->Get_Value())
	    	p = p->Get_Left();
	    else
	    	p = p->Get_Right();
	  }
	  if(p == end)
	  {
		  throw "Object_Not_Found_Exception";
		  return -1;
	  }
	  return p->Get_Value();
}

