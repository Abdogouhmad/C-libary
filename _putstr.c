#include "lib.h"
#include <string.h>
/**
* _putstr - print the string within specific range
* @str: the string to be printed
* @n: the range of the character to be printed within newline
* Return: void
*/ 
void _putstr(const char* str, size_t n)
{
    size_t i;
    const char nw = '\n';
    //size_t d = strlen(n);
    for (i = 0; i < n; ++i)
    {
        write(1, &str[i], 1);
    }
    write(1, &nw,1);
}

int main() {
    char *bff = "hello, world!";
     size_t len = strlen(bff) - 1;
    _putstr(bff, len);

    return 0;
}
