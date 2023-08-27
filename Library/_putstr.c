#include "lib.h"
/**
* _putstr - print the string within specific range
* @str: the string to be printed
* @n: the range of the character to be printed within newline
* Return: void
*/ 

char* _putstr(const char* str, ssize_t n)
{
  ssize_t i;
  const char nw = '\n';
  if (str == NULL) return NULL;

  for (i = 0; i < n && str[i] != '\0'; ++i)
  {
      write(1, &str[i], 1);
  }
  write(1, &nw, 1);

return (char*)(str);
}

