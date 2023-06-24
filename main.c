#include "lib.h"
/**
 *
 *
 */
int main(void)
{
    listint_t *head;
    size_t n;
    head = NULL;
    add_nodeint(&head, 19);
    add_nodeint_end(&head, -1);
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
