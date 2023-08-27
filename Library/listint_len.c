#include "lib.h"

size_t listint_len(const listint_t *h)
{
    const listint_t *len = h;
    size_t count = 0;

    while (len != NULL)
    {
        len = len->next;
        count++;
    }
    return (count);
}