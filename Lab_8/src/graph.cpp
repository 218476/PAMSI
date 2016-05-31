/*
 * graph.cpp
 *
 *  Created on: 29 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/graph.h"

Graph::Graph(int size)
{
	edges  = new List[size + 1];
	vertex = new int [size + 1];

	cost_matrix = new int*[size + 1];
	for(int i = 0; i <= size;i++)
		cost_matrix[i] = new int[size + 1];

	for(int i = 0; i <= size; i++)
		for(int j = 0; j <= size; j++)
			cost_matrix[i][j] = -1;

	this->size = 0;
}
void Graph::Add_Edge(int a, int b, int weight)
{
	if((a != b) && (a >= 0) && (b >= 0) && (a < size) && (b < size))
	{
		edges[a].Add(0,"",b);
		edges[b].Add(0,"",a);
		cost_matrix[a][b] = weight;
		cost_matrix[b][a] = weight;
	}
}

void Graph::Add_Vertex(int x)
{
	if(x >= 0)
	{
		vertex[size] = x;
		this->size++;
	}
}

List* Graph::Get_Neighbours(int i)
{
	return &edges[i];
}

bool Graph::Is_Connected(int a, int b)
{
	for(int i = 0; i < edges[a].Get_Size(); i++)
	{
		if(edges[a].Get(i)->Get_Value() == b)
			return true;
	}
	return false;
}

int Graph::Get_Weight(int a, int b)
{
	int tmp = cost_matrix[a][b];
	return tmp;
}

int Graph::Get_Size()
{
	return size;
}
