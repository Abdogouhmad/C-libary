#include "hash_tables.h"
/**
* hash_table_print - print the hash table
* @ht: the hash table to be printed
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}
				printf("'%d': '%s'", *(int *)current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
	}
	printf("}\n");
}

