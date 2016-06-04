#include "../../Inc/AStar/stack.h"
#include <iostream>


int stack::size()
{
  return Size;
}

int stack::pop()
{
    if(Size > 0)
    {
        Size--;
        return tab[Size];
    }
    return -1;
}

void stack::push(int number)
{
  tab[Size] = number;
  Size++;
}

stack::stack()
{
    Size = 0;
}
