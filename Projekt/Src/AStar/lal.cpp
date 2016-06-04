#include <iostream>
#include "../../Inc/AStar/stack.h"
#include "../../Inc/AStar/list.h"
#include "../../Inc/AStar/graph.h"
#include "../../Inc/AStar/astar.h"

/*
using namespace std;
int main(){
stack s1;
graph g1;
astar b1;
int i,s;
short int **macierz;
macierz = new short int*[LICZBA_PRZYSTANKOW+1];
for (i=0;i<=LICZBA_PRZYSTANKOW;i++)
macierz[i] = new short int[LICZBA_PRZYSTANKOW+1];
Macierz(macierz,LICZBA_PRZYSTANKOW);
g1.insert(LICZBA_PRZYSTANKOW+1,macierz);
s1=b1.search(g1,127,120);
s=s1.size();
for(i=0;i<s;i++)
{
    cout<<Tab[s1.pop()]<<" -> ";
    cout<<endl;
}

/* PRZYKLADOWE DZIALANIE ALGORYTMU A* */

/*
graph g1;
astar b1;
stack s1;
int i=0,s;
for(i=0;i<10;i++)
g1.add_vertex();
g1.add_edge(0,1,1);g1.add_edge(0,2,4);g1.add_edge(1,3,2);g1.add_edge(1,4,1);g1.add_edge(2,3,1);g1.add_edge(3,4,3);g1.add_edge(3,5,15);
g1.add_edge(4,7,2);g1.add_edge(5,6,3);g1.add_edge(5,9,1);g1.add_edge(6,7,1);g1.add_edge(6,8,2);g1.add_edge(7,8,1);
s1=b1.search(g1,0,9);
s=s1.size();
for(i=0;i<s;i++)
cout<<s1.pop()<<"->";
cout<<endl;
*//*
  return 0;
};
*/
