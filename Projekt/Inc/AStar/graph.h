#ifndef guard_graph
#define guard_graph
#include "igraph.h"
#include "stack.h"
class graph: public igraph
{
private:
  short int **macierz; 			/*wskaznik na macierz sasiedztwa*/
  int rozmiar=0;			/*rozmiar macierzy*/
  void enlarge();			/*powieksza macierz (przy dodawaniu wierzcholka)*/
  void add_edge(int,int);		/*dodaje krawedz (pozostalosc po grafie bez wag)*/
 public:
  int weight(int,int);			/*zwraca wege polaczenia pomiedzy 2 wierzcholkami*/
  void insert(int,short int**);		/*wstawia zadana tablice jako macierz, wymaga rozmiaru 0 przed wywolaniem i podania rozmiaru tablicy*/
  int size(){return rozmiar;};		/*zwraca rozmiar grafu*/
  void add_vertex();			/*dodaje wierzcholek*/
  void add_edge(int,int,int);		/*dodaje krawedz*/
  stack get_neighbors(int);		/*zwraca stos z sasiadami danego wierzcholka*/
  bool is_connected(int,int);		/*zwraca wartosc logiczna w zaleznosci od istnienia krawedzi miedzy zadanymi wierzcholkami*/
};

#endif
