#include "lib.h"
/**
 * add_nodeint_end - add the num at the end of the list
 * @head: the head of the list
 * @n: the element to be add
 * Return: the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *nwnode = malloc(sizeof(listint_t));
    listint_t *current;

    if (nwnode == NULL)
        return (NULL);

    nwnode->n = n;
    nwnode->next = NULL;

    if (*head == NULL)
        *head = nwnode;

    current = *head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = nwnode;

    return (nwnode);
}
