#include "lib.h"
/**
* _bzero - access the bytes of void and changed them to 0
* @s: the number of bites 
* @n: the size of the bytes or range of the bytes
* Return: void
*/
void _bzero(void *s, size_t n)
{
  size_t i;

  if (s == NULL)
    return ;

  for (i = 0; i < n; i++)
    ((unsigned char *)s)[i]=0;
}

