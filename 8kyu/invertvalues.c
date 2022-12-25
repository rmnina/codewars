#include <stddef.h>

void invert(int *values, size_t values_size)
{
  size_t i;
  i = 0;
  while (i < values_size)
  {
    values[i] = -values[i];
    i++;
  }
}