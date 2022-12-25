#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *string)
{
  int i;
  
  i = 0;
  while (string[i])
    i++;
  return (i);
}

char *to_jaden_case(char *jaden_case, const char *string)
{
  int i;
  
  i = 0;
  char *temp = malloc(sizeof(char) * ft_strlen(string) + 1);
  if (temp == NULL)
    return NULL;
  
  while (string[i])
    {
    if ((i == 0) && (string[i] >= 97) && (string[i] <= 122))
      temp[i] = string[i] - 32;
    else if ((string[i-1] == ' ') && (string[i] >= 97) && (string[i] <= 122))
      temp[i] = string[i] - 32;
    else temp[i] = string[i];
    i++;
    }
	temp[i] = '\0';
  
  i = 0;
  while (temp[i])
    {
    jaden_case[i] = temp[i];
    i++;
  }
  jaden_case[i] = '\0';
  
  free(temp);
	return jaden_case;
}

int main()
{
  char *jaden_case = NULL;
  const char *string = "How can mirrors be real if our eyes aren't real";

  jaden_case = malloc(sizeof(char) * ft_strlen(string) + 1);
  if (jaden_case == NULL)
    return -1; 

  jaden_case = to_jaden_case(jaden_case, string);
  printf("%s\n", jaden_case);
  free(jaden_case);

  return 0;
}
