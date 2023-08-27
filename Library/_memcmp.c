#include "lib.h"
/**
* _memcmp - compare between two strings in specific range
* @s1: the 1st string 
* @s2: the 2nd string
* @n: the range of Comparison
* Return: 0 if they are equal and 1 if they are not
*
*/
int _memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *str1 = s1;
  const unsigned char *str2 = s2;
  size_t i;
  
  for (i = 0; i < n ; ++i, str1++, str2++)
  {
    /*if the strings are not equal return 1*/
    if (*str1 != *str2)
      return (1);
  }
  return (0);
}

