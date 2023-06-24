#include "lib.h"
/**
 * pop_listint - remove element from the head
 * @head: the head
 * Return: the element that is removed
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp = *head;
    int data;

    if (tmp == NULL)
        return (0);
    *head = tmp->next;
    data = tmp->n;
    return (data);
}