#include "lib.h"

/**
 * _strncat - Appends the 'src' string to the end of the 'dst' string, ensuring null-termination.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum size of the resulting string (including null-terminating character).
 * @Return: the string with specific size.
 * */
char* _strncat(char *dest, const char *src, size_t n)
{
  size_t len_dest = _strlen(dest), len_src = _strlen(src);
  size_t i, j;
  char* string = malloc((len_dest + len_src + 1) * sizeof(char));

  if (string == NULL)
    return (0);
  for (i = 0; dest[i] != '\0'; i++)
    string[i] = dest[i];
  /*appending*/
  for (j = 0; src[j] != '\0'&& n > 0; j++, i++, n--)
    string[i] = src[j];
  /*null character add for dest string*/
  string[i] = '\0';
  return (string);
}


