#include "hash_tables.h"
/**
 * hash_table_delete - free the hash and delete all items.
 * @ht: the hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current = NULL;
    hash_node_t *temp = NULL;
    unsigned long int i = 0;

    if (ht == NULL)
        return;

    while (i < ht->size)
    {
        current = ht->array[i];

        while (current)
        {
            temp = current;
            /*free(temp->key);*/
            free(temp->value);
            free(temp);
            current = current->next;
        }
        i++;
    }
    free(ht->array);
    free(ht);
}
