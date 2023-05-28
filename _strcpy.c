#include "lib.h"
/**
 * _strcpy - Copies a string from source to destination.
 *
 * @dest: Pointer to the destination
 * string where the copied string will be stored.
 * 
 * @src: Pointer to the source string that will be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src)
{
  size_t i;

  for (i = 0; i < src[i]; i++)
    dest[i] = src[i];
  dest[i] = '\0';

  return (0);
}

