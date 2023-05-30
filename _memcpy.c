#include "lib.h"

/**
* _memcpy - copy string with range
* @dst: the destination
* @src: the source
* @range: the range of copying
* Return: the dst
*/
void *_memcpy(void *dst, const void *src, size_t range)
{
  size_t i;

  for (i = 0; i < range; ++i)
    ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
return (dst);
}

