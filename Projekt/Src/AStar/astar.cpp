#include "../../Inc/AStar/astar.h"
#include <QMessageBox>

#define LICZBA_PRZYSTANKOW 178


bool astar::empty(bool *tab, int size){		/*sprawdza czy wszystkie elementy tabliy to 0*/
int i;
    for(i = 0;i < size;i++)
        if(tab[i]==1)
            return 0;

    return 1;
}

unsigned short int astar::nerby(bool *open, unsigned int *distance,int size)
{


int i, nerby, nerby_value=-1;
for (i=0;i<size;i++)
    {
	if(open[i])
	    {
            if(nerby_value==-1 || (signed)distance[i] < nerby_value)
            {
                nerby=i;
                nerby_value=distance[i];
            }
	    }
    }

return nerby;

}

stack astar::path(unsigned short int current, int start, unsigned short int *prev)
{

stack s;
int temp=current;
s.push(temp);
while(temp!=start)
    {
        temp=prev[temp];
        s.push(temp);
    }
return s;
}

stack astar::search(graph g1, int start, int target)
{
    stack neighbors;
    int size=g1.size();				/*rozmiar grafu*/
    unsigned int *distance;				/*odleglosc do danego elementu od startowego wierzcholka*/
    unsigned short int *prev;			/*poprzedni wierzcholek danego wierzcholka dla ustalenia polaczenia*/
    unsigned int shortest=0, dist;			/*dlugosc najkrotszej znalezionej drogi*/
    unsigned short int current=0, temp;		/*rozwazany obecnie element*/

    bool open[LICZBA_PRZYSTANKOW + 1] = {0};
    bool closed[LICZBA_PRZYSTANKOW + 1] = {0};

    distance    = new unsigned int[size];
    prev        = new unsigned short int[size];

    for(int i = 0; i <= LICZBA_PRZYSTANKOW; i++)
    {
        distance[i] = 0;
        prev[i] = 0;
    }
    open[start] =   1;


while(!empty(open,size))
    {

    current =   nerby(open,distance,size);
    if(current==target) return path(current, start, prev);
	open[current]=0;
	closed[current]=1;
    neighbors =g1.get_neighbors(current);
    while(neighbors.size()>0)
	    {
        temp=neighbors.pop();

		if(closed[temp] || open[temp])
		    {
			if(distance[temp]>(distance[current]+g1.weight(current,temp)))
                {

				distance[temp]=distance[current]+g1.weight(current,temp);
                prev[temp]=current;
			    }
		    }
		if((!open[temp]) && (!closed[temp]))
		    {
			open[temp]=1;
			distance[temp]=distance[current]+g1.weight(current,temp);
			prev[temp]=current;
		    }
	    }
    }
throw "not connected";
}
