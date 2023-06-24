#ifndef lib_h
#define lib_h
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
/*headers*/
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
/*prototype functions*/
size_t _strlen(const char *s);
char* _strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
size_t _strlcat(char *dst, const char *src, size_t size);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t n);
char *_strnstr(const char *haystack, const char *needle, size_t range);
/*long long atoll(const char *str);*/
int _isdigit(int nm);
void *_memcpy(void *dst, const void *src, size_t range);
void *_memccpy(void *dst, const void *src, int c, size_t n);
void *_memmove(void *dest, const void *src, size_t n);
void *_memchr(const void *s, int c, size_t n);
char *_strrchr(const char *s, int c);
char *_strdup(const char *s1);
int _memcmp(const void *s1, const void *s2, size_t n);
void *_memset(void *b, int c, size_t len);
void _bzero(void *s, size_t n);
/*non stander lib*/
int _putchar(char c);
char *_putstr(const char *str, ssize_t n);
void _putnbr(int num);
char *_itoa(int number);
char *_strtrim(char *str);
/*linked list*/
listint_t *insertion(listint_t **head, int n);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint2(listint_t **head);
#endif
