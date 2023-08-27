#include "lib.h"
/**
 * _memccpy - copy string to dst with range and cpying untill reach the c then
 * stop
 * @dst: ----
 * @src: ---
 * @c: the character that will stop at 
 * @n: the range 
 * Return: void
*/
void *_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;
  const char *main = (const char *)src;
  char *sec = (char *)dst;
  unsigned char target = (unsigned char)c;

  for (i = 0; i < n; ++i)
  {
    sec[i] = main[i];
    if (main[i] == target)
      /*the plus 1 indicates the terminated byte that should be also printed*/
      return &(sec[i + 1]);
  }
  return (NULL);
}

