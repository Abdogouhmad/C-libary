#include "lib.h"
/**
* _memset - a function replance a byte b with specific value c 
* @b: the bytes needs to be replance
* @c: the new value
* @len: the range of replacing 
* Return: the new bytes
*/
void *_memset(void *b, int c, size_t len)
{
  size_t i;
  unsigned char *str = ( unsigned char *)b;

  for (i = 0; i < len; i++)
    *str++ = (unsigned char)c;
return (b);
}
