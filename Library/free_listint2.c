#include "lib.h"
/**
 * free_listint2 - free the list
 * @head: the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *tmp;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}