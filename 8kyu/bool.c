#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool all(int* arr, size_t size, Predicate fun) {
  size_t i = 0;
  
  if (arr == NULL)
    return true;
  
  while (i < size)
    {
    if (!fun(arr[i]))
      return false ;
    i++;
    }
  return true ;
}