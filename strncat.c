#include "lib.h"
#include <stddef.h>
/**
*
*
*/ 
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
int main()
{
    char* first = "This is ";
    char* last = "a potentially long string";
    size_t r;
    size_t size = 16;
    char* buffer[size];

    strcpy(buffer,first);
    r = _strncat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %ld\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}

