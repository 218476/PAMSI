#ifndef guard_astar
#define guard_astar
#include "graph.h"
#include "stack.h"
class astar
{
private:
    bool empty(bool*,int);
    unsigned short int nerby(bool*, unsigned int*, int);
    stack path(unsigned short int, int, unsigned short int*);
public:
    stack search(graph, int, int);
};


#endif
