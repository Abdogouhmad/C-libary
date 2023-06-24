#include "lib.h"
/**
 * free_listint - free the list
 * @head: --
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}