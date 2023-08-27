#include "lib.h"
/**
* _memmove - move string from src to dst with range of n
* @dest : destination
* @src: source
* @n: range
* Return: the dest
*/
void *_memmove(void *dest, const void *src, size_t n)
{
  char *dst = (char *)dest;
  const char *str = (const char *)src;
  unsigned int i;
  char *tmp = (char *)malloc(sizeof(char) * n);

  if (!tmp) return (NULL);

  for (i = 0; i < n; ++i)
    tmp[i] = str[i];
  for (i = 0; i < n; ++i)
    dst[i] = tmp[i];
  free(tmp);

  return (dest);
}

