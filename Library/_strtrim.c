#include "lib.h"
/**
* _strtrim - trrims leading and trailing whitespace from a string
* @str: string to be trimmed
* Return; the final result
*/ 
char *_strtrim(char *str)
{
  char *trim = NULL;


  if (str == NULL) return NULL; /* Safety condition */
  for (; *str == ' '; str++); 
  trim = str + _strlen(str) - 1;

  for (; *trim == ' '; trim--)
    *trim = '\0';

return str;
}
int main()
{
    char string1[]="           I love you baby            ";
    char *string =_strtrim(string1);
    char *st = string1;
    printf("before-> [%s]\n", st);
    printf("after -> [%s]\n",string);    
    return 0;
}
