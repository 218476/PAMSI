#ifndef guard_stack
#define guard_stack
#include "istack.h"
#include "list.h"



/*owijka listy dla struktury stosu*/
class stack
{
private:
    int tab[1024];
    int Size;
 public:
    int  pop(); /*zdejmuje element ze stosu i zwraca jego wartosc*/
    void push(int); /*wklada element na stos*/
    int  size();
    stack();

};

#endif
