#include "lib.h"
#include <ctype.h>
/**
* _atoll - convert the string of characters into digits
* @str: the string of characters
* Return: the number in degits
*/
long long _atoll(const char *str)
{
  long long output = 0;
  size_t sign = 1, i;
  /* represent the function of if ``isspace`` the while loop check if there is n lines or spaces in the string so it will continue*/
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' /*isspace(str[i])*/)
    i++;
   /*if the current numbers are presented by '-' or '+' continue looping*/
  if (str[i] == '-')
  {
    sign -= 1;
    i++;
  }
  else if (str[i] == '+')
    i++;
  /*if the current numbers are bettween '0 -> 9' keep looping*/  
  for (i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
    output = output * 10 + (str[i] - '0');
return (output * sign);
}


int main() {
    const char *str = "12345939392926738";
    char *sd = "20";
    long long number = _atoll(str);
    long long nm = _atoll(sd);
    printf("Number: %lld\n", number);
    printf("hey -> %lld\n", nm);
    return 0;
}
