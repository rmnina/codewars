#include <stddef.h>
#include <stdlib.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[])
{
  if (n <= 0)
    exit(n);
  
  if (multiples == NULL)
    return;
  
  uint i;
  *count = 0;
  
  i = 1;
  while (n*i <= limit)
    {
    multiples[*count] = (n*i);
    i++;
    (*count)++;
    }
}