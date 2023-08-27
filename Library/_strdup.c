#include "lib.h"
/**
* _strdup - it duplicate the string
* @s1: the string to be duplicate
* Return: the duplicated string
*/
char *_strdup(const char *s1)
{
  size_t i;
  /*allocate memory for string*/
  char *dst = malloc(_strlen(s1) + 1);
  /*safety for the allocation*/
  if (dst == NULL) return (NULL);
  /*cpy src to dst and return it at the end*/
  for (i = 0; i < s1[i]; i++)
    dst[i] = s1[i];
 return (dst);
}
int main() {
   char *str = "Helloworld";
   char *result;
   result = _strdup(str);
   printf("The string : %s\n", result);
   return 0;
}
