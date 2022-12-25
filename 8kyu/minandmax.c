#include <math.h>

int min(int* array, int arrayLength)
{
  int i;
  int n;
  
  i = 0;
  n = array[0];
  while (i < arrayLength)
    {
    if (array[i] < n)
      n = array[i];
    i++;
  }
  return (n);
}


int max(int* array, int arrayLength)
{
  int i;
  int m;
  
  i = 0;
  m = array[0];
  while (i < arrayLength)
    {
    if (array[i] > m)
      m = array[i];
    i++;
    }
  return (m);
}