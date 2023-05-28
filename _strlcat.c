#include "lib.h"
#include <string.h>
/**
*
*
*/
size_t _strlcat(char *dst, const char *src, size_t size)
{
  size_t dst_len = _strlen(dst), src_len = _strlen(src);
  size_t i;
  size_t limitation = size - dst_len - 1; /*Calculate the safe limit for appending*/

  if (dst_len >= size) return (src_len + size);

  for (i = 0; i < src_len && i < limitation; i++)
    dst[dst_len + i] = src[i];
  dst[dst_len + i] = '\0';

  return (dst_len + src_len);
}

