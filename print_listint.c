#include "lib.h"
/**
 * print_listint - print list within elements 
 * @h: the list to be printed
 * Return: the number of elements within a list
*/
size_t print_listint(const listint_t *h)
{
    const listint_t* current = h;
    size_t i = 0;
    while (current != NULL)
    {
        printf("[%d]->", current->n);
        current = current->next;
        i++;
    }
    printf("\n");
return (i);
}