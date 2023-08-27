#include "lib.h"
/**
* _strlen - function that count how many charatcters
* within function
* @s: is the string 
* Return: the number of charatcters
*/
size_t _strlen(const char *s)
{
  size_t i = 0;

  while (s[i] != '\0')
    i++;
  return (i);
}

