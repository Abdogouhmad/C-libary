#include "lib.h"
/**
 * _strcat - concatenating between two strings it handl 
 * literal and non-literal string with allocating
 * don't forget to free the main
 * @dest: the destination string. It is the string to which the sourc
 * string will be concatenated.
 * @src: the string that will be appended to 
 * the end of the destination string.
 * Return: the result of concatenation
 * */
char* _strcat(char* dest, const char* src)
{
	size_t i = 0, j = 0;
  size_t dest_len = _strlen(dest), src_len = _strlen(src);
  char* string = malloc ((dest_len + src_len + 1) * sizeof(char));
  
  if (string == NULL)
  {
    printf("error\n");
    return (NULL);
  }
  for (i = 0; i < dest_len; i++)
    string[i] = dest[i];

  for (j = 0; j < src_len; j++, i++)
    string[i] = src[j];

  string[i] = '\0';
  return (string);
}

