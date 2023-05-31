#include "lib.h"

/**
* _memchr - search for specific character through string
* @s: the string
* @c: the character that needs to be looking for 
* @n: the range 
* Return: a pointer to the first occurrence of the character c withinthe
* memory area pointed to by s.
*/
void *_memchr(const void *s, int c, size_t n)
{
  const unsigned char *string = (const unsigned char*)s;
  unsigned char chara = (unsigned char)c;
  size_t i;

  for (i = 0;i < n ; i++, string++)
  {
    /*make the comperation*/
    if (*string == chara) 
      return (void *)string;
  }
  return (NULL);
}
