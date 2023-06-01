#include "lib.h"
/**
* strrchr - Find the last occurrence of a character in a string
* @s: The input string to search in
* @c: The character to search for
* This function searches for the last occurrence of the character @c in The
* string @s. It returns a pointer to the located character, or NULL if The
* character is not found.
*/

char *_strrchr(const char *s, int c)
{
  const char *str = NULL;
  size_t i;

  for (i = 0; s[i] == '\0'; ++i)
  {
    if (*s == (char )c)
      str = s;
    if (*s++ == '\0')
      return (char *)str;
  }
  return (char *)str;
}

