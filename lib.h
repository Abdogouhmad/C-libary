#ifndef lib_h
#define lib_h

/*headers*/
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/*prototype functions*/
size_t _strlen(const char *s);
char* _strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
size_t _strlcat(char *dst, const char *src, size_t size);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t n);
char *_strnstr(const char *haystack, const char *needle, size_t range);
long long atoll(const char *str); 
#endif
