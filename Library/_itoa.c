#include "lib.h"
/**
* _itoa - convert digit into string
* @num: the string to be converted 
* Return: string 
*/
char *_itoa(int num)
{
  int Maxdigit = 12;
  char tmpo;
  char *output = (char *)malloc(Maxdigit * sizeof(char));
  int i = 0, j, d, negative = 0, digit;

  if (output == NULL) return (NULL);
  if (num == 0) output[i++] = '0';

  if (num < 0)
  {
    negative = 1;
    num = abs(num);
  }

  for (; num != 0; ++i)
  {
    digit = num % 10;
    output[i] = '0' + digit;
    num /= 10;
  }

  if (negative) output[i++] = '-';

  /* Reverse the string */
  for (j = 0, d = i - 1; j < d; j++, d--)
  {
    tmpo = output[d];
    output[d] = output[j];
    output[j] = tmpo;
  }
  output[i] = '\0';
  return (output);
}

