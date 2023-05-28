#include "lib.h"
/**
 * _strncpy - The '_strncpy' function copies the characters from the 'src' string to the 'dest' string
 * until either 'n' characters have been copied, or the null-terminating character of 'src' is
 * encountered, whichever comes first.
 * @dest: The destination string where the characters will be copied.
 * @src: The source string from which the characters will be copied.
 * @n: The maximum number of characters to be copied.
 * @return A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
  size_t i, src_len = _strlen(src);

  for (i = 0; i < n && i < src_len; i++)
    dest[i] = src[i];
  for (; i < n; i++)
    dest[i] = '\0';
  return (dest);
}

