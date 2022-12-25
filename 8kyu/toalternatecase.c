#include <stdlib.h>

int ft_strlen(const char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
  return (i);
}

char *to_alternate_case(const char *s) 
{
  char *str;
  int i;
  
  i = 0;
  str = malloc(sizeof(char) * (ft_strlen(s) + 1));
  if (str == NULL)
    return 0;
  while (s[i])
  {
    if (s[i] >= 65 && s[i] <= 90)
      str[i] = s[i] + 32;
    else if (s[i] >= 97 && s[i] <= 122)
      str[i] = s[i] - 32;
    else 
      str[i] = s[i];
    i++;
  }
  str[i] = '\0';
  return (str); 
}