#include "lib.h"
/**
* add_nodeint - insert the elements into List
* @head: the head of the list
* @n: the elements to be inserted
* Return: the elements
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *my_node = malloc(sizeof(listint_t));
    if (my_node == NULL)
        return (NULL);
    my_node->n = n;
    my_node->next = *head;
    *head = my_node;
    return (my_node);
}