#include "lib.h"
/**
* _putchar - print on character
* @c: the character to be printed
* Return: the character
*/
int _putchar(char c)
{
  return (write(1, &c,1));
}

