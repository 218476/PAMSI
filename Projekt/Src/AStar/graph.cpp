#include "../../Inc/AStar/graph.h"
#include "../../Inc/AStar/stack.h"


void graph::enlarge()
{

}

void graph::add_vertex()
{

}

void graph::add_edge(int x, int y, int w)
{

}

void graph::add_edge(int x, int y)
{

}

stack graph::get_neighbors(int x)
{
  stack s1;
  int i;
  if(x<rozmiar)
  {
    for(i=0;i<rozmiar;i++)
        if(macierz[x][i])
            s1.push(i);
    return s1;
  }
  else
  {
      //throw "out of range target for get neighbors!";
  }
}



bool graph::is_connected(int x, int y)
{
  if(x<=rozmiar && y<=rozmiar)
    {
        if(macierz[x][y]!=0)
            return 1;
        else
            return 0;
    }
  else 
    //throw "out of range target for connection check";
  return 0;
}

void graph::insert(int x, short int **mac)
{
  macierz = mac;
  rozmiar = x;
}

int graph::weight(int x, int y)
{
    return macierz[x][y];
}


